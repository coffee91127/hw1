#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int num1;
	int num2;
	int num3;
	
	scanf_s("%d%d%d",&num1,&num2,&num3);
	if (num1 > num2 && num3 < num2)
	{
		printf("largest number is %d,smallest number is %d",num1,num3);
	}
	else if (num1 > num3 && num2 < num3)
	{
		printf("largest number is %d,smallest number is %d",num1,num2);
	}
	else if (num2 > num1 && num3 < num1)
	{
		printf("largest number is %d,smallest number is %d", num2, num3);
	}
	else if (num2 > num3 && num1 < num3)
	{
		printf("largest number is %d,smallest number is %d", num2, num1);
	}
	else if (num3 > num1 && num2 < num1)
	{
		printf("largest number is %d,smallest number is %d", num3, num2);
	}
	else if (num3 > num2 && num1 < num2)
	{
		printf("largest number is %d,smallest number is %d", num3, num1);
	}

	system("pause");
	return 0;



}