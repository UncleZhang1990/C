//����������
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//��������
extern int Add(int a, int b);

//��������
int main(void)
{
	int a, b, result;
	scanf("%d,%d", &a, &b);
	printf("%d\n", Add(a, b));
	return 0;
}

//��������
int Add(int a, int b)
{
	return a + b;
}