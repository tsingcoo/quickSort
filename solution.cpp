//
// Created by 王青龙 on 2017/3/1.
//

#include "solution.h"


void Solution::Qsort(std::vector<int> &arr, int l, int r) {
    if (l >= r) {//递归需要有结束条件
        return;
    }
    int i = l;
    int j = r;
    int k = arr[l];
    while (i < j) {
        while (i < j && k <= arr[j]) {
            --j;
        }
        arr[i] = arr[j];
        while (i < j && k >= arr[i]) {
            ++i;
        }
        arr[j] = arr[i];
    }
    arr[i] = k;
    Qsort(arr, l, i - 1);
    Qsort(arr, i + 1, r);
}
