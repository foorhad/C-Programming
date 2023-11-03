// #include<stdio.h>
// int main()
// {
//     int number,reverse=0,remainder;

//     printf("Enter the number: ");
//     scanf("%d",&number);

//     while(number!=0){
//         remainder = number % 10;
//         reverse= reverse*10+remainder;
//         number/=10;
       

//     }

//     printf("Reverse of= %d",reverse);

//     return 0;
// }

#include<stdio.h>
int main()
{
    int number,remainder,reverse=0;

    printf("Enter the number: ");
    scanf("%d",&number);

    while (number!=0)
    {
        remainder=number%10;
        reverse=reverse*10+remainder;
        number/=10;


    }

    printf("Reverse number:%d",reverse);
    

    return 0;
}