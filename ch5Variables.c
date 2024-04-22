#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int i = 0;

int local(void){
	int i = 100;
	printf("i of local: %d\n", i);
	i++;
	printf("i of local: %d\n", i);
	return 0;
}

int global(void){
	printf("i of global: %d\n", i);
	i++;
	printf("i of global: %d\n", i);
	return 0;
}

int main(void){
	int i = 10;
	local(); global();
	printf("i of main: %d\n", i);
	i+=2;
	printf("i of main: %d\n", i);
	return 0;
}

