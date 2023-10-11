#include<stdio.h>
int main()
{
    
    int year;
    printf("Enter the year: ");
    scanf("%d",&year);

    if(year % 400 ==0){
        printf("%d year is a leaf year",year);
    }
    else if(year % 100 ==0){
        printf("%d year is not a leaf year",year);
    }
    else if(year % 4 ==0){
        printf("%d year is a not leaf year",year);
    }
    else{
        printf("Year is not a Leaf year.");
    }
    

    return 0;
}