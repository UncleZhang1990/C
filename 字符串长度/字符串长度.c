#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main01(void)
{
	char ch[100] = "hello world";
	printf("�����С%d\n", sizeof(ch));
	printf("�ַ�������%d\n", strlen(ch));
	return 0;
}
int main(void)
{
	char ch[] = "hello world";
	int len = 0;
	while (ch[len] != '\0')
	{
		len++;
	}
	printf("�ַ�������%d\n", len);
	return 0;
}