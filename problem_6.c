#include<stdio.h>
int main()
{

    int number;
    while (1)
    {
        printf("Enter the number: ");
        scanf("%d",&number);

        if (number<0 && number%2!=0)
        {
           printf("Negative odd number\n");
        }

        else if (number>0)
        {
            printf("Positive value\n");
            break;
        }

        else
        {
            printf("Negative Even\n");
            continue;
        }
        
        
    }
    

    return 0;
}