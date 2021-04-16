#include <stdio.h>
int main0301(void)
{
	signed int a = 10;
	printf("%d\n", a);
	unsigned int b = -10;
	//%u 占位符 输出无符号十进制整型数值
	//printf("%u\n", b);
	printf("%d\n", b);
	return 0;
}
int main(void)
{
	/*
	//二进制 0~2  八进制 0~7  十六进制 0~9 10~15(a~f A~F)
	int a = 10;
	printf("%d\n", a);
	//占位符 %x 输出一个十六进制整型数值
	printf("%x\n", a);  //小写
	printf("%X\n", a);  //大写
	//占位符 %o 输出一个八进制整型数值
	printf("%o\n", a);
	*/

	//定义八进制 以0开头
	int a = 07123;
	//定义十六进制 以0x开头
	int b = 0xabc;
	printf("%d\n", a);
	printf("%o\n", a);
	printf("%x\n", a);
	printf("%d\n", b);
	printf("%o\n", b);
	printf("%x\n", b);
	return 0;
}