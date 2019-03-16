#include "myinclude.h"

//���������ʽ���洢���ݣ����ú������ݽṹ��
struct msg {
	int num;
	struct msg *next;
};

struct msg *head = NULL;
struct msg *mp = NULL;

//��̬��ʼ����һ������������һ��������
pthread_cond_t has_product = PTHREAD_COND_INITIALIZER;
pthread_mutex_t lock = PTHREAD_MUTEX_INITIALIZER;

void *producter(void *arg)
{
	for (;;) {
		mp = malloc(sizeof(struct msg));
		mp->num = rand() % 400 + 1; //ģ������һ����Ʒ
		printf("------producted------%d\n", mp->num);

		pthread_mutex_lock(&lock);
		mp->next = head;
		head = mp; 
		pthread_mutex_unlock(&lock);

		pthread_cond_signal(&has_product); //���ȴ��ڸ����������ϵ�һ���̻߳���
		sleep(rand() % 5); 
		}   
}

void *consumer(void *p) 
{
	for (;;) {
		pthread_mutex_lock(&lock);
		while (head == NULL) { //ͷָ��Ϊ�գ�˵��û�нڵ�
			pthread_cond_wait(&has_product, &lock); //1���������ȴ���������has_product���㣻2��ͬʱ�ͷ��������lock��3����������������ʱ������������ͬʱ��סlock����
//��ʱ������ʲôҲ���ɣ��ȴ����������źŲ�����
		}    
		mp = head;
		head = mp->next; //ģ�����ѵ�һ����Ʒ
		pthread_mutex_unlock(&lock);

		printf("------Consume------%d\n", mp->num);
		free(mp);
		sleep(rand() % 5);
	}
}


int main(int argc, char *argv[])
{
	pthread_t pid, cid;
	srand(time(NULL));

	pthread_create(&pid, NULL, producter, NULL);
	pthread_create(&cid, NULL, consumer, NULL);

	pthread_join(pid, NULL);
	pthread_join(cid, NULL);

	return 0;
}