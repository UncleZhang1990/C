#include <stdio.h>
int main0301(void)
{
	signed int a = 10;
	printf("%d\n", a);
	unsigned int b = -10;
	//%u ռλ�� ����޷���ʮ����������ֵ
	//printf("%u\n", b);
	printf("%d\n", b);
	return 0;
}
int main(void)
{
	/*
	//������ 0~2  �˽��� 0~7  ʮ������ 0~9 10~15(a~f A~F)
	int a = 10;
	printf("%d\n", a);
	//ռλ�� %x ���һ��ʮ������������ֵ
	printf("%x\n", a);  //Сд
	printf("%X\n", a);  //��д
	//ռλ�� %o ���һ���˽���������ֵ
	printf("%o\n", a);
	*/

	//����˽��� ��0��ͷ
	int a = 07123;
	//����ʮ������ ��0x��ͷ
	int b = 0xabc;
	printf("%d\n", a);
	printf("%o\n", a);
	printf("%x\n", a);
	printf("%d\n", b);
	printf("%o\n", b);
	printf("%x\n", b);
	return 0;
}