#include "head.h"

// int main()
// {
//     vector<int> vec = {1, 2, 3, 4, 5};
//     int sum = accumulate(vec.cbegin(), vec.cend(), 0);
//     cout << sum << endl;
// }

//下面是另一个例子，由于string上定义了+运算符，所以我们可以通过调用accumulate来将vector中所有string元素连接起来
int main()
{
    vector<string> v = {"hello ", "world ", "i ", "am "};
    string sum = accumulate(v.cbegin(), v.cend(), string("Liwei"));
    //注意 accumulate将第三个参数作为求和的起点。
    cout << sum << endl;
}

//算法fill接受一对迭代器表示一个范围，还接受一个值作为第三个参数。
//fill将给定的这个值赋予输入序列中的每个元素
fill(vec.begin(), vec.end(), 0); //将每个元素重置为0
//将容器的一个子序列设置为10
fill(vec.begin(), vec.begin() + vec.size()/2, 10);
//由于fill就是向给定的输入序列中写入数据，因此，只要我们传递了一个有效的输入序列，写入操作就是安全的。

//算法不检查写操作

vector<int> vec; //空vector
//使用vec，赋予它不同值
fill_n(vec.begin(), vec.size(), 0); //将所有元素重置为0

//介绍back_inserter
//一种保证算法有足够元素空间来容纳输出数据的方法是使用 插入迭代器(insert iterator)。
vector<int> vec; //空向量
//正确: back_inserter创建一个插入迭代器，作为算法的目的位置来使用。

//拷贝算法 copy是另一个向目的位置迭代器指向的输出序列中的元素写入数据的算法
int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
int a2[sizeof(a1)/sizeof(*a1)]; //a2与a1的大小一样
//ret指向拷贝到a2的尾元素之后的位置
auto ret = copy(begin(a1), end(a1), a2);
//copy返回的是其目的位置迭代器(递增后)的值。即，ret恰好指向拷贝到a2的尾元素之后的位置
//多个算法都提供所谓的"拷贝"版本，这些算法计算新元素的值，但不会将它们防止在输入序列的末尾，而是创建一个新序列来保存这些结果。

void elimDups(vector<string> &words)
{
    //按字典序排序words，以便查找重复单词
    sort(words.begin(), words.end());
    //unique重排输入范围，使得每个单词只出现一次
    //排列在范围的前部，返回指向不重复区域之后一个位置的迭代器
    auto end_unique = unique(words.begin(), words.end());
    //使用向量操作erase删除重复单词
    words.erase(end_unique, words.end());
}