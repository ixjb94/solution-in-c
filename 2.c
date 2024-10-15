#include <stdio.h>

int main() {
    char input[101];
    int i = 0, j = 0;

    // Input
    printf("Enter String (MAX: 100 Char): ");
    scanf("%100[^\n]", input);

    // Read Input
    while (input[i] != '\0') {

        // Only A-Z
        // a-z
        // space
        if (
            (input[i] >= 'A' && input[i] <= 'Z') || 
            (input[i] >= 'a' && input[i] <= 'z') || 
            (input[i] == ' ')
        ) {
            input[j++] = input[i];
        }

        i++;
    }

    // Null Terminate
    input[j] = '\0';

    // Output
    printf("Output: %s\n", input);

    return 0;
}