#include "head.h"

list<int> ilist(10, 42);            //10个int；每个值都是42
ilist.resize(15);                   //将5个值为0的元素添加到ilist的末尾
ilist.resize(25, -1);               //将10个值为-1的元素添加到ilist的末尾
ilist.resize(5);                    //从ilist的末尾删除20个元素

