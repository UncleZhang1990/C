//�����Ķ����ʹ��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int add(int a, int b)
{
	//int sum = a + b;
	return a+b;
}
void print(void)
{
	printf("HelloWorld");
}
int main01(void)
{
	int a = 10;
	int b = 20;
	int c;
	c = add(a, b);
	printf("c=%d\n", c);
	print();
	return 0;
}
void swap(int a, int b)
{
	int temp;
	printf("����ǰa=%d b=%d\n", a, b);
	temp = a;
	a = b;
	b = temp;
	printf("������a=%d b=%d\n", a, b);
}
int main02(void)
{
	int a = 10;
	int b = 20;
	swap(a, b);
	return 0;
}
int my_strcmp(char ch1[], char ch2[])
{
	int i = 0;
	while (ch1[i] == ch2[i])
	{
		//�ж��Ƿ��ַ�����β
		if (ch1[i] == '\0')
		{
			return 0;
		}
		i++;
	}
	return ch1[i] > ch2[i] ? 1 : -1;
}
int main(void)
{
	//�Ƚ������ַ����Ƿ���ͬ����ͬ����0����ͬ����1��-1
	char ch1[100];
	char ch2[100];
	scanf("%s", ch1);
	scanf("%s", ch2);
	int return_value = my_strcmp(ch1, ch2);
	switch (return_value)
	{
	case 1:
		printf("����ͬ");
		break;
	case -1:
		printf("����ͬ");
		break;
	case 0:
		printf("��ͬ");
		break;
	default:
		break;
	}
	return 0;
}