//find the vowel and consonent use the switch case...
#include<stdio.h>
int main()
{
    char vowel;
    printf("Enter the English lowercase Alphabet: ");
    scanf("%c",&vowel);

    switch (vowel)
    {
    case 'a':
        printf("%c is a vowel.",vowel);
        break;
    case 'e':
        printf("%c is a vowel.",vowel);
        break;
    case 'i':
        printf("%c is a vowel.",vowel);
        break;
    case 'o':
        printf("%c is a vowel.",vowel);
        break;
    case 'u':
        printf("%c is a vowel.",vowel);
        break;
     case 'A':
        printf("%c is a vowel.",vowel);
        break;
    case 'E':
        printf("%c is a vowel.",vowel);
        break;
    case 'I':
        printf("%c is a vowel.",vowel);
        break;
    case 'O':
        printf("%c is a vowel.",vowel);
        break;
    case 'U':
        printf("%c is a vowel.",vowel);
        break;    
    default:
        printf("%c is a Consonent.",vowel);
        break;
    }


    return 0;
}