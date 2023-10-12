#include<stdio.h>
int main()
{
    int num, n1=0,n2=1,next;
    next = n1 + n2;
    printf("Enter the number of term: ");
    scanf("%d",&num);

    printf("Fibonacci: %d %d ",n1,n2);


    for(int i=3; i<=num; i++){
        printf("%d ",next);
        n1=n2;      //n1=1
        n2=next;    //n2=1
        next=n1+n2; //next=2
    }
    
    return 0;
}