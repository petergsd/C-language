#include<stdio.h>

float addition(float , float );
void printResult(float );
float getNumber();

int main(){

	printResult(addition(getNumber(), getNumber()));

	return 0;
}


float getNumber(){
	
	float value;

	printf("Insert a value: \n");
	scanf("%f", &value);
	
	return value;
}

float addition(float number1, float number2){

	float sum;

	sum = number1 + number2;

	return sum;
}

void printResult(float value){

	printf("The result is: %.3f\n", value);

}