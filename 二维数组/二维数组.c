#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int arr[2][3] =
	{
		{1,2,3},
		{4,5,6}
	};
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d\n", arr[i][j]);
		}
	}
	printf("��ά�����С��%d\n", sizeof(arr));
	printf("��ά���鵥�д�С��%d\n", sizeof(arr[0]));
	printf("��ά����Ԫ�ش�С��%d\n", sizeof(arr[0][0]));
	printf("��ά����������%d\n", sizeof(arr) / sizeof(arr[0]));
	printf("��ά����������%d\n", sizeof(arr[0]) / sizeof(arr[0][0]));
	//��ά�����׵�ַ
	printf("%p\n", &arr);
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[1]);
	printf("%p\n", &arr[0][0]);
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%p\n", &arr[i][j]);
		}
	}
	return 0;
}
