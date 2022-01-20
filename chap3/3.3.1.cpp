//标准库类型vector表示对象的集合，其中所有对象的类型都相同。
//集合中的每个对象都有一个与之对应的索引，索引用于访问对象。
//因为vector容纳者其他对象，因此他也经常被称为容器container.
#include <vector>
using std::vector;

//C++既有类模版(class template)，也有函数模版，其中vector是一个类模版。
//只有对C++有了相当深入的理解才能写出模板。

//模板本身不是类或者函数，相反可以将模板看作为编译器生成类或者函数编写的一份说明
//编译器根据模板创建类或函数的过程称为实例化instantiation
//当使用模板时，需要指出编译器应把类或者函数实例化成何种类型。

//vector是模板而不是类型，由vector生成的类型必须包含vector元素中的类型。


//初始化vector
vector<T> v1; //v1是一个空vector，它潜在的元素是T类型的，执行默认初始化。
vector<T> v2(v1); //v2中包含有v1所有元素的副本。
vector<T> v2 = v1; //同上
vector<T> v3(n, val); //v3包含了n个重复的元素，每个元素的值都是val
vector<T> v4(n); //v4包含了n个重复地执行了值初始化的对象
vector<T> v5{a, b, c ...} //v5包含初始值个数的元素，每个元素被赋予相应的初始值
vector<T> v5 = {a, b, c ...} //同上

//列表初始化vector对象
vector<string> articles = {"a", "an", "the"};
//创建指定数量的元素
vector<int> ivec(10, -1); //10个int类型的元素，每个都被初始化为-1
vector<string> svec(10, "hi!"); //10个sting类型的元素，每个都被初始化为"hi!"