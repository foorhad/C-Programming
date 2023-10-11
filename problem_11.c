
//find the largest number among three numbers
#include<stdio.h>
int main()
{

 int a,b,c;
 printf("Enter the number: ");
 scanf("%d %d %d",&a,&b,&c);

 if(a>b){
    if(a>c){
        printf("%d is largest value.",a);
    }
    else{
        printf("%d  is largest value",c);
    }
 }
 else{
    if(b>a){
        if (b>c)
        {
            printf("%d is largest value.",b);
        }
        else{
            printf("%d is largest value.",c);
        }
        

    }
 }


    return 0;
}