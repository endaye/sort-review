//
// Created by Yuancheng Zhang on 10/4/16.
//

#ifndef SORT_REVIEW_SORT_METHORD_H
#define SORT_REVIEW_SORT_METHORD_H

class SortMethod {
public:
    virtual void Sort(int *, const int) {};
    void OutputOriginal(const int *, const int) const;
    void OutputResult(const int *, const int);

protected:
    /*
     * 如果sort_method_name_是私有的
     * 这里用下面这个语句初始化时会报错
     * const char sort_method_name_[] = "General Sort";
     * // error: initializer-string for array of chars is too long
     * 必须要用
     * const char sort_method_name_[13] = "General Sort";
     * 或者（优先用此）
     * const char *sort_method_name_ = "General Sort";
     */

    virtual const char * sort_method_name() {
        return sort_method_name_;
    };

private:
    const char * sort_method_name_ = "General Sort";
};


#endif //SORT_REVIEW_SORT_METHORD_H
