#include <stdio.h>

int main() {
    char ch;
    int ascii;
    int choice;

    printf("ASCII Converter\n");
    printf("Choose an option:\n");
    printf("1. Character to ASCII\n");
    printf("2. ASCII to Character\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter a character: ");
        // space before %c to consume any leftover newline
        scanf(" %c", &ch);
        printf("ASCII value of '%c' is %d\n", ch, ch);
    }
    else if (choice == 2) {
        printf("Enter an ASCII code (0-127): ");
        scanf("%d", &ascii);
        if (ascii >= 0 && ascii <= 127) {
            printf("Character for ASCII code %d is '%c'\n", ascii, ascii);
        } else {
            printf("Invalid ASCII code! Please enter a value between 0 and 127.\n");
        }
    }
    else {
        printf("Invalid choice. Please run the program again.\n");
    }

    return 0;
}
