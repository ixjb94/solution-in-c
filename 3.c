#include <stdio.h>

int main() {

    int N;

    // Input
    printf("1- Number\n2- ASCII\n");
    scanf("%d", &N);

    // 1 < N < 100
    if (N < 1 || N > 100) {
        printf("Input Should be Between 1 and 100\n");
        return 1;
    }

    int asciiValue;
    char text[101];
    int count = 0;

    // Loop
    while (count < N) {

        // Don't Miss Other ASCII Values
        if (scanf("%d", &asciiValue) != 1) {
            break;
        }

        // ASCII To Text
        text[count] = (char)asciiValue;
        count++;
    }

    // Memory
    text[count] = '\0';

    // Output
    printf("%s\n", text);

    return 0;
}
