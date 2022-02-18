#include "array.h"

//Global Variable
int val=10;

int *newArray(int size){
	int *array = malloc(size * sizeof(int));
	return array;
}

void showArray(int *array, int size){
	int index;

	printf("[");
	for(index=0;index<size;index++){
		if(index!=0){
			printf(",");
		}
		printf("%d",array[index]);
	}
	printf("]\n");
}

