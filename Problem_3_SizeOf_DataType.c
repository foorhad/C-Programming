// C program to find the size of int, float, double and char

#include<stdio.h>
int main() {

    int intType;
    float FloatType;
    double DoubleType;
    char characterType;

    printf("Size of Integer: %zu bytes \n", sizeof(intType));
    printf("Size of Float: %zu bytes \n", sizeof(FloatType));
    printf("Size of Double: %zu bytes \n", sizeof(DoubleType));
    printf("Size of Character: %zu bytes \n", sizeof(characterType));

}