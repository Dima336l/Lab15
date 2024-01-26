#ifndef MERGE_SORT_H
#define MERGE_SORT_H

#include <vector>

class MergeSort {
public:
    // Public member function to perform merge sort on the array
    void sort(std::vector<int>& arr);

private:
    // Private member function to merge two sorted subarrays
    void merge(std::vector<int>& arr, int l, int m, int r);
    // Private recursive member function for merge sort
    void mergeSort(std::vector<int>& arr, int l, int r);
};

#endif // MERGE_SORT_H
