#include "head.h"

//对于访问一个不存在元素的尝试, StrBlobPtr抛出一个异常
class StrBlobPtr {
public:
    StrBlobPtr() : curr(0) { }
    StrBlobPtr(StrBlobPtr &a, size_t sz = 0):
            wptr(a.data), curr(sz) { }
    string& deref() const;
    StrBlobPtr& insr(); //前缀递增
private:
    //若检查成功，check返回一个指向vector的shared_ptr
    shared_ptr<vector<string>>
        check(size_t, const string&) const;
    //保存一个weak_ptr，意味着底层vector可能会被销毁
    weak_ptr<vector<string>> wptr;
    size_t curr; //在数组中当前位置
}

shared_ptr<vector<string>>
StrBlobPtr::check(size_t i, const string &msg) const
{
    auto ret = wptr.lock();
    if (!ret)
        throw runtime_error(msg);

    return ret; //否则，返回指向vector的shared_ptr
}
int main(){
    //当我们创建一个weak_ptr时，要用一个shared_ptr来初始化它；
    auto p = make_shared<int>(42);
    weak_ptr<int> wp(p); //wp弱共享p; p的引用计数未改变

    cout << p.use_count() << endl; // 1


    //由于对象可能不存在， 我们不能使用weak_ptr直接访问对象，而必须调用lock。
    //此函数检查weak_ptr指向的对象是否存在。如果存在，lock返回一个指向共享对象的shared_ptr。
    //与任何其他shared_ptr类似，只要此shared_ptr存在，它所指向的底层对象也就会一直存在。
    if (shared_ptr<int> np = wp.lock()){ //若np不为空，则条件成立
        //在if中，np与p共享对象
    }
}