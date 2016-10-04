//
// Created by Yuancheng Zhang on 10/4/16.
//

#include "shell_sort.h"

/* shellsort: sort input_array[0]...intput_array[size-1] into increasing order */
void ShellSort::Sort(int * input_array, int input_array_size) {
    int gap, i, j, temp;

    // 最外层的for语句控制两个被比较元素之间的距离，从n/2开始，逐渐进行对折，直到距离为0
    for (gap = input_array_size / 2; gap > 0; gap /= 2) {
        // 中间层的for循环用于在元素间移动位置
        for (i = gap; i < input_array_size; ++i) {
            /*
             * 最内层的for语句用于比价各对相距gap个位置对元素，当这两个元素逆序时把它们互关
             * 由于gap的值最终要递减到1，因此所有元素最终都会位于正确的排序位置上
             */
            for (j = i - gap;
                 j >= 0 && input_array[j] > input_array[j+gap];
                 j -= gap) {
                // switch [j] and [j+gap] values
                temp = input_array[j];
                input_array[j] = input_array[j+gap];
                input_array[j+gap] = temp;
            }
        }
    }
}

