//check whether a number is Negative or positive or zero
#include<stdio.h>
int main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d",&number);

    if (number>0){
        printf("%d is Positive number.", number);
    }

    else if (number<0)
    {
        printf("%d is Negative number",number);
    }

    else{
        printf("Zero",number);
    }
    

    return 0;
}