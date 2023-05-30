/**
 * A very simple calculator for trying to explore GNU Make
*/
#include "numbers.h"
#include <stdio.h>
#include "unistd.h"

#define SLEEP_TIME 3

void calculator(void) {
    printf("Welcome to the calculator!\n");
    sleep(SLEEP_TIME);
    while (1) {
        printf("Operations are:\n");
        printf("1: Sum\n2: Sub\n3: Mult\n-1: Exit\n");
        int op1, op2, operation;
        printf("Operation number: ");
        scanf("%d", &operation);
        if (operation == -1) {
            printf("Bye bye!\n");
            break;
        }
        printf("Operands: ");
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
                continue;
                break;
        }
        sleep(SLEEP_TIME);
    }
}

int main(void) {
    calculator();
}
