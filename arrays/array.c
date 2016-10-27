#include<stdio.h>

int main(){

	//declare a array
	int array[10];

	int index;

	//charge pair numbers into the array
	for(index = 0; index < 10; index++)
		array[index] = index;

	//print the array created
	printf("[");
	for(index = 0; index < 10; index++)
		printf(" %d", array[index]);
	printf("]\n");
	return 0;

}
