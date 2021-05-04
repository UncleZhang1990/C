#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main0(void)
{
	char ch[100];
	//gets(ch);  //gets接收字符串可带空格
	//通过正则表达式  接收带空格字符串
	scanf("%[^\n]", ch);  //[^\n]接收非换行字符
	printf("%s\n", ch);
	return 0;
}
int main(void)
{
	char ch1[10];
	//fgets获取字符串少于元素个数时有\n 大于或等于则没有
	fgets(ch1, sizeof(ch1), stdin);
	printf("%s\n", ch1);
	return 0;
}