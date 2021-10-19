#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int num1, num2;
	scanf_s("%d%d", &num1,&num2);
	if (num1 % num2 == 0)
	{
		printf("%d is a multiple of %d",num1,num2);
	}
	else
	{
		printf("%d isn't a multiple of %d", num1, num2);
	}
	system("pause");
	return 0;
}