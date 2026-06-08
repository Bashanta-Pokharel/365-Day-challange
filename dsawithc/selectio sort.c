#include <stdio.h>

// Function to perform selection sort
void selectionSort(int array[], int size) {
	int step;
    for ( step = 0; step < size - 1; step++) {
        int min_idx = step;
        int i;
        for ( i = step + 1; i < size; i++) {
            if (array[i] < array[min_idx])
                min_idx = i;
        }
        // Swap the found minimum element with the first element
        int temp = array[min_idx];
        array[min_idx] = array[step];
        array[step] = temp;
    }
}

// Function to print an array
void printArray(int array[], int size) {
	int i;
    for ( i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int array[] = {29, 10, 14, 37, 14}; // Data to be sorted
    int size = sizeof(array) / sizeof(array[0]);

    printf("Original array: \n");
    printArray(array, size);

    selectionSort(array, size);

    printf("after selection sort Sorted array: \n");
    printArray(array, size);

    return 0;
}

