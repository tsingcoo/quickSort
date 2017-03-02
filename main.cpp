#include <iostream>
#include "solution.h"

int main() {
    Solution s;
    std::vector<int> arr = {57, 68, 59, 52, 72, 28, 96, 33, 24};
    s.Qsort(arr, 0, arr.size() - 1);
    for (auto &a:arr) {
        std::cout << a << " ";
    }
    return 0;
}