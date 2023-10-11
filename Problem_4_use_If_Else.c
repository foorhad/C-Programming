//programs to find the positive and negative number use if else

#include<stdio.h>
int main() {

int number;

printf("Enter the number: ");
scanf("%d",&number);

if (number>0){
    printf("You Entered Positive number = %d.", number);
}
else{
    printf("You Entered Negative number = %d.", number);
}

    return 0;

}