#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main01(void)
{
	/*
	int a = 10;
	int b = 7;
	printf("%f\n", a/b);
	printf("%d\n", a % b);
	*/
	int a1 = 10;
	/*
	a++;  ������
	++a;  ǰ����
	*/
	int b1 = ++a1 * 10;  //a�ȼ�1��������
	printf("%d %d\n", a1, b1);
	int a2 = 10;
	int b2 = a2++ * 10;  //a�����㣬�ټ�1
	printf("%d %d", a2, b2);
}
int main(void)
{
	int a = 10;
	int b = 20;
	int c = 10;
	printf("%d\n", a == b);
	printf("%d\n", a != b);
	printf("%d\n", a >= b);
	printf("%d\n", a <= b);
	printf("%d\n", a > b);
	printf("%d\n", a < b);
	printf("%d\n", c = ++a <= b * 2);
}