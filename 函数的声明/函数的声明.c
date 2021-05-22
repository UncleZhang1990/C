//函数的声明
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//函数声明
extern int Add(int a, int b);

//函数调用
int main(void)
{
	int a, b, result;
	scanf("%d,%d", &a, &b);
	printf("%d\n", Add(a, b));
	return 0;
}

//函数定义
int Add(int a, int b)
{
	return a + b;
}