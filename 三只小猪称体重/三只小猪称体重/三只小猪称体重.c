#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a, b, c;
	printf("��������ֻС������أ�KG)");
	scanf("%d%d%d\n", &a, &b, &c);
	if (a>b)
	{
		if (a>c)
		{
			printf("a����");
		} 
		else
		{
			printf("c����");
		}
	} 
	else
	{
		if (b>c)
		{
			printf("b����");
		} 
		else
		{
			printf("c����");
		}
	}
	return 0;
}