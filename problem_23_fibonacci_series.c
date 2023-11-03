#include<stdio.h>
int main()
{
    int num,n1=0,n2=1,next;
    next=n1+n2;
    
    printf("Enter the number of term fibonacci: ");
    scanf("%d",&num);

    printf("%d %d ",n1,n2);

    while (next<num)
    {
        printf("%d ",next);
        n1=n2;
        n2=next;
        next=n1+n2;
    }
    
    
    return 0;
}