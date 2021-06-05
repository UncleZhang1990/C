#include <stdio.h>

int main01(void)
{
	int a = 0xaabbccdd;
	//a = 100;
	printf("%p\n", &a);
	getchar();
	return 0;
}

int main02(void)
{
	int a = 10;
	int* p;
	p = &a;
	printf("%p\n", &a);
	printf("%p\n", p);
	*p = 100;
	printf("%d\n", *p);
	return 0;
}

int main(void)
{
	//char ch = 'a';
	//char* p = &ch;
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(long*));
	printf("%d\n", sizeof(long long*));
	printf("%d\n", sizeof(float*));
	printf("%d\n", sizeof(double*));
	return 0;
}