#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	/*
	����һ����ά����
	�洢5��ѧ��  3�ųɼ�
	����ÿ��ѧ�����ܷ֡�ƽ����
	����ÿ��ѧ�Ƶ��ܷ֡�ƽ����
	*/
	//��ȡѧ���ɼ�
	int arr[5][3];
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	//��ӡѧ���ɼ�
	for (int i = 0; i < 5; i++)
	{
		int sum = 0;
		for (int j = 0; j < 3; j++)
		{
			sum += arr[i][j];
			//printf("%d", arr[i][j]);
		}
		printf("��%d��ѧ�����ܳɼ���%d\t��ƽ���ɼ���%d\n", i + 1, sum, sum / 3);
		printf("\n");
	}
	for (int i = 0; i < 3; i++)
	{
		int sum = 0;
		for (int j = 0; j < 5; j++)
		{
			//���һ�е�ֵ
			sum += arr[j][i];
		}
		printf("��%d�Ź��ε��ܳɼ���%d\t��ƽ���ɼ���%d\n", i + 1, sum, sum / 5);
		printf("\n");
	}
	return 0;
}