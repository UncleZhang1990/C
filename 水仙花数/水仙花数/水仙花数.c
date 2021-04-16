//100~999的水仙花数
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main(void)
{
	int i = 100;
	do 
	{
		//个位
		int a = i % 10;
		//十位
		int b = i / 10 % 10;
		//百位
		int c = i / 100;
		if (pow(a, 3) + pow(b, 3) + pow(c, 3) == i)
		{
			printf("%d\n", i);
		}
		i++;
	} while (i < 1000);
}