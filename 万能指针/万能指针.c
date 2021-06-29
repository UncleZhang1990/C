#include<stdio.h>

int main(void)
{
	int a = 10;
	void* p = &a;
	//万能指针可以接受任意数据类型的变量
	*(int*)p = 100;
	//在修改万能指针指向的变量时，需找到变量的数据类型
	printf("%p\n", p);
	printf("%d\n", a);
	printf("%d\n", *(int*)p);
}