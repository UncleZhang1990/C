#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	//��ά����
	//��ά����
	//�������� ������[��][��][��]
	int arr[2][3][4] =
	{
		{
			{1,2,3,4},
		    {2,3,4,5},
		    {3,4,5,6}
		},
		{
			{4,5,6,7},
		    {5,6,7,8},
		    {6,7,8,9}
		}
	};
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int x = 0; x < 4; x++)
			{
				printf("%d\n", arr[i][j][x]);
			}
		}
	}
	printf("��ά�����С��%d\n", sizeof(arr));
	printf("��ά����һ���С��%d\n", sizeof(arr[0]));
	printf("��ά����һ�д�С��%d\n", sizeof(arr[0][0]));
	printf("��ά����һ��Ԫ�ش�С��%d\n", sizeof(arr[0][0][0]));
	printf("�㣺%d\n", sizeof(arr) / sizeof(arr[0]));
	printf("�У�%d\n", sizeof(arr[0]) / sizeof(arr[0][0]));
	printf("�У�%d\n", sizeof(arr[0][0]) / sizeof(arr[0][0][0]));
	printf("Ԫ�أ�%d\n", sizeof(arr) / sizeof(arr[0][0][0]));
	return 0;
}