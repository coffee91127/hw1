#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float 總里程;
	float 每加侖汽油價格;
	float 每加侖行駛里程;
	float 停車費;
	float 過路費;
	float 花費=0;
	scanf_s("%f%f%f%f%f", &總里程, &每加侖汽油價格, &每加侖行駛里程, &停車費, &過路費);
	花費 = 總里程 / 每加侖行駛里程 * 每加侖汽油價格 + 停車費 + 過路費;
	printf("開車工作總共花了%f", 花費);
	system("pause");
	return 0;


}