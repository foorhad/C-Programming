//find the vowel and consonent use the condtional,operator

#include<stdio.h>
int main()
{

 char c;
 printf("Enter a character: ");
 scanf("%c",&c);

 if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || 
 c=='I' || c=='O' || c=='U') {
    printf("%c is a vowel", c);
 }
 else{
    printf("%c is a consonent",c);
 }



    return 0;
}