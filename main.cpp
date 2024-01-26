#include "merge_sort.h"
#include <iostream>
#include <vector>

int main() {
    std::vector<int> arr = {12, 11, 13, 5, 6, 7};

    std::cout << "Original array: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Create an instance of the MergeSort class
    MergeSort mergeSort;

    // Use the sort function to sort the array
    mergeSort.sort(arr);

    std::cout << "Sorted array: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
