#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int score;
	scanf("%d\n", &score);
	if (score > 700)
	{
		printf("��Ҫ���廪��");
		if (score>720)
		{
			printf("�����");
		} 
		else if (score>710)
		{
			printf("����");
		}
		else
		{
			printf("��Ĺ");
		}
	}
	else if(score > 680)
	{
		printf("��Ҫ�ϱ���");
	}
	else
	{
		printf("��Ҫ�ϴ��ǡ�");
	}
	return 0;
}