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
