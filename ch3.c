#include<stdio.h>
//#include<limits.h>

int conditional(void){
    int i = 55;
    if(i >= 58){

    }
    else{

    }

    puts(i >= 58 ? "why?" : "ok");
}

int averager(void){
    int total = 0; int counter = -1; int current = 0;
    do
    {
        total += current; counter++;
        puts("Enter natural number to average, or negative number to exit");
        scanf("%d", &current);
        
    } while (current >= 0);
    printf("%f", (float) total / counter);
    
}
//left at figure 3.10

//use %u to display unsigned int
int unsignedInt(void){
    unsigned int variable = 0;
    printf("%u\n", ++variable);
    printf("%u\n", --variable);
    printf("%u\n", --variable);
    unsigned int variable2 = -1;
    printf("\n%u", variable2);
//    printf("\n%d and %d", SHRT_MAX, USHRT_MAX);
    unsigned short variable3 = -1; //:= 65535 for short
    printf("\n%d", variable3);
    return 0;
}
//securte versions:
//scanf_s
//printf_s

int fibonacci(){
    unsigned short v1 = 0; unsigned short v2 = 1;
    while(v2 <= 10000){
        v1 += v2; printf("%d ", v1);
        v2 += v1; printf("%d ", v2);
    }
}

int main(void){
    unsignedInt();
}