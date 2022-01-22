//对数组执行sizeof运算得到整个数组所占空间的大小，等价于对数组中所有元素各执行一次sizeof运算并将所得结果求和。
//因为执行sizeof运算能得到整个数组的大小，所以可以用数组的大小除以单个元素的大小得到数组中元素的个数
#include <sys/types.h>
#include <iostream>

using namespace std;

int main() {
    //sizeof(ia)/sizeof(*ia) 返回ia的元素数量
    // int ia[5] = {1,2,3,4,5};
    // constexpr size_t sz = sizeof(ia)/sizeof(*ia);
    // cout << sz << endl;

    int x[10]; int *p = x;    cout << sizeof(x)/sizeof(*x) << endl; //10
    cout << sizeof(p)/sizeof(*p) << endl; //8/4 = 2 
}