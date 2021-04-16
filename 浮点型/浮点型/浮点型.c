#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a = 10;
	float b = 3.14;
	printf("%p\n", &a);
	printf("%p\n", &b);
	return 0;
}