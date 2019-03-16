#include "myinclude.h"

//以链表的形式来存储数据（采用何种数据结构）
struct msg {
	int num;
	struct msg *next;
};

struct msg *head = NULL;
struct msg *mp = NULL;

//静态初始化，一个条件变量和一个互斥量
pthread_cond_t has_product = PTHREAD_COND_INITIALIZER;
pthread_mutex_t lock = PTHREAD_MUTEX_INITIALIZER;

void *producter(void *arg)
{
	for (;;) {
		mp = malloc(sizeof(struct msg));
		mp->num = rand() % 400 + 1; //模拟生产一个产品
		printf("------producted------%d\n", mp->num);

		pthread_mutex_lock(&lock);
		mp->next = head;
		head = mp; 
		pthread_mutex_unlock(&lock);

		pthread_cond_signal(&has_product); //将等待在该条件变量上的一个线程唤醒
		sleep(rand() % 5); 
		}   
}

void *consumer(void *p) 
{
	for (;;) {
		pthread_mutex_lock(&lock);
		while (head == NULL) { //头指针为空，说明没有节点
			pthread_cond_wait(&has_product, &lock); //1、阻塞、等待条件变量has_product满足；2、同时释放上面的锁lock；3、当条件变量满足时，解锁阻塞，同时锁住lock锁。
//此时消费者什么也不干，等待条件变量信号产生。
		}    
		mp = head;
		head = mp->next; //模拟消费掉一个产品
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