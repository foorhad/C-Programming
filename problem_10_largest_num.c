#include<stdio.h>
int main()
{
 int a,b,c;
 printf("Enter the first number: ");
 scanf("%d",&a);
 printf("Enter the second number: ");
 scanf("%d",&b);
 printf("Enter the third number: ");
 scanf("%d",&c);
 
 if(a>b && a>c){
    printf("largest value a = %d",a);
 }

 else if (b>c)
 {
    printf("Largest value b = %d",b);
 }
 else{
    printf("largest value c = %d",c);
 }
 
    return 0;
} 