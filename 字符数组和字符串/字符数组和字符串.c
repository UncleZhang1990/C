#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main0(void)
{
	//定义字符数组
	//char arr[5] = { 'h','e','l','l','o' };
	//printf("%d\n", sizeof(arr));
	//字符
	//char ch = 'a';
	//字符串  结束标志为\0
	//char* arr = "hello";
	//char arr[] = "hello";
	//char arr[] = { 'h','e','l','l','o','\0' };
	//for (int i = 0; i < sizeof(arr)/ sizeof(arr[0]); i++)
	//{
		//printf("%c", arr[i]);
	//}
	//printf("%s", arr);
	return 0;
}

int main(void)
{
	//定义字符数组存储字符串
	char ch[11];
	scanf("%10s", ch);
	printf("%s\n", ch);
	return 0;
}
int main1(void)
{
	//拼接字符串
	char ch1[] = "Hello";
	char ch2[] = "World";
	char ch3[20];
	int i = 0;
	int j = 0;
	while (ch1[i] != '\0')
	{
		ch3[i] = ch1[i];
		i++;
	}
	while (ch2[j] != '\0')
	{
		ch3[i + j] = ch2[j];
		j++;
	}
	printf("%s\n", ch3);
	return 0;
}