// #include<stdio.h>
// #include<math.h>
// int main()
// {

//     double a,b,c, discriminant,root1,root2, realpart, impart;

//     printf("Enter the coefficients of  a,b and c: ");
//     scanf("%lf %lf %lf",&a,&b,&c);
//     discriminant = b*b - 4*a*c;

//     if(discriminant>0){
//         root1 = (-b+sqrt(b*b-4*a*c)) / (2*a);
//         root2 = (-b-sqrt(b*b-4*a*c)) / (2*a);
//         printf("root1= %.2lf, root2=%.2lf",root1,root2);
//     }

//     else if(discriminant==0){
//         root1=root2= -b/(2*a);
//         printf("root1= %.2lf root2=%.2lf",root1,root2);
//     }

//     else{
//         realpart= -b/(2*a);
//         impart =sqrt(-discriminant) / (2*a);
//         printf("root1 = %.2lf + %.2lf root2=%.2lf - %.2lf", realpart,impart, realpart, impart);

//     }
    
//     return 0;
// }

#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,d,x1,x2;
    printf("Entert the coefficients of a,b & c:  ");
    scanf("%lf %lf %lf",&a,&b,&c);

    d=(b*b)-(4*a*c);

    if (d==0){
        x1 = -b/(2*a);
        printf("Roots are real and equal: %lf",x1);
    }
    else if (d>0)
    {
        x1 = (-b+sqrt(d)) / (2*a);
        x2 = (-b-sqrt(d)) / (2*a);
        printf("Roots are real and unequal and are: %.1lf, %.1lf",x1,x2);
    }
    
    else{
        printf("The Roots are imaginary.");
    }
    
    return 0;
}