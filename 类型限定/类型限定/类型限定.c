#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	extern int a;  //预先声明 基本不用
	//定义
	int a = 10;
	volatile int num;//防止编译器优化
	register num1;//定义寄存器变量 优化效率 但占用寄存器
	return 0;
}