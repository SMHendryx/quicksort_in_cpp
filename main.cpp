#include <iostream>
#include "quicksort.h"


void printArray(int *a, int array_length) {
    for(size_t i = 0; i < array_length; i++)
        std::cout << a[i] << " ";
}

int main() {
    int arr[] = {17, 9, 11, 15, 7, 8, 16, 25, 19, 7};
    int array_length = 10;

    std::cout << "Array before quicksort: " << std::endl;
    printArray(arr, array_length);
    std::cout << std::endl;

    std::cout << "Length of array = " << array_length << std::endl;

    quicksort(arr, 0, array_length - 1);

    std::cout << "Array after quicksort: " << std::endl;
    printArray(arr, array_length);
    std::cout << std::endl;

    return 0;
}
