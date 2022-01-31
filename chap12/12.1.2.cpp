#include "head.h"

int main(){
    int *pi = new int;  // pi指向一个动态分配，未初始化的无名对象
    //默认情况下，动态分配的对象是默认初始化的，这意味着内置类型或组合类型的对象的值将是未定义的
    //而类类型对象将用默认构造函数进行初始化:

    string *ps = new string;   //初始化为空string
    int *pi = new int;         //pi指向一个未初始化的int

    //我们可以使用直接初始化方式来初始化一个动态分配的对象。
    //我们可以使用传统的构造方式(使用圆括号)，在新标准下，也可以使用列表初始化(使用花括号)
    int *pi = new int(1024);   //pi指向的对象的值为1024
    string *ps = new string(10, '9');   //*ps为"9999999999"

    //vector有10个元素，值依次从0到9
    vector<int> *pv = new vector<int>{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    //也可以对动态分配的对象进行值初始化，只需在类型名之后跟一对空括号即可。
    string *ps1 = new string; //默认初始化为空string
    string *ps2 = new string(); //默认初始化为空string
    int *pi1 = new int;  //默认初始化；*pi的值未定义
    int *pi2 = new int;  //值初始化为0; *pi2为0

    //如果我们提供了一个括号包围的初始化器，就可以使用auto从此初始化器来推断我们想要分配的对象的类型
    //但是，由于编译器要用初始化器的类型来推断要分配的类型，只有当括号中仅有单一初始化器时才可以使用auto
    auto p1 = new auto(obj);  //pi指向一个与obj类型相同的对象
    auto p2 = new auto{a, b, c}; //错误：括号中只能有单个初始化器
    //p1的类型是一个指针，指向从obj自动推断出的类型。
    //若obj是一个int，那么p1就是int*；
    //若obj是一个string，那么p1就是一个string*
    //依此类推。新分配的对象用obj的值进行初始化

    //分配并初始化一个const int
    const int *pci = new const int(1024);
    //分配并默认初始化一个const的空string
    const string *pcs = new const string;
    //类似其他任何const对象，一个动态分配的const对象必须进行初始化。
    //对于一个定义了默认构造函数的类类型，其const动态对象可以隐式初始化，而其他类型的对象就必须显式初始化。
    //由于分配的对象是const的，new返回的指针是一个指向const的指针。

    int *pi = new int; //如果分配失败，new抛出std::bad_alloc
    int *p2 = new (nothrow) int; //如果分配失败，new返回一个空指针


    //释放动态内存
    //为了防止内存耗尽，在动态内存使用完毕后，必须将其归还给系统。我们通过delete表达式(delete expression)来将动态内存归还给系统。
    //delete表达式接受一个指针，指向我们想要释放的对象
    delete p; //p必须指向一个动态分配的对象或者是一个空指针。
    //与new类型类型，delete表达式也包含两个动作：销毁给定的指针指向的对象；  释放对应的内存。
}