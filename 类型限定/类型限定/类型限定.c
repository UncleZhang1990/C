#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	extern int a;  //Ԥ������ ��������
	//����
	int a = 10;
	volatile int num;//��ֹ�������Ż�
	register num1;//����Ĵ������� �Ż�Ч�� ��ռ�üĴ���
	return 0;
}