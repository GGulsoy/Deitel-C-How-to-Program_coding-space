#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define SIZE 16

int pow2(int power){
	int rtrn = 1;
	for(size_t i = 0; i < power; i++){rtrn*=2;}
	return rtrn;
}

void randomizeArray(int arr[], int size){
	for(size_t i = 0; i < size; i++){
		arr[i] = rand() % pow2(16);
	}
}

void printArray(int arr[], int size){
	printf("i:");
	for(size_t i = 0; i < size; i++){
		printf("\t%zu", i);
	}
	puts("");
	printf("arr[i]:");
	for(size_t i = 0; i < size; i++){
		printf("\t%d", arr[i]);
	}
	puts("");
}
//Tried to get the algorithm from the video*
//Not tested
void swap(int arr[], size_t location1, size_t location2){
	int hold = arr[location1];
	arr[location1] = arr[location2];
	arr[location2] = hold;
}

int findMax(int arr[], int until){
	int i_of_max = 0;
	for(size_t i = 1; i < until; i++){
		if(arr[i_of_max] < arr[i]){
			i_of_max = i;
		}
	}
	return i_of_max;
}

void selectionSort(int arr[], int size){
	int placed = size;
	for(size_t until = size; until > 0; until--){
		swap(arr, until - 1, findMax(arr, until));
	}
}

void insertionSort(int arr[], int size){
	for(size_t i = 1; i < size; i++){
		for(size_t j = i - 1; j > 0; j--){
			if(arr[j + 1] < arr[j]){
				swap(arr, j, j + 1);
			}
			else{break;}
		}
	}
}
int main(void){
	int arr[SIZE];

	randomizeArray(arr, SIZE);
	puts("Randomized:");
	printArray(arr, SIZE);

	selectionSort(arr, SIZE);
	puts("selectionSort:");
	printArray(arr, SIZE);

	randomizeArray(arr, SIZE);
	puts("Randomized:");
	printArray(arr, SIZE);

	insertionSort(arr, SIZE);
	puts("insertionSort:");
	printArray(arr, SIZE);

	return 0;
}
//*video: https://youtu.be/kPRA0W1kECg?si=CHg3zTJ_Z_9jUqO0

