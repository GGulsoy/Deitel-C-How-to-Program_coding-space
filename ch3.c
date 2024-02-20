#include<stdio.h>
//#include<limits.h>

int conditional(void){
    int i = 55;
    if(i >= 58){

    }
    else{

    }

    puts(i >= 58 ? "why?" : "ok");
    return 0;
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
    return 0;
}


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
//secure versions:
//scanf_s
//printf_s

int largest(void){
	int current; int biggest = 0; int count = 1;
	while(count <=10){
		printf("\nEnter the non-negative i: ");
		scanf("%d", &current);
		if(current>=0 && current >=biggest){
			biggest = current;
			count++;
		}
		else if(current>=0){
			count++;
		}
		else if(current < 0){
			printf("\nPlease enter non-negative.");
		}
	}
	printf("The Largest: %d\n", biggest);
	return 0;
	//observations:
	//when an rational is entered, 
	//the part after . is truncated
	//and the loop is done without scanf
	//when a string is entered, 
	//the loop is done without scanf
	//and 0 is printed as answer

}

int square(void){
	int size;
	printf("\nEnter size: ");
	scanf("%d", &size);
	puts("");

	int count = 1;
	while(count <= size){printf("*"); count++;}
	puts(""); 

	count = 1; 
	int count2;
	while(count <= size-2){
		count2 = 1;
		printf("*");
		while(count2 <= size-2){
			printf(" "); count2++;
		}
		printf("*"); 
		puts(""); count++;	
	}

	count = 1;
	while(count <= size){printf("*"); count++;}
	puts("");
	
	return 0;
}
int fibonacci(void){
    unsigned short v1 = 0; unsigned short v2 = 1;
    while(v2 <= 10000){
        v1 += v2; printf("%d\n ", v1);
        v2 += v1; printf("%d\n ", v2);
    }
    return 0;
}

int breakingBinary(void){
	int binary;
	printf("\nEnter binary ");
	scanf("%d", &binary);

	int step10 = 1; int step2 = 1;
	while(binary > step10){
		step10 *= 10; step2 *= 2;
	}
	step10 /= 10; step2 /= 2;
	
	int valueStep; int value = 0;
	do{valueStep = binary / step10; value += valueStep*step2;
	binary %= step10; step10 /= 10; step2 /= 2;}
	while(binary != 0);

	printf("Value: %d\n", value);
	return 0;
}

int main(void){
	breakingBinary();
	return 0;
}
