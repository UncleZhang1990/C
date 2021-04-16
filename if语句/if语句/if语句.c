#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int score;
	scanf("%d\n", &score);
	if (score > 700)
	{
		printf("我要上清华。");
		if (score>720)
		{
			printf("计算机");
		} 
		else if (score>710)
		{
			printf("考古");
		}
		else
		{
			printf("盗墓");
		}
	}
	else if(score > 680)
	{
		printf("我要上北大。");
	}
	else
	{
		printf("我要上传智。");
	}
	return 0;
}