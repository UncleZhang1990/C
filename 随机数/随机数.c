#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main01(void)
{
	/*
	time_t timer = time(NULL);
	srand((size_t)timer);
	*/
	//������������
	srand((size_t)time(NULL));
	for (int i = 0; i <= 100; i++)
	{
		printf("%d\n", rand() % 100);//0~99
	}
	for (int i = 0; i <= 100; i++)
	{
		printf("%d\n", rand() % 51 + 50);//50~100
	}
	return 0;
}
int main(void)
{
	//˫ɫ�� 6������ 1��32   1������ 1��16
	srand((unsigned int)time(NULL));
	int arr[6] = { 0 };
	int value = 0;
	int flag = 0;
	int j;
	for (int i = 0; i < 6; i++)
	{
		value = rand() % 31 + 1;
		//ȥ��
		for (j = 0; j < flag; j++)
		{
			if (value == arr[i])
			{
				i--;
				break;
			}
		}
		if (j == flag)
		{
			arr[flag] = value;
			flag++;
		}
	}
	for (int i = 0; i < 6; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}