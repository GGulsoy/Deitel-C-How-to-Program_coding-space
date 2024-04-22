#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int leftLeaning(int length, int asterixes){
	for(int i = 0; i < asterixes; i++){
		printf("*");
	}
	for(int i = asterixes; i < length; i++){
		printf(" ");
	}
	puts("");	

	return 0;
}
int rightLeaning(int length, int asterixes){
	for(int i = 0; i < length - asterixes; i++){
		printf(" ");
	}
	for(int i = length - asterixes; i < length; i++){
		printf("*");
	}
	puts("");	
	
	return 0;
}
int topLeftCorner(int size){
	for(int i = size; i > 0; i--){
		leftLeaning(size, i);	
	}
	return 0;
}

int main(void){
	leftLeaning(7, 3);
	rightLeaning(7, 3);
	topLeftCorner(7);
	return 0;
}

