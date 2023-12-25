#include <stdio.h>

int linear_search(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;  // Element found, return its index
        }
    }
    return -1;  // Element not found in the array
}

int main() {
    int my_array[] = {10, 5, 7, 2, 8, 4, 1};
    int size = sizeof(my_array);
    int target_element = 8;

    int result = linear_search(my_array, size, target_element);

    // Display the result
    if (result != -1) {
        printf("Element %d found at index %d.\n", target_element, result);
    } else {
        printf("Element %d not found in the array.\n", target_element);
    }

    return 0;
}
