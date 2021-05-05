#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main01(void)
{
	//char ch[] = "Hello World";
	//puts×Ô´ø»»ÐÐ
	//puts(ch);
	//puts("Hello\0 World");
	puts("");
	return 0;
}
int main(void)
{
	char ch[] = "Hello World";
	fputs(ch, stdout);
	return 0;
}