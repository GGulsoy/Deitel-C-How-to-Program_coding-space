#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int isPerfect(unsigned int n){
	unsigned int accumulate = 1;
	unsigned int i = 2;
	while(i*i < n){
		if(n % i == 0){accumulate += i + n / i;}
		i++;
	}
	if(i*i == n){accumulate += i;}
	if(accumulate == n){printf("%d\n", n);}
	return 0;
}

int main(void){
	for( unsigned int i = 2; i < 1000001; i++){isPerfect(i);}
	return 0;
}

