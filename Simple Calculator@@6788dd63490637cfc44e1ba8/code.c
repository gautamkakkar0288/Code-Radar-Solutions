#include <stdio.h>

int main() {
    int num1, num2, result;
    char op;

    // Taking input
    scanf("%d %d %c", &num1, &num2, &op);

    // Performing operation based on operator
    switch (op) {
        case '+':
            result = num1 + num2;
            printf("%d\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("%d\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("%d\n", result);
            break;
        case '/':
            if (num2 != 0) 
                printf("%d\n", num1 / num2);
            else
                printf("error\n");
            break;
        default:
            printf("Error: Invalid operator\n");
    }

    return 0;
}
