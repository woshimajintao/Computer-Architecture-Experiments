#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <time.h>
int main()
{
	int x, y, i;
	unsigned long long a;
	double b;
	clock_t start, end;
	printf("please input the times of these two parts!\n");
	scanf("%d%d", &x, &y);            /*控制两部分的运行频率*/
	start = clock();
	for (i = 0; i < x; i++)                  /*整数操作*/
	{
		a = 1234567 * 5678123;
	}
	end = clock();
	printf("int time is %f\n", (double)(end - start) / CLK_TCK);
	start = clock();
	for (i = 0; i < y; i++)                /*浮点操作*/
	{
		b = 12345678.5678*56781230.1234;
	}
	end = clock();
	printf("double time is %f\n", (double)(end - start) / CLK_TCK);
	return 0;
}
