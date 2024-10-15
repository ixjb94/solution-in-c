#include <stdio.h>

int main() {
    int N, sum_of_N, sum_of_input = 0;
    
    // Input
    printf("Enter A Number: ");
    scanf("%d", &N);

    if (N <= 1 || N >= 1000000) {
        printf("N >= 2 and N <= 1000000");
        return 0;
    }

    // Sum of 1 to N
    sum_of_N = N * (N + 1) / 2;

    // Sum N-1
    printf("Enter %d Numbers: ", N - 1);
    for (int i = 0; i < N - 1; i++) {
        int temp;
        scanf("%d", &temp);
        sum_of_input += temp;
    }

    // Diff Sum(N-1) - Sum(Input)
    int missing_number = sum_of_N - sum_of_input;
    
    // Output
    printf("The: %d is Missing", missing_number);
    
    return 0;
}