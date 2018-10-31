#include "quicksort.h"

// Function definitions:

void swap(int arr[], int left, int right) {
    // Swaps the elements at left and right indices in arr
    int tmp = arr[right];
    arr[right] = arr[left];
    arr[left] = tmp;
}

int partition(int arr[], int left, int right) {
    int pivot = arr[(left + right) / 2]; // Choose pivot as middle element
    while (left <= right) {
        // Find the elements to swap:
        while (arr[left] < pivot) left++; // we increment the left index until we hit an elem great than pivot (since this should go on the other side of pivot)
        while (arr[right] > pivot) right--;

        // Swap the elements and move indices:
        if (left <= right) {
            swap(arr, left, right);
            left++;
            right--;
        }
    }
    return left; // return potentially modified left index as the new partitioning index
}

void quicksort(int arr[], int left, int right) {
    /*
    Quicksort algorithm implemented from Cracking the Coding Interview
    arr: array of ints to sort
    left: left index of array to sort
    right: right index of array to sort
    */
    int index = partition(arr, left, right);
    if (left < index - 1) { // Sort left half
        quicksort(arr, left, index - 1);
    }
    if (index < right) { //Sort right half
        quicksort(arr, index, right);
    }
}

