#include <stdio.h>
//�궨�峣��
//#define ������ ֵ
#define PI 3.14
int main(void)
{
	//S=pi*r*r
	//C=pi*d
	//d=2*r

	//����PI
	//const �������� ������ = ֵ;
	//const float PI = 3.14;
	float r = 3.5;
	float d = 2 * r;
	float S = PI * r*r;
	float C = PI * d;
	//%f ռλ������ʾ������float��Ĭ�����6λС��
	//%.2f ��ʾ2λ��ЧС������������
	printf("S=%.2f\n", S);
	printf("C=%.2f\n", C);
	system("pause");
	return 0;
}