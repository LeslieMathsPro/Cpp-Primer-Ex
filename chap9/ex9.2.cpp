#include 'head.h'
//list<deque<int>> a;

while (begin != end){
    *begin = val;   //正确: 范围非空，因此begin指向一个元素
    ++begin;        //移动迭代器，获取下一个元素
}