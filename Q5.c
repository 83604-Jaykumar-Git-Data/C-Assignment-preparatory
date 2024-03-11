#include <stdio.h>

int main() {
    char input;
    int uppercase = 0, lowercase = 0, digits = 0, others = 0;

    printf("Enter characters (press Enter to finish): ");

    while ((input = getchar()) != '\n') {
        if (input >= 'A' && input <= 'Z')
            uppercase++;
        else if (input >= 'a' && input <= 'z')
            lowercase++;
        else if (input >= '0' && input <= '9')
            digits++;
        else
            others++;
    }

    printf("Uppercase letters: %d\n", uppercase);
    printf("Lowercase letters: %d\n", lowercase);
    printf("Digits: %d\n", digits);
    printf("Other characters: %d\n", others);

    return 0;
}