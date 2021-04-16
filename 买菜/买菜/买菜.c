#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	//黄瓜 3元/500g
	//const修饰的常量或只读变量
	const int price = 3;
	//price = 5;  err
	printf("%d元/斤\n", price);  //%d 占位符，表示整形int
	//变量 在程序运行过程中可以修改的量
	int weight;
	printf("请输入购买斤数：\n");
	scanf("%d", &weight);
	printf("您买了%d斤\n", weight);
	int price_all;
	price_all = price * weight;
	printf("您需要支付%d元\n", price_all);
	system("pause");
	return 0;
}