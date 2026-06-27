//Create a simple calculator using switch case.
#include <stdio.h>
int main() {
    char operator;
    double num1, num2, result;

    // 1. Get the operator from the user
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator); // Note the space before %c to skip any leftover newline character

    // 2. Get the two operands
    printf("Enter first numbers= ");
    scanf("%lf", &num1);
    printf("Enter second numbers=");
    scanf("%lf", &num2);
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '/':
            if (num2 == 0.0) {
                printf("Error: Division by zero is not allowed.\n");
            } else {
                result = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            }
            break;
        default:
            printf("Invalid operator entered.\n");
    }
    return 0;
}
