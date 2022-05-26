#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grade;

    printf("Enter your grade: ");
    scanf("%d", &grade);

    if ( grade >= 92 && grade <=100){
    printf("\n Your letter grade is A.");
    }
    else if ( grade >= 84 && grade <= 91){
    printf("\n Your letter grade is A-.");
    }
    else if ( grade >= 76 && grade <= 83){
    printf("\n Your letter grade is B.");
    }
    else if ( grade >= 68 && grade <= 75){
    printf("\n Your letter grade is B-.");
    }
    else if ( grade >= 60 && grade <= 67){
    printf("\n Your letter grade is C.");
    }
    else if ( grade >= 50 && grade <= 59){
    printf("\n Your letter grade is D.");
    }
    else if ( grade >= 1 && grade <= 49){
    printf("\n Your letter grade is F.");
    }
    else {
        printf(" Invalid input. Try again. ");
    }

    return 0;
}







