#include <stdio.h>
#include <math.h>
#define REG_SIZE 4
void acetic(void){

	//for acetic acid %wt -> C
	//long double conversion = (long double) 1000/(2*12.01+4*1.008+2*15.999);
	//printf("%Lf", 0.1 * conversion);
}

void geoOptic(void){
	long double d0[11] = {500, 450, 400, 350, 300, 250, 200, 150, 100, 75, 50};
	for(size_t i = 0; i < 11; i++){
		long double di = 1 / (- 1 / d0[i] + ((long double) 1.0 / 150.0));
		printf("%Lf - %Lf - %Lf - %Lf\n", d0[i], di, 20.0 * di / d0[i], di / d0[i]);
	}
	puts("");
}
void regressionCalc(void){
	//building y = a + b*x
	
	long double x[REG_SIZE] = {2.0131, 0.9805, 0.2318, 0.0567};
	long double y[REG_SIZE] = {1 / 40.262, 1 / 39.22, 1 / 37.088, 1 / 36.288};
	long double Sx, Sy, Sxy, Sx2= 0;
	for(size_t i; i < REG_SIZE; i++){
		Sx+=x[i]; Sy+=y[i]; Sx2+=x[i]*x[i]; Sxy+=x[i]*y[i];
	}
	long double b =(((long double) REG_SIZE*Sxy) - Sx * Sy)/(((long double) REG_SIZE * Sx2) - Sx * Sx);
	long double a =(long double) (Sy - Sx * b)/REG_SIZE;
	printf("a: %.16Lf b: %.16Lf\n", a, b);
	printf("%.16Lf\n and %.16Lf", 1 / a, a*a/b);
}
int main(void){
	regressionCalc();
	return 0;
}
