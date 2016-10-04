#include <iostream>
#include "sort_method.h"

int main() {
    int test_input_array_1[] = {89, 12, 22, 9, 18, 3, 33, 12, 34, 7, 91, 22, 15};
    int test_input_array_1_size = sizeof(test_input_array_1) / sizeof(int);
    SortMethod sort_method;
    sort_method.OutputResult(test_input_array_1, test_input_array_1_size);
    return 0;
}