#include <stdio.h>

// Function to calculate factorial
int factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    } else {
        return num * factorial(num - 1);
    }
}

// Function to calculate nCr
int nCr(int n, int r) {
    if (n < r) {
        printf("enter valid numbers\n");
        return 0; // Invalid input, n should be greater than or equal to r
    }

    int result = factorial(n) / (factorial(r) * factorial(n - r));
    return result;
}

int main() {
    int n, r;

    // Input values for n and r
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Enter the value of r: ");
    scanf("%d", &r);

    // Calculate and display the result
    printf("%dC%d = %d\n", n, r, nCr(n, r));

    return 0;
}
