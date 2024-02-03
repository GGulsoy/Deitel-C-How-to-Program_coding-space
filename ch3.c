#include<stdio.h>

int conditional(void)
{
    int i = 55;
    if(i >= 58){

    }
    else{

    }

    puts(i >= 58 ? "why?" : "ok");
}

int averager(void)
{
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

int main(void)
{
    averager();
}