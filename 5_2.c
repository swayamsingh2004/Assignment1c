#include <stdio.h>

int main() {
    char operation;
    double operand, result = 0.0;
    int isFirstInput = 1;
    
    printf("Simple Calculator (Enter 'E' to exit)\n");

    while (1) {
        printf("Current Result: %.2lf\n", result);
        printf("Enter operator (+, -, *, /) or 'C' to clear: ");
        scanf(" %c", &operation);

        if (operation == 'E') {
            printf("Exiting the calculator. Final Result: %.2lf\n", result);
            break;
        }

        if (operation == 'C') {
            result = 0.0;
            isFirstInput = 1;
            printf("Result cleared. Current Result: %.2lf\n", result);
        } else if (operation == '+' || operation == '-' || operation == '*' || operation == '/') {
            printf("Enter operand: ");
            scanf("%lf", &operand);

            switch (operation) {
                case '+':
                    if (isFirstInput) {
                        result = operand;
                        isFirstInput = 0;
                    } else {
                        result += operand;
                    }
                    break;
                case '-':
                    if (isFirstInput) {
                        result = operand;
                        isFirstInput = 0;
                    } else {
                        result -= operand;
                    }
                    break;
                case '*':
                    if (isFirstInput) {
                        result = operand;
                        isFirstInput = 0;
                    } else {
                        result *= operand;
                    }
                    break;
                case '/':
                    if (isFirstInput) {
                        result = operand;
                        isFirstInput = 0;
                    } else {
                        if (operand != 0) {
                            result /= operand;
                        } else {
                            printf("Error: Division by zero!\n");
                        }
                    }
                    break;
                default:
                    printf("Invalid operator!\n");
            }
        } else {
            printf("Invalid operator!\n");
        }
    }

    return 0;
}
