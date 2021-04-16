#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	float p = 3.14;
	int w = 2;
	//隐式转换
	//float sum = p * w;
	//强制转换
	int sum = (int)p*w;
	printf("%d\n", sum);
}