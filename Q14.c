#include <stdio.h>
#include <string.h>
#include <ctype.h>
int isPalindrome(char *str) {
    int length = strlen(str);
    int i, j;

    
    for (i = 0; i < length; i++) {
        str[i] = tolower(str[i]);
    }

    
    for (i = 0, j = length - 1; i < j; i++, j--) {
        
        while (!isalpha(str[i]) && i < j) {
            i++;
        }
        while (!isalpha(str[j]) && i < j) {
            j--;
        }
        if (str[i] != str[j]) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    if (isPalindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}