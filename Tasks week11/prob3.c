
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char operator;
    double num1, num2;
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c",&operator);
    printf("Enter two operands: ");
    scanf("%lf %lf",&num1 ,&num2);

    switch (operator) {
        case '+':
            printf("%.1lf + %.1lf = %.1lf\n", num1,num2,num1+num2);
            break;
        case '-':
            printf("%.1lf - %.1lf = %.1lf\n", num1,num2,num1-num2);
            break;
        case '*':
            printf("%.1lf * %.1lf = %.1lf\n", num1,num2,num1*num2);
            break;
        case '/':
            if (num2 !=0)
                printf("%.1lf / %.1lf = %.4lf\n", num1,num2,num1/num2);
            else
                printf("Error! ");
            break;
        default:
            printf("Error! Operator is not correct\n");
            printf("Please choose correct operator");
            break;
    }
    return 0;
}
