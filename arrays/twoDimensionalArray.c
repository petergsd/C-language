#include<stdio.h>

int main(){

	int array[5][5];

	int row, column;

	printf("Array created: \n");
	for(row = 0; row < 5; row++){
		for(column = 0; column < 5; column ++){
			array[row][column] = row + column;
			printf("\t%d", array[row][column]);
		}
		printf("\n");
	}

	return 0;
}
