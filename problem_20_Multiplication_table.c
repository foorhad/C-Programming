#include<stdio.h>
int main()
{
    int num, i=1;
    printf("Enter the number and get Multiplication table: ");
    scanf("%d",&num);

    for(i;i<=10;i++){
        printf("%d * %d = %d\n",num,i,num*i);
    }

    
    return 0;
}