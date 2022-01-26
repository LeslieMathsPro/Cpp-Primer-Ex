//特殊的forward_list操作
#include "head.h"

int main()
{ 
    forward_list<int> flst = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto prev = flst.before_begin();                        //表示flst的"首前元素"
    auto curr = flst.begin();                               //表示flst的"第一个元素"
    while (curr != flst.end())                              //表示仍有元素要处理
    {
        if (*curr % 2)                                      //若元素为奇数
            curr = flst.erase_after(prev);                  //删除该元素并移动curr  
        else {
            prev = curr;                                    //移动迭代器curr，指向下一个元素, prev指向
            curr++;                                         //prev之前的元素
        } 
    }
}