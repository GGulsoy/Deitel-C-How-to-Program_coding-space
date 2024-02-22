#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int ceils(void){
	double i;
	for(double j = 0; j<11.0; j++){
		i = j + 0.01;
		printf("ceil(%f) = %f; floor(%f) = %f\n",
				i, ceil(i), i, floor(i));
	}
	return 0;
}

int buildingGaussian(void){
	printf("Normal random: \n");
	for(int i = 0; i < 11; i++){
		for(int i = 0; i < 11; i++){
			printf("%d ", rand());
		}
		puts("");
	}
	puts("");
	
	printf("Powers of 2: \n");
	int pow = 1;
	for(int i = 1; i < 22; i++){pow*=2;}
	for(int i = 21; i < 41; i++){
		printf("2^%d = %d\n", i, pow);
		pow *= 2;
	}

	
	printf("Gaussian variable X with 17 unit random variables\n");
	int X = 0; int  c0, c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12, c13, c14, c15, c16, c17;
	c0 = c1 = c2 = c3 = c4 = c5 = c6 = c7 = c8 = c9 = c10 = c11 = c12 = c13 = c14 = c15 = c16 = c17 = 0;

	for(int i = 0; i < 1000000; i++){
		for(int j = 0;j < 17; j++){
			X += rand() % 2;
		}

		switch(X){
			case 0: c0++;
			case 1: c1++;
			case 2: c2++;
			case 3: c3++;
			case 4: c4++;
			case 5: c5++;
			case 6: c6++;
			case 7: c7++;
			case 8: c8++;
			case 9: c9++;
			case 10: c10++;
			case 11: c11++;
			case 12: c12++;
			case 13: c13++;
			case 14: c14++;
			case 15: c15++;
			case 16: c16++;
			case 17: c17++;
		}
		X = 0;
	}
	
	printf("c0: %d\nc1: %d\nc2: %d\nc3: %d\nc4: %d\nc5: %d\nc6: %d\nc7: %d\nc8: %d\nc9: %d\nc10: %d\n\
			c11: %d\nc12: %d\nc13: %d\nc14: %d\nc15: %d\nc16: %d\nc17: %d\n"
		,c0, c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12, c13, c14, c15, c16, c17);

	printf("");
	return 0;	
}

int buildingGaussianWithBreak(void){
	printf("Normal random: \n");
	for(int i = 0; i < 11; i++){
		for(int i = 0; i < 11; i++){
			printf("%d ", rand());
		}
		puts("");
	}
	puts("");
	
	printf("Powers of 2: \n");
	int pow = 1;
	for(int i = 1; i < 22; i++){pow*=2;}
	for(int i = 21; i < 41; i++){
		printf("2^%d = %d\n", i, pow);
		pow *= 2;
	}

	
	printf("Gaussian variable X with 17 unit random variables\n");
	int X = 0; int  c0, c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12, c13, c14, c15, c16, c17;
	c0 = c1 = c2 = c3 = c4 = c5 = c6 = c7 = c8 = c9 = c10 = c11 = c12 = c13 = c14 = c15 = c16 = c17 = 0;

	for(int i = 0; i < 100000000; i++){
		for(int j = 0;j < 17; j++){
			X += rand() % 2;
		}
		switch(X){
			case 0: c0++; break;
			case 1: c1++;break;
			case 2: c2++;break;
			case 3: c3++;break;
			case 4: c4++;break;
			case 5: c5++;break;
			case 6: c6++;break;
			case 7: c7++;break;
			case 8: c8++;break;
			case 9: c9++;break;
			case 10: c10++;break;
			case 11: c11++;break;
			case 12: c12++;break;
			case 13: c13++;break;
			case 14: c14++;break;
			case 15: c15++;break;
			case 16: c16++;break;
			case 17: c17++;break;
			default: printf("default\n");
		}
		X = 0;
	}
	
	printf("c0: %d\nc1: %d\nc2: %d\nc3: %d\nc4: %d\nc5: %d\nc6: %d\nc7: %d\nc8: %d\nc9: %d\nc10: %d\n\
			c11: %d\nc12: %d\nc13: %d\nc14: %d\nc15: %d\nc16: %d\nc17: %d\n"
		,c0, c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12, c13, c14, c15, c16, c17);

	printf("");
	return 0;	
}

int testGaussianVariable(void){
	int X, add;
	for(int j = 0;j < 17; j++){
		add = rand();
		printf("rand(): %d\n", add);
		add = add % 2;
		printf("mod rand(): %d\n", add);
		X += rand() % 2;
		printf("added to X: %d\n\n", X);

	}
	return 0;
}


int main(void){
	buildingGaussianWithBreak(); 
	return 0;
}



