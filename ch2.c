#include <stdio.h>

int printing(void)
{
    printf("Starting C");
}
/*Escape sequences
    \n Newline. Position the cursor at the beginning of the next line.
    \t Horizontal tab. Move the cursor to the next tab stop.
    \a Alert. Produces a sound or visible alert without changing the current
    cursor position.
    \\ Backslash. Insert a backslash character in a string.
    \" Double quote. Insert a double-quote character in a string.
*/
int scanning(void)
{
    int i;
    printf("Enter: ");
    scanf("%d", &i); //using & is called "address operator", related to pointers
    //& tells that "store scanned value to the address of this variable"
    printf("Here it is: %d", i);
}
int nameSurname(void)
{
    printf("Name\tSurname\n");
    printf("Goktugh\tGulsoy");
}
int main(void)
{
    nameSurname();
}