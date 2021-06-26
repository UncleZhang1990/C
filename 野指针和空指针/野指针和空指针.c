#include <stdio.h>

int main01(void)
{
	int a = 10;
	int p = &a;
	*(int*)p = &a;
	return 0;
}

int main02(void)
{
	char ch = 'a';
	int* p = &ch;
	//*p = 123456;

	printf("%d\n", *p);
	printf("%d\n", ch);
	/*printf("%p\n", p);
	printf("%p\n", &ch);*/
	return 0;
}

int main03(void)
{
	int* p = 100;
	
	printf("%d\n", *p);
	return 0;
}

int main(void)
{
	int* p = NULL;
	return 0;
}