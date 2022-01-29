#include "head.h"

class StrBlob {
public:
    typedef vector<string>::size_type size_type;
    StrBlob();
    StrBlob(initializer_list<string> il);
    size_type size() const { return data->size(); }
    bool empty() const { return data->empty(); }
    //添加和删除元素
    void push_back(const string &t) {data->push_back(t);}
    void pop_back();
    //元素访问
    string& front();
    string& back();
    string& front() const;
    string& back() const;

private:
    shared_ptr<vector<string>> data;
    //如果data[i]不合法，抛出一个异常
    void check(size_type i, const string &msg) const;
};

//StrBlob构造函数
StrBlob::StrBlob(): data(make_shared<vector<string>>()) { }
StrBlob::StrBlob(initializer_list<string> il): data(make_shared<vector<string>>(il)) { }

//pop_back,front和back操作访问vector中的元素，这些操作试图访问元素之前必须检查元素是否存在。
//由于这些成员函数需要做相同的检查操作，我们为StrBlob定义了一个名为check的private工具函数，它检查一个给定索引是否在合法范围内。
void StrBlob::check(size_type i, const string &msg) const
{
    if (i >= data->size())
        throw out_of_range(msg);
}

string& StrBlob::front()
{
    //如果vector为空，check会抛出一个异常
    check(0, "front on empty StrBlob");
    return data->front();
}

string& StrBlob::back()
{
    check(0, "back on empty StrBlob");
    return data->back();
}

string& StrBlob::front() const
{
    //如果vector为空，check会抛出一个异常
    check(0, "front on empty StrBlob");
    return data->front();
}

string& StrBlob::back() const
{
    check(0, "back on empty StrBlob");
    return data->back();
}

void StrBlob::pop_back()
{
    check(0, "pop_back on empty StrBlob");
    data->pop_back();
}


int main()
{
    StrBlob b1;
    StrBlob b2 = {"a","an","the"};
    b1 = b2;
    b2.push_back("about");


    cout << b1.size() << endl;
    cout << b2.size() << endl;
    return 0;   
}


// int main(){
//     //默认初始化的智能指针中保存着一个空指针。
//     shared_ptr<string> p1; //可以指向string
//     shared_ptr<list<int>> p2; //可以指向int的list

//     //如果p1不为空，检查它是否指向一个空string
//     if (p1 && p1->empty())
//         *p1 = "hi"; //如果p1指向一个空string，解引用p1，将一个新值赋予string
// }