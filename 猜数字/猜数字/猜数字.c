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
			printf("猜大了\n");
		} 
		else if (num < value)
		{
			printf("猜小了\n");
		}
		else if (num = value)
		{
			printf("猜中了\n");
			break;
		}
	}
	return 0;
}