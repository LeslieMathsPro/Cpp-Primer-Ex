#include "Sales_data.h"
#include "head.h"
bool compareIsbn(const Sales_data &lhs, const Sales_data &rhs)
{
    return lhs.isbn() < rhs.isbn();
}

int main(){
    //注释的地方为原始定义
    //multiset<Sales_data, decltype(compareIsbn)*> bookstore(compareIsbn);
    bool(*pf)(const Sales_data&, const Sales_data&) = compareIsbn;
    //pf 是指向compareIsbn 函数的指针

    using F = bool(const Sales_data&, const Sales_data&);
    multiset<Sales_data, F*> bookstore(compareIsbn);

    multiset<Sales_data, F*>::iterator it = bookstore.begin();//本题要求的
}