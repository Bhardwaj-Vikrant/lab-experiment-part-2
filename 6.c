#include <stdio.h>

// Function to calculate the nth Fibonacci number
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

// Function to generate and print Fibonacci series up to n terms
void Series(int n) {
    printf("Fibonacci Series up to %d terms: ", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));//function call within a function
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the number of terms for Fibonacci series: ");
    scanf("%d", &n);
    if (n < 1) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1; 
    }

    Series(n);

    return 0;
}
