#include "head.h"

int main()
{
    //傻瓜循环，删除偶数元素，复制每个奇数元素
    vector<int> vi = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto iter = vi.begin();                           //调用begin而不是cbegin，因为我们要改变vi
    while (iter != vi.end())
    {
        if(*iter % 2)
        {
            iter = vi.insert(iter, *iter);              //复制当前元素
            iter += 2;                                  //当前移动迭代器，跳过当前元素以及插入到它之前的元素
        }   
        else
        {
            iter = vi.erase(iter);                      //删除偶数元素  
            //不应再向前移动迭代器，iter指向我们删除的元素之后的元素
        }
    }
}

//如果在一个循环中插入/删除deque,string或vector中的元素，不要缓存end返回的迭代器
//必须要在每次插入操作后重新调用end()， 而不能在循环开始前保存它返回的迭代器

//更安全的方法: 在每个循环步添加/删除元素后都重新计算end
while (begin != v.end()) {
    //做一些处理
    ++begin; //向前移动begin，因为我们想在此元素之后插入元素
    begin = v.insert(begin, 42); //插入新值
    ++begin; //向前移动begin，跳过我们刚刚加入的元素
} 