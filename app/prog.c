#include <stdio.h>
#include "array.h"


int main(int argc, char *argv[]){
	int *array;
	int index;

	array=newArray(SIZE);
	for(index=0;index<SIZE;index++){		
		array[index]=index*10;
	}
	showArray(array,SIZE);

	return 0;
}
