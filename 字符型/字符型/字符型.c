#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	//�ַ��ͱ���
	char ch;
	//%c ռλ�� �ַ���
	//printf("char���͵�ռ�ã�%c\n", sizeof ch);
	scanf("%c", &ch);
	printf("%c\n", ch - 32);  //-32 ת��д
	printf("\t11111\n");
	printf("\"���ɶ\"\n");
	return 0;
}