#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	float p = 3.14;
	int w = 2;
	//��ʽת��
	//float sum = p * w;
	//ǿ��ת��
	int sum = (int)p*w;
	printf("%d\n", sum);
}