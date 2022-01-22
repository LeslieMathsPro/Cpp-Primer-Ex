// 在C++语言中，某些类型之间有关联。如果两种类型有关联，那么当程序需要其中一种类型的运算对象时，可以用另一种关联类型的对象或值来替代。
// 换句话说，如果两种类型可以互相转换(conversion)，那么它们就是关联的。

// 隐式转换: 算术类型之间的隐式转换被设计得尽可能避免损失精度。很多时候，如果表达式中既有整数类型的运算对象，也有浮点数类型的运算对象，整型会转换成浮点型。

// 显式转换 -> 强制类型转换
// 虽然有时不得不使用强制类型转换，但这种方法本质上是非常危险的。
// cast-name<type>(expression)
// 其中type是转换的目标类型而expression是要转换的值，如果type是引用类型，则结果是左值。
#include <iostream>
using namespace std;

int main()
    {
        int i = 3, j = 4;
        double slope = static_cast<double>(i) / j;
        cout << slope << endl;
    }
// int i, j;
// double slope = i / j;

// static_cast
// 任何具有明确定义的类型转换，只要不包含底层const，都可以使用static_cast。
// 进行强制类型转换以便执行浮点数除法
// double slope = static_cast<double>(j) / i;

// static_cast 对于编译器无法自动执行的类型转换也非常有用。


// const_cast 只能改变运算对象的底层const:
