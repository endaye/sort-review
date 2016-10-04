//
// Created by Yuancheng Zhang on 10/4/16.
//

#ifndef SORT_REVIEW_SHELL_SORT_H
#define SORT_REVIEW_SHELL_SORT_H

#include "../sort_method.h"

class ShellSort : public SortMethod {
public:
    void Sort(int *, const int) override ;

protected:
    const char * sort_method_name() override {
        return sort_method_name_;
    }

private:
    const char * sort_method_name_ = "Shell Sort";
};

#endif //SORT_REVIEW_SHELL_SORT_H
