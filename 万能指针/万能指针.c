#include<stdio.h>

int main(void)
{
	int a = 10;
	void* p = &a;
	//����ָ����Խ��������������͵ı���
	*(int*)p = 100;
	//���޸�����ָ��ָ��ı���ʱ�����ҵ���������������
	printf("%p\n", p);
	printf("%d\n", a);
	printf("%d\n", *(int*)p);
}