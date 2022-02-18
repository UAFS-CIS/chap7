#ifndef ARRAY_H
#define ARRAY_H
#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

extern int val;

int *newArray(int size);
void showArray(int *array, int size);
#endif
