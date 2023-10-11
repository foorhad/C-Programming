#include<stdio.h>
int main()
{
    int num;

    while (1)
    {
        printf("Enter the  value: ");
        scanf("%d",&num);

        if (num<0)
        {
            if (num%2!=0)
            {
                printf("Negative odd number \n",num);
                continue;
            }
        printf("Negative Even number\n");
        continue;
        }

        printf("Positive value\n");
        break;
    }
    
}




