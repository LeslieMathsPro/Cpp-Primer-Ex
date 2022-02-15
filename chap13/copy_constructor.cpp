#include "head.h"

class Sales_data{
public:
    // 其他成员和构造函数的定义，如前
    // 与合成的拷贝构造函数等价的拷贝构造函数的声明
    Sales_data(const Sales_data&);

private:
    string bookNo;
    int units_sold = 0;
    double revenue = 0.0;
};

Sales_data::Sales_data(const Sales_data &orig):
    bookNo(orig.bookNo),          //使用string的拷贝构造函数
    units_sold(orig.units_sold),  //拷贝orig.units_sold
    revenue(orig.revenue)         //拷贝orig.revenue
    {   }

int main(){
    string dot
}