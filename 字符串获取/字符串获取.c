#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main0(void)
{
	char ch[100];
	//gets(ch);  //gets�����ַ����ɴ��ո�
	//ͨ��������ʽ  ���մ��ո��ַ���
	scanf("%[^\n]", ch);  //[^\n]���շǻ����ַ�
	printf("%s\n", ch);
	return 0;
}
int main(void)
{
	char ch1[10];
	//fgets��ȡ�ַ�������Ԫ�ظ���ʱ��\n ���ڻ������û��
	fgets(ch1, sizeof(ch1), stdin);
	printf("%s\n", ch1);
	return 0;
}