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

//值初始化：
//通常情况下，可以只提供vector对象容纳的元素数量而略去初始值。
//此时库会创建一个值初始化的(value-initialized)元素初值，并把它赋给容器中的所有元素。

//如果vector对象的元素是内置类型的，比如int，则元素初始值自动设为0.
//如果元素是某种类型的，比如string，则元素由类默认初始化。
vector<int> ivec(10);  // 10个元素，每个都初始化为0
vector<string> svec(10); // 10个元素，每个都是空string对象

//如果只提供了元素的数量而没有设定初始值，只能使用直接初始化。
vector<int> v1(10); //v1有10个元素，每个的值都是0
vector<int> v2{10}; //v2有1个元素，该元素的值是10
vector<int> v3(10, 1); //v3有10个元素，每个的值都是1
vector<int> v4{10, 1}; //v4有两个元素，值分别是10和1.