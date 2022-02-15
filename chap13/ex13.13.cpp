#include <iostream>
#include <vector>

using namespace std;

struct X
{
    X() { cout << "constructor: X()" << endl;}
    X(const X&) { cout << " copy constructor: X(const X&)" << endl;}
    X& operator= (const X &rhs) { cout << "copy assignment operator: X& operator=(const X &rhs)" << endl; return *this; }
    ~X() { cout << "deconstructor: ~X()" << endl;}
};

void f1(X x) {}
void f2(X& x) {}
X& f3() {X x; return x;}
int main()
{
    cout << "local variable: " << endl;
    X x; //
    cout << endl;

    cout << "Non-reference: " << endl;
    f1(x);
    cout << endl;

    cout << "reference: " << endl;
    f2(x);
    cout << endl;

    cout << "动态分配" << endl;
    X* px = new X; 
    cout << endl;

    cout << "添加到容器中: " << endl;
    vector<X> vx;
    vx.push_back(x);
    cout << endl;

    cout << "释放动态分配对象:" << endl;
    delete px;
    cout << endl;

    cout << "间接初始化与赋值: " << endl;
    X y = x;
    y = x;
    cout << endl;

    cout << "程序结束" << endl;
    //释放剩下的非指针对象
    
    return 0;
}