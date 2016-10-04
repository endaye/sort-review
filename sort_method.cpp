//
// Created by Yuancheng Zhang on 10/4/16.
//

#include "sort_method.h"
#include <stdio.h>

void SortMethod::OutputOriginal(const int * input_array, const int array_size) const {
    printf("Input Array:\n");
    for (int i = 0; i < array_size; ++i) {
        printf("%2d ", input_array[i]);
    }
    printf("\n");
}

void SortMethod::OutputResult(const int * input_array, const int array_size) {
    printf("%s:\n", this->sort_method_name());
    for (int i = 0; i < array_size; ++i) {
        printf("%2d ", input_array[i]);
    }
    printf("\n");
}