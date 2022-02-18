#include <stdio.h>
#include "array.h"

void increment(int val);

int main(int argc, char *argv[]){
	int *array;
	int index;

	array=newArray(SIZE);
	for(index=0;index<SIZE;index++){		
		array[index]=index*10;
	}
	showArray(array,SIZE);


	printf("global - %d\n",val);

	increment(10);
	increment(30);
	increment(100);
	increment(20);
	

	return 0;
}

void increment(int val){
	static int sum=0;

	sum=sum+val;
	printf("Val: %d  Sum: %d\n",val,sum);

}
