#include <stdio.h>

int main() {
    float num1, num2, result;
    char operat;

    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter an operator (+, -, *, /): ");
    scanf("    %c", &operat);//here should be space so

    printf("Enter the second number: ");
    scanf("%f", &num2);

    if(operat == '+') {
        result = num1 + num2;
    }
    else if(operat == '-') {
        result = num1 - num2;
    }
    else if(operat == '*') {
        result = num1 * num2;
    }
    else if(operat == '/') {

        result = num1 / num2;
    }

    printf("Result: %.2f\n", result);

    return 0;
}
