#include <stdio.h>

void printMessage(char *userInput) {
    printf(userInput);  // Format string vulnerability
    printf("\n");
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <input>\n", argv[0]);
        return 1;
    }
    printMessage(argv[1]);
    return 0;
}
