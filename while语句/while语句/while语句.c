#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i = 1;
	while (i<=100)
	{
		//printf("%d\n", i);  //��ѭ��
		//i++;  //������ѭ��
		/*if (i%2==0)
		{
			printf("%d\n", i);
		}
		i++;*/
		if (i%10==7||i/10==7||i%7==0)  //��λ��7��ʮλ��7��7�ı���
		{
			printf("������\n");
		} 
		else
		{
			printf("%d\n", i);
		}
		i++;
	}
	return 0;
}