/*C program to find ASCII value of a character entered by the user*/

#include<stdio.h>
int main() {

char ascii_value;

printf("Enter a character: ");
scanf(" %c", &ascii_value);

printf("ASCII code of %c = %d", ascii_value, ascii_value);

}