#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// Function to get the maximum value in the array
int getMax(int array[], int size) {
    int max = array[0];
    int i;
    for ( i = 1; i < size; i++) {
        if (array[i] > max)
            max = array[i];
    }
    return max;
}

// Function to perform counting sort based on the digit represented by exp
void countingSort(int array[], int size, int exp) {
    int output[size];
    int i, count[10] = {0};

    // Store the count of occurrences of each digit
    for (i = 0; i < size; i++)
        count[(array[i] / exp) % 10]++;

    // Change count[i] so that it contains the actual position of this digit in output[]
    for (i = 1; i < 10; i++)
        count[i] += count[i - 1];

    // Build the output array
    for (i = size - 1; i >= 0; i--) {
        output[count[(array[i] / exp) % 10] - 1] = array[i];
        count[(array[i] / exp) % 10]--;
    }

    // Copy the output array to array[], so that array[] contains sorted numbers according to the current digit
    for (i = 0; i < size; i++)
        array[i] = output[i];
}

// Function to perform radix sort
void radixSort(int array[], int size) {
    int max = getMax(array, size);

    // Perform counting sort for every digit
    int exp;
    for ( exp = 1; max / exp > 0; exp *= 10)
        countingSort(array, size, exp);
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
    int array[] = {170, 45, 75, 90, 802, 24, 2, 66}; // Data to be sorted
    int size = sizeof(array) / sizeof(array[0]);

    printf("Original array: \n");
    printArray(array, size);

    radixSort(array, size);

    printf("After radix sort, sorted array: \n");
    printArray(array, size);

    return 0;
}

