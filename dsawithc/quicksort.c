#include <stdio.h>

// Function to perform quick sort
void quickSort(int array[], int low, int high) {
    if (low < high) {
        // Partition the array
        int pi = partition(array, low, high);

        // Recursively sort elements before and after partition
        quickSort(array, low, pi - 1);
        quickSort(array, pi + 1, high);
    }
}

// Function to partition the array
int partition(int array[], int low, int high) {
    int pivot = array[high];
    int i = (low - 1);
    int j;
    for ( j = low; j < high; j++) {
        if (array[j] <= pivot) {
            i++;
            // Swap array[i] and array[j]
            int temp = array[i];
            array[i] = array[j];
            array[j] = temp;
        }
    }
    // Swap array[i + 1] and array[high] (or pivot)
    int temp = array[i + 1];
    array[i + 1] = array[high];
    array[high] = temp;
    return (i + 1);
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

    quickSort(array, 0, size - 1);

    printf("After quick sort, sorted array: \n");
    printArray(array, size);

    return 0;
}

