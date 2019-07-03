#include <stdio.h>
#include <sys/types.h>
#include <signal.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <ctype.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <pthread.h>

void sys_err(char *str, int exitno)
{
	perror(str);
	exit(exitno);
}


#include </home/wyp/Desktop/myinclude.h>

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



#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int N;
    int min, max;
    scanf("%d", &N);
    if (N < 0 | N > 100000)
    {
        printf("请输入非负整数且不大于100000");
        exit(1);
    }
    int num[N][2];
    for (int i = 0; i < N; i++)
    {
        scanf("%d %d", num[i], num[i] + 1);
    }
    min = num[0][0];
    max = num[1][0];
    for (int i = 0; i < N; i++)
    {
        if (num[i][0] < min)
            min = num[i][0];
        if (num[i][1] > max)
            max = num[i][1];
    }
    printf("%d %d\n", min, max);
    return 0;
}
/*#include <stdio.h>
int main(void)
{
    int q, num1, num2;
    scanf("%d", &q);
    int num[q][2];
    for (int i = 0; i < q ; i++)
	{
        scanf("%d %d", &num[i][0],&num[i][1]);

		printf("%d %d\n", num[i][0], num[i][1]);
	}
		
    for (int i = 0; i < q; i++)
    {
        if (num[i][0] % 2)
            num1 = (num[i][0] - 1) / 2;
        else
            num1 = (num[i][0] - 2) / 2 - num[i][0] + 1;
        
        if (num[i][1] % 2)
            num2 = -num[i][1] +((num[i][1] - 1) / 2);
        else
            num2 = num[i][1] / 2;
        printf("%d\n", num2 - num1);
    }
    return 0;
}*/





/* #include <stdio.h>

int main(void)
{
    int m, n;
    scanf("%d %d", &m, &n);
    int i = 1, j = 1, k = 1;
    int t = m - n;
    while (m--)
    {
        i = m * i;
    }
	printf("%d\n", i);
    while (n--)
    {
        j = n * j;
    }
    while (t--)
    {
        k = t * k;
    }
    printf("%d\n", i / (j * k));
    
    return 0;
} */