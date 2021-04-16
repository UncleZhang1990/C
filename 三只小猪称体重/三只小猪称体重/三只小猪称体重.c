#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a, b, c;
	printf("请输入三只小猪的体重（KG)");
	scanf("%d%d%d\n", &a, &b, &c);
	if (a>b)
	{
		if (a>c)
		{
			printf("a最重");
		} 
		else
		{
			printf("c最重");
		}
	} 
	else
	{
		if (b>c)
		{
			printf("b最重");
		} 
		else
		{
			printf("c最重");
		}
	}
	return 0;
}