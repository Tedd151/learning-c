#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    double num1;
    double num2;
    char sign;

    printf("enter the first number: ");
    scanf("%lf", &num1);

    printf("enter a sign: ");
    scanf(" %c", &sign);

    printf("enter the second number: ");
    scanf("%lf", &num2);

    if (sign == '+')
    {
        printf("answer is %f \n", num2 + num1);
    }
    else if (sign == '-') 
    {
        printf("answer is %f \n", num2 - num1);
    }
    else if (sign == '/')
    {
        printf("answer is %f \n", num2 / num1);
    }
    else if (sign == '*')
    {
        printf("answer is %f \n", num2 * num1);
    } else {
        printf("invalid sign \n");
    }
    
}