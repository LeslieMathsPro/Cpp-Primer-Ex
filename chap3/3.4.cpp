#include <vector>
#include <iostream>
using std::vector;

int main() {
    vector<int>  v{1,1,4,4,5}; //无所谓，在c++11标准下可行。
    auto b = v.begin(); //begin成员负责返回指向第一个元素(或者第一个字符)的迭代器。
    auto e = v.begin(); //end成员则负责返回指向容器(或string对象)"尾元素的下一位置one past the end"的迭代器
    ++e;               //也就是说，该迭代器指示的是容器的一个本不存在的"尾后 off the end"元素。
    bool equal = 0;
    if (b == e) equal = 1;
    std::cout << *b << std::endl;
    std::cout << *e << std::endl;
    std::cout << equal << std::endl;
    return 0;
}

// *  