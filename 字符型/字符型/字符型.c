#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	//字符型变量
	char ch;
	//%c 占位符 字符型
	//printf("char类型的占用：%c\n", sizeof ch);
	scanf("%c", &ch);
	printf("%c\n", ch - 32);  //-32 转大写
	printf("\t11111\n");
	printf("\"你瞅啥\"\n");
	return 0;
}