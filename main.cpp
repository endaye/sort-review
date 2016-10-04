#include "sort_method.h"
#include "shell_sort/shell_sort.h"
#include "quick_sort/quick_sort.h"

int main() {
    int test_input_array_1[] = {89, 12, 22, 9, 18, 3, 33, 12, 34, 7, 91, 22, 15};
    int test_input_array_2[] = {89, 12, 22, 9, 18, 3, 33, 12, 34, 7, 91, 22, 15};
    int test_input_array_1_size = sizeof(test_input_array_1) / sizeof(int);
    int test_input_array_2_size = sizeof(test_input_array_2) / sizeof(int);

    ShellSort sort_method_1;
    sort_method_1.OutputOriginal(test_input_array_1, test_input_array_1_size);
    sort_method_1.Sort(test_input_array_1, test_input_array_1_size);
    sort_method_1.OutputResult(test_input_array_1, test_input_array_1_size);

    QuickSort sort_method_2;
    sort_method_2.OutputOriginal(test_input_array_2, test_input_array_2_size);
    sort_method_2.Sort(test_input_array_2, test_input_array_2_size);
    sort_method_2.OutputResult(test_input_array_2, test_input_array_2_size);

    return 0;
}