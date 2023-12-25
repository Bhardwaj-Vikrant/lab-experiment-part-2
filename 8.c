#include <stdio.h>

int main() {
    int operation;
    float num1, num2, result;
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    while (1) {
        // Display menu
        printf("\n***** Simple Menu *****\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &operation);

        if (operation == 5) {
            printf("Exiting the program. Goodbye!\n");
            break;
        }
        // Perform operations based on user choice
        switch (operation) {
            case 1:
                result = num1 + num2;
                break;

            case 2:
                result = num1 - num2;
                break;

            case 3:
                result = num1 * num2;
                break;

            case 4:
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Result: %f\n", result);
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                continue;

            default:
                printf("Invalid choice. Please enter a valid option.\n");
                continue;
        }

        // Display the result
        printf("Result: %f\n", result);
    }

    return 0;
}
