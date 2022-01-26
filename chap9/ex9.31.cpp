#include "head.h"

int main()
{
    list<int> lst = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto iter = lst.begin();
    while (iter != lst.end())
    {
        if (*iter % 2)
        {
            iter = lst.insert(iter, *iter); //在iter迭代器前插入元素，返回新添加的元素的迭代器。
            ++iter;
            ++iter;
            
        }
        else 
        {
            iter = lst.erase(iter);                //删除迭代器所指的元素，返回一个指向被删元素之后元素的迭代器
        }
    }

    for(auto &a :lst){
        cout << a << " ";
    cout << endl;
    }
}