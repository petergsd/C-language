#include<stdio.h>

float addition(float number1, float number2);

int main(){

	float A, B, result;
	
	printf("Insert a value: \n");
	scanf("%f", &A);
	printf("Insert the second value: \n");
	scanf("%f", &B);

	result = addition(A, B);

	printf("The result is: %.3f\n", result);

	return 0;
}


float addition(float number1, float number2){

	float sum;

	sum = number1 + number2;

	return sum;
}