#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main(void)
{
	//����
	int a = 10;
	//������
	short b = 20;
	//������
	long c = 30;
	//��������
	long long d = 40;

	printf("%d\n", a);
	//%hd ռλ�� ������
	printf("%hd\n", b);
	//%ld ռλ�� ������
	printf("%ld\n", c);
	//%lld ռλ�� ��������
	printf("%lld\n", d);

	//sizeof () ���������������ڴ�����ռ�ֽڣ�BYTE��
	//sizeof (��������)  sizeof (������)  sizeof ������
	//unsigned int len = sizeof(int);
	//printf("%u\n", len);
	printf("���ͣ�%d\n", sizeof a);
	printf("�����ͣ�%d\n", sizeof b);
	printf("�����ͣ�%d\n", sizeof c);
	printf("�������ͣ�%d\n", sizeof d);
	return EXIT_SUCCESS;
}