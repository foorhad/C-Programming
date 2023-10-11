#include<stdio.h>
int main()
{

    int number, i,factorial=1;
    printf("Enter the integer value: ");
    scanf("%d",&number);

    
    for(i=1; i<=number; i++){
        factorial = factorial * i;
        
    }
    printf(" Factorial of %d: %d \n", number,factorial);

    
    return 0;
}