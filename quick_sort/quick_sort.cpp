//
// Created by Yuancheng Zhang on 10/4/16.
//

#include "quick_sort.h"

/* qsort: sort input_array[0]...intput_array[size-1] into increasing order */
void QuickSort::Sort(int * input_array, const int input_array_size) {
    QuickSortAuxiliaryFunc(input_array, 0, input_array_size-1);
}

/* qsort auxiliary function:
 * sort input_array[left]...input_array[right] into increasing order
 */
void QuickSort::QuickSortAuxiliaryFunc(int * input_array,
                                       const int left_index,
                                       const int right_index) {
    int last_index;

    /* do nothing if array contains fewer than two elements */
    if (left_index >= right_index) {
        return;
    }

    /* move partition elements to input_array[0] */
    SwapTwoElementsInAnArray(input_array,
                             left_index,
                             (left_index + right_index) / 2);
    last_index = left_index;

    /* partition */
    for (int i = left_index + 1; i <= right_index; ++i) {
        if (input_array[i] < input_array[left_index]) {
            SwapTwoElementsInAnArray(input_array, ++last_index, i);
        }
    }

    /* restore partition elements */
    SwapTwoElementsInAnArray(input_array, left_index, last_index);

    QuickSortAuxiliaryFunc(input_array, left_index, last_index - 1);
    QuickSortAuxiliaryFunc(input_array, last_index + 1, right_index);
}

/* swap: interchange input_array[first_index] and input_array[second_index] */
void QuickSort::SwapTwoElementsInAnArray(int * input_array,
                                         const int first_index,
                                         const int second_index) {
    int temp;

    temp = input_array[first_index];
    input_array[first_index] = input_array[second_index];
    input_array[second_index] = temp;
}

/*
 *  0   1   2   3   4   5   6   7   8   9  10  11  12
 * 89, 12, 22,  9, 18,  3, 33, 12, 34,  7, 91, 22, 15
 *  0                       6                      12
 *  l                     (l+r)/2                   r
 * 33,                     89,
 * la
 *      i
 *     la  la  la  la  la  12, 89, 34,
 *                         la   7, 34, 89, 91,
 *                             la  22, 89, 91, 34
 *                                 la  15, 91, 34, 89
 *                                     la
 * 15,                                 33,
 * 15, 12, 22,  9, 18,  3, 12,  7, 22, 33, 91, 34, 89
 */