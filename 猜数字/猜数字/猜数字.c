#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
int main(void)
{
	srand((unsigned int)time(NULL));
	int value = rand() % 100;//0~99
	int num;
	for (;;)
	{
		scanf("%d", &num);
		if (num > value)
		{
			printf("�´���\n");
		} 
		else if (num < value)
		{
			printf("��С��\n");
		}
		else if (num = value)
		{
			printf("������\n");
			break;
		}
	}
	return 0;
}