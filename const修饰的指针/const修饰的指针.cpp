#include<stdio.h>

int main01(void)
{
	//常量
	const int a = 10;
	//a=100; err
	return 0;
}

int main02(void)
{
	int a = 10, b = 20;
	const int* p = &a;
	//const修饰指针类型
	//可以修改指针变量的值
	//不可以修改指针指向内存空间的值
	
	//p = &b; //ok
	//*p = 100; err
	printf("%d\n", *p);
	return 0;
}

int main03(void)
{
	int a = 10, b = 20;
	int* const p = &a;
	//const修饰指针变量
	//可以修改指针指向内存空间的值
	//不可以修改指针变量的值

	*p = b;  //ok
	//p = &b;  //err
	printf("%d\n", *p);
	return 0;
}

int main(void)
{
	int a = 10;
	int b = 20;
	const int* const p = &a;
	//const修饰指针类型和指针变量
	//不可以修改指针指向内存空间的值
	//不可以修改指针变量的值
	//*p = b;  //err
	//p = &b;  //err
	return 0;
}