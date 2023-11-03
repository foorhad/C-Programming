#include<stdio.h>
int main()
{
    int number, flag=1;

    printf("Enter the Positive number: ");
    scanf("%d",&number);

    if(number==0 || number==1){
        flag=0;
    }

    for(int i=2; i<=number/2; i++){
        if(number%i==0){
            printf("%d is divisible by %d\n",number,i);
            flag=0;
            // break;
        }
    }

    if (flag==1)
    {
        printf("prime number.");
    }
    
    else{
        printf("not Prime number");
    }
    
    return 0;
}