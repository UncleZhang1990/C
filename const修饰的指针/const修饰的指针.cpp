#include<stdio.h>

int main01(void)
{
	//����
	const int a = 10;
	//a=100; err
	return 0;
}

int main02(void)
{
	int a = 10, b = 20;
	const int* p = &a;
	//const����ָ������
	//�����޸�ָ�������ֵ
	//�������޸�ָ��ָ���ڴ�ռ��ֵ
	
	//p = &b; //ok
	//*p = 100; err
	printf("%d\n", *p);
	return 0;
}

int main03(void)
{
	int a = 10, b = 20;
	int* const p = &a;
	//const����ָ�����
	//�����޸�ָ��ָ���ڴ�ռ��ֵ
	//�������޸�ָ�������ֵ

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
	//const����ָ�����ͺ�ָ�����
	//�������޸�ָ��ָ���ڴ�ռ��ֵ
	//�������޸�ָ�������ֵ
	//*p = b;  //err
	//p = &b;  //err
	return 0;
}