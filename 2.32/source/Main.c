#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float   weightinkilograms;
	float heightinmeters;
	float BMI;
	scanf_s("%f%f", &weightinkilograms, &heightinmeters);
	BMI = weightinkilograms / heightinmeters / heightinmeters;
	printf("your bmi is %f",BMI);
	system("pause");
	return 0;


}