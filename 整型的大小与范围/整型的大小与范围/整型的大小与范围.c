#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main(void)
{
	//整型
	int a = 10;
	//短整型
	short b = 20;
	//长整型
	long c = 30;
	//长长整型
	long long d = 40;

	printf("%d\n", a);
	//%hd 占位符 短整型
	printf("%hd\n", b);
	//%ld 占位符 长整型
	printf("%ld\n", c);
	//%lld 占位符 长长整型
	printf("%lld\n", d);

	//sizeof () 计算数据类型在内存中所占字节（BYTE）
	//sizeof (数据类型)  sizeof (变量名)  sizeof 变量名
	//unsigned int len = sizeof(int);
	//printf("%u\n", len);
	printf("整型：%d\n", sizeof a);
	printf("短整型：%d\n", sizeof b);
	printf("长整型：%d\n", sizeof c);
	printf("长长整型：%d\n", sizeof d);
	return EXIT_SUCCESS;
}