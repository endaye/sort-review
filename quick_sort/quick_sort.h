//
// Created by Yuancheng Zhang on 10/4/16.
//

#ifndef SORT_REVIEW_QUICK_SORT_H
#define SORT_REVIEW_QUICK_SORT_H

#include "../sort_method.h"

class QuickSort : public SortMethod {
public:
    void Sort(int *, const int) override ;

protected:
    const char * sort_method_name() override {
        return sort_method_name_;
    }
    void QuickSortAuxiliaryFunc(int *, const int, const int);
    void SwapTwoElementsInAnArray(int *, const int, const int);

private:
    const char * sort_method_name_ = "Quick Sort";
};


#endif //SORT_REVIEW_QUICK_SORT_H
