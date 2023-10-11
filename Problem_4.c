//Programs to display grade Marks using if...else Ladder

#include<stdio.h>
int main() {
    int marks;
printf("Enter the marks: ");
scanf("%d", &marks);

if (marks>90) {
    printf("Your grade is= A+");
}

else if (marks>70) {
    printf("Your grade is= A");
}

else if (marks>60) {
    printf("Your grade is A-");
}

else if (marks>50) {
    printf("Your grade is B");
}

else if (marks>40) {
    printf("Your grade is C");
}

else if (marks>=33) {
    printf("Your grade is D");
}

else {
    printf("Failed");
}

}