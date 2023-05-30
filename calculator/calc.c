#include "numbers.h"
#include <stdio.h>

void calculator(void) {
    printf("Welcome to the calculator!\n");
    do {
        printf("Choose the operation, followed by the two operands");
        printf("Operations are:\n");
        printf("1: Sum\n2: Sub\n3: Mult");
        int op1, op2, operation;
        scanf("%d", &operation);
        scanf("%d %d", &op1, &op2);
        switch (operation) {
            case 1:
                printf("%d + %d = %d\n", op1, op2, op1 + op2);
                break;
            case 2:
                printf("%d - %d = %d\n", op1, op2, op1 - op2);
                break;
            case 3:
                printf("%d * %d = %d\n", op1, op2, op1 * op2);
                break;
            default:
                printf("Invalid operation\n");
                break;
        }
        printf("If you want to exit, enter -1\n");
    } while (getc(stdin) != -1);
}
