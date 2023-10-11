#include<stdio.h>
int main()
{
    char alp;
    printf("Enter the Alphabet: ");
    scanf("%c",&alp);

    if((alp>='a' && alp<='z') || (alp>='A' && alp<='Z')){
        printf("%c is an alphabet.",alp);
    }
    else{
        printf("%c isn't Alphabet",alp);
    }

    
    return 0;
}