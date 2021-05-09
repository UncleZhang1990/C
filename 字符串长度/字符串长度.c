#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main01(void)
{
	char ch[100] = "hello world";
	printf("数组大小%d\n", sizeof(ch));
	printf("字符串长度%d\n", strlen(ch));
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
	printf("字符串长度%d\n", len);
	return 0;
}