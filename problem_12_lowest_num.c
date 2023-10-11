//find the lowest number among three number
#include<stdio.h>
int main()
{
 int a,b,c;
 printf("Enter the three number: ");
 scanf("%d %d %d",&a,&b,&c);

 if (a<b && a<c)
 {
    printf("%d is  lowest number.",a);
 }

else if (b<c)
{
    printf("%d is lowest number.",b);
}
else{
    printf("%d is lowest number",c);
}


 

    return 0;
}