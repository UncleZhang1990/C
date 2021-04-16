#include <stdio.h>
//宏定义常量
//#define 常量名 值
#define PI 3.14
int main(void)
{
	//S=pi*r*r
	//C=pi*d
	//d=2*r

	//常量PI
	//const 数据类型 常量名 = 值;
	//const float PI = 3.14;
	float r = 3.5;
	float d = 2 * r;
	float S = PI * r*r;
	float C = PI * d;
	//%f 占位符，表示浮点型float，默认输出6位小数
	//%.2f 表示2位有效小数，四舍五入
	printf("S=%.2f\n", S);
	printf("C=%.2f\n", C);
	system("pause");
	return 0;
}