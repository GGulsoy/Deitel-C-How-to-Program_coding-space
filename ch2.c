#include <stdio.h>

int printing(void)
{
    printf("Starting C");
	return 0;
}
/*Escape sequences
    \n Newline. Position the cursor at the beginning of the next line.
    \t Horizontal tab. Move the cursor to the next tab stop.
    \a Alert. Produces a sound or visible alert without changing the current
    cursor position.
    \\ Backslash. Insert a backslash character in a string.
    \" Double quote. Insert a double-quote character in a string.
*/
int inputSpecifiers(void){
	printf("String: %s ", "ةوزظκμόκοδςшоцущдл");
	printf("Char: %c ", 'a');//use '' for char type, not ""
	printf("Float: %f \n", 2.25);
	return 0;
}


int scanning(void)
{
    int i;
    printf("Enter: ");
    scanf("%d", &i); //using & is called "address operator", related to pointers
    //& tells that "store scanned value to the address of this variable"
    printf("Here it is: %d", i);
	return 0;
}
int nameSurname(void)
{
    puts("Name\tSurname");// := printf("<string>\n")
    puts("Goktugh\tGulsoy");
	return 0;
}
int main(void)
{
    inputSpecifiers();
	return 0;
}
