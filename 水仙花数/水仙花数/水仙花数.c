//100~999��ˮ�ɻ���
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main(void)
{
	int i = 100;
	do 
	{
		//��λ
		int a = i % 10;
		//ʮλ
		int b = i / 10 % 10;
		//��λ
		int c = i / 100;
		if (pow(a, 3) + pow(b, 3) + pow(c, 3) == i)
		{
			printf("%d\n", i);
		}
		i++;
	} while (i < 1000);
}