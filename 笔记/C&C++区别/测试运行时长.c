#include <stdio.h>
#include <time.h>

//捕捉从程序开始运行到clock()被调用时所耗费的时间。这个时间单位是clock tick，即“时钟打点”。
clock_t start, stop;
/* clock_t是clock()函数返回的变量类型 */
double duration;
/* 记录被测函数运行时间，以秒为单位 */

int main()
{	/* 不在测试范围内的准备工作写在clock()调用之前 */
	start = clock();
	MyFunction();
	stop = clock();
	duration = ((double)(stop - start)) / CLK_TCK; //常数CLK_TCK：机器时钟每秒所走的时钟打点数。
	
	/* 其他不在测试范围的处理写在后面，例如输出duration的值 */
	return 0;
}