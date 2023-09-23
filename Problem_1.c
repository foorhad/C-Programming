/* C program to print an integer, float, double & character value entered_by_the
_user*/

#include<stdio.h>

int main() {

    int Integer_value;
    float Float_value;
    double Double_value;
    char Character_value;

    printf("Enter the integer number: ");
    scanf("%d", &Integer_value);

    printf("Enter the Float number :");
    scanf("%f", &Float_value);

    printf("Enter the double number :");
    scanf("%d", &Double_value);

    printf("Enter the Character Value :");
    scanf(" %c", &Character_value);

    printf("Integer value: %d \n", Integer_value);
    printf("Float value: %f \n", Float_value);
    printf("Integer value: %lf \n", Double_value);
    printf("Integer value: %c \n", Character_value);

}