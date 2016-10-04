//
// Created by Yuancheng Zhang on 10/4/16.
//

#ifndef SORT_REVIEW_SORT_METHORD_H
#define SORT_REVIEW_SORT_METHORD_H

class SortMethod {
public:
    void OutputResult(int *, int);
    const char * sort_method_name() const {
        return sort_method_name_;
    }

private:
    /*
     * 这里用下面这个会报错
     * const char sort_method_name_[] = "General Sort";
     * 必须要用
     * const char sort_method_name_[13] = "General Sort";
     * 或者（优先用此）
     * const char *sort_method_name_ = "General Sort";
     */
    const char *sort_method_name_ = "General Sort";

};


#endif //SORT_REVIEW_SORT_METHORD_H
