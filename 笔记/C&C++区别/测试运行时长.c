#include <stdio.h>
#include <time.h>

//��׽�ӳ���ʼ���е�clock()������ʱ���ķѵ�ʱ�䡣���ʱ�䵥λ��clock tick������ʱ�Ӵ�㡱��
clock_t start, stop;
/* clock_t��clock()�������صı������� */
double duration;
/* ��¼���⺯������ʱ�䣬����Ϊ��λ */

int main()
{	/* ���ڲ��Է�Χ�ڵ�׼������д��clock()����֮ǰ */
	start = clock();
	MyFunction();
	stop = clock();
	duration = ((double)(stop - start)) / CLK_TCK; //����CLK_TCK������ʱ��ÿ�����ߵ�ʱ�Ӵ������
	
	/* �������ڲ��Է�Χ�Ĵ���д�ں��棬�������duration��ֵ */
	return 0;
}