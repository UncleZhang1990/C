#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char a = 'a';
	char *b = "Hello World\0";
	//\0 ռλ�� ������ֹͣ����ַ���
	char *c = "Hello\0 World";
	char d[11] = "Hello World";
	char e = 'a';
	//%s ռλ�� ����ַ�����
	printf("%s\n", b);
	printf("%s\n", c);
	printf("%s\n", d);
	//putchar() ����ַ� ASCII�뷶Χ��
	putchar(e);
	printf("\n");
	putchar('B');
	printf("\n");
	char ch_1, ch_2;
	scanf("%d%d", &ch_1, &ch_2);
	//\t �Ʊ��
	printf("%d\t%d", ch_1, ch_2);
	char ch_3;
	ch_3 = getchar();
	putchar(ch_3);
	return 0;
}