#include <stdio.h>
#include <stdlib.h>

int divide(int a, int b) {
    return a / b;  // No error handling for division by zero
}

int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("Usage: %s <num1> <num2>\n", argv[0]);
        return 1;
    }

    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);
    int result = divide(num1, num2);  // Potential division by zero

    printf("Result: %d\n", result);
    return 0;
}
