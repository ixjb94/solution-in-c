#include <stdio.h>

int main() {
    // Max input: 100
    int output[100];
    int index = 0;
    int input;

    printf("Enter your Numbers:\n");

    // Block 1
    while (1) {
        scanf("%d", &input);
        if (input == -1) {
            output[index++] = -1;
            break;
        }

        if (input >= 0 && input <= 10) {
            output[index++] = 10;
        } else if (input >= 11 && input <= 20) {
            output[index++] = 25;
        } else if (input > 20) {
            output[index++] = 50;
        }
    }

    // Block 2
    do {
        scanf("%d", &input);

        switch (input) {
            case -1:
                // printf("Stopping...\n");
                break;
            case 0: case 1: case 2: case 3: case 4:
            case 5: case 6: case 7: case 8: case 9: case 10:
                output[index++] = 10;
                break;
            case 11: case 12: case 13: case 14: case 15:
            case 16: case 17: case 18: case 19: case 20:
                output[index++] = 25;
                break;
            default:
                if (input > 20) {
                    output[index++] = 50;
                } else {
                    printf("Error: Only Numbers\n");
                }
                break;
        }
    } while (input != -1);

    // Print the results
    printf("code_1:\n");
    for (int i = 0; i < index; i++) {
        if (output[i] == -1) {
            printf("code_2:\n");
            continue;
        }
        printf("%d\n", output[i]);
    }

    return 0;
}