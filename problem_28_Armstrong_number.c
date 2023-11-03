#include<stdio.h>
int main()
{
    int number, orginal, result=0, remainder;

    printf("Enter the number: ");
    scanf("%d",&number);
    orginal=number;

    while(orginal!=0)
    {
        remainder=orginal%10;
        result+=remainder*remainder*remainder;
        orginal/=10;
    }

    if (number==result)
    {
        printf("%d is an Armstrong number",number);
    }
    else{
        printf("%d isn't an  Armstrong number",number);

    }
    
    
    
    return 0;
}