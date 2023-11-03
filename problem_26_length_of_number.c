#include<stdio.h>
int main()
{

    int num, count=0;
    printf("Enter the number: ");
    scanf("%d",&num);

    do{
        num/=10;
        count++;
    }
    while(num!=0);

    printf("The number has %d digit",count);
    
    
    return 0;
}