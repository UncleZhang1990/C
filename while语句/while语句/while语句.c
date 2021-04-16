#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i = 1;
	while (i<=100)
	{
		//printf("%d\n", i);  //死循环
		//i++;  //跳出死循环
		/*if (i%2==0)
		{
			printf("%d\n", i);
		}
		i++;*/
		if (i%10==7||i/10==7||i%7==0)  //个位是7，十位是7，7的倍数
		{
			printf("敲桌子\n");
		} 
		else
		{
			printf("%d\n", i);
		}
		i++;
	}
	return 0;
}