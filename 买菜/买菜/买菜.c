#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	//�ƹ� 3Ԫ/500g
	//const���εĳ�����ֻ������
	const int price = 3;
	//price = 5;  err
	printf("%dԪ/��\n", price);  //%d ռλ������ʾ����int
	//���� �ڳ������й����п����޸ĵ���
	int weight;
	printf("�����빺�������\n");
	scanf("%d", &weight);
	printf("������%d��\n", weight);
	int price_all;
	price_all = price * weight;
	printf("����Ҫ֧��%dԪ\n", price_all);
	system("pause");
	return 0;
}