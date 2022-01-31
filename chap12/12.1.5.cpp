#include "head.h"

int main() {
    //类似shared_ptr，初始化unique_ptr必须采用直接初始化形式
    unique_ptr<double> p1; //可以指向一个double的uniqeu_ptr
    unique_ptr<int> p2 (new int(42)); //p2指向一个值为42值

    //由于一个unique_ptr拥有它指向的对象，因此unique_ptr不支持普通的拷贝和赋值操作
    unique_ptr<string> p1(new string("Stegosaurus"));
    unique_ptr<string> p2(p1); //错误: unique_ptr不支持拷贝
    unique_ptr<string> p3;
    p3 = p1;                   //错误: unique_ptr不支持赋值

    //虽然我们不能拷贝或赋值unique_ptr，但可以通过调用release或rese
    //将指针的所有权从一个(非const)unique_ptr转移给另一个unique
    //将所有权从p1(指向string Stegosaurus)转移给p2
    unique_ptr<string> p2(p1.release()); //release将p1置为空
    unique_ptr<string> p3(new string("Trex"));

    //将所有权从p3转移给p2
    p2.reset(p3.release()); //reset释放了p2原来指向的内存
}