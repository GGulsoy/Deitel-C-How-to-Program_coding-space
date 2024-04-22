#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define DISTRIBUTION_SIZE 18
int binomial17(void){
	int X = 0; 
	for(size_t j = 0;j < 17; j++){
		X += rand() % 2;
	}

	return X;
}

int gaussian(void){
	printf("Gaussian variable X with 17 unit random variables\n");
	int X; int distribution[DISTRIBUTION_SIZE] = {0};

	for(size_t i = 0; i < 10000000; i++){
		X = binomial17();
		distribution[X]++;
		X = 0;
	}
	for(size_t i = 0; i < DISTRIBUTION_SIZE; i++){
		printf("%zu: %d\n", i, distribution[i]);
	}	

	return 0;
}
//{"s","t","r","i","n","g","\0"} = "string"
//use static to not refresh memory place of array by recalling of function
int includesConst(const int b[]){
	//Not compilable
	//b[0]++;
	return 0;
}
int passingArray(void){
	int array[13] = {0};
	array[0]++;
	includesConst(array);
	printf("array: %p\n&array: %p\n&array[0]: %p\n&array[8]: %p\n",
			array, &array, &array[0], &array[8]);
	return 0;
}
//output:
//array: 0x7fcd401f3c
//&array: 0x7fcd401f3c
//&array[0]: 0x7fcd401f3c
//&array[8]: 0x7fcd401f5c

void circleArray(int array[], int size){
	double y;
	array[0] = size - 1;
	for(int x = 1; x < size; x++){
		y = sqrt((double) size*size - x*x);
		printf("%.8f ", y);
		array[x] = (int) y;
		printf("%d\n", array[x]);
	}
}
void upRightCircle(char print[][], int array[], int size){
	int p;
	for(int i = 0; i < size; i++){
		p = size - 1;
		for();
	}
}
int main(void){
	int size = 16;
	int array[size];
	circleArray(array, size);
	return 0;
}

