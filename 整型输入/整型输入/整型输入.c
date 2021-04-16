//#define _CRT_SECURE_NO_WARNINGS  必须第一行
#include <stdio.h>
#pragma warning(disable:4996)
int main(void)
{
	int a;
	//通过键盘输入为a赋值
	//& 取址符
	scanf("%d", &a);
	printf("%d\n", a);
	return 0;
}