#include <stdio.h>

int controlWhile(void){
	int counter = 0;
	puts("normal");
	while(counter <= 10){printf("g"); counter++;}
	puts("");
	counter = 0;
	puts("counter++");
	while(counter++ <= 10){printf("g");}
	puts("");
	counter = 0;
	puts("++counter");
	while(++counter <= 10){printf("g");}
	puts("");
	return 0;
}

int switchCase(void){
	char c;
	switch(c = getchar()){
		case 'a': printf("1"); break;
		case 'b': printf("2"); break;
		case 'c': printf("3"); break;
		case 'd': printf("4"); break;
		case 'e': printf("5"); break;
		case 'f': printf("6"); break;
		case 'g': printf("7"); break;
		case 'h': printf("8"); break;
		case 'i': printf("9"); break;
		case 'j': printf("10"); break;
		case 'k': printf("11"); break;
		case 'l': printf("12"); break;
		case 'm': printf("13"); break;
		case 'n': printf("14"); break;
		case 'o': printf("15"); break;
		case 'p': printf("16"); break;
		case 'r': printf("17"); break;
		case 's': printf("18"); break;
		case 't': printf("19"); break;
		default: printf("-1");
	}
	puts("");

	//independant
	int a; int b; int c;
	a = b = c = 0;

	return 0;
}

int main(void){
	switchCase(); 
	return 0;
}



