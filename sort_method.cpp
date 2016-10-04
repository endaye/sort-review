//
// Created by Yuancheng Zhang on 10/4/16.
//

#include "sort_method.h"
#include <stdio.h>

void SortMethod::OutputResult(int * input_array, int array_size) {
    printf("%s\n", sort_method_name());
    for (int i = 0; i < array_size; ++i) {
        printf("%2d ", input_array[i]);
    }
    printf("\n");
}