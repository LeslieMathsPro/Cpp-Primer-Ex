#include "head.h"

unique_ptr<int> clone(int p)
{
    //正确: 从int*创建一个unique_ptr<int>
    return unique_ptr<int>(new int(p));
}

//还可以返回一个局部对象的拷贝:
unique_ptr<int> clone(int p)
{
    unique_ptr<int> ret(new int (p));
    // ...
    return ret;
}

int main(){
    //不能拷贝unique_ptr的规则有一个例外: 我们可以拷贝或赋值一个将要被销毁的unique_ptr。

}