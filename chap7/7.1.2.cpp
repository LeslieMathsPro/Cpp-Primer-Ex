#include "head.h"

class Sales_data {
//为Sales_data的非成员函数所做的右元声明
friend Sales_data add(const Sales_data&, const Sales_data&);
friend std::istream &read(std::istream&, Sales_data&);
friend std::ostream &print(std::ostream&, const Sales_data&);

public:
    //新增的构造函数
    Sales_data() = default;                
    Sales_data(const std::string &s) : bookNo(s) { }
    Sales_data(const std::string &s, unsigned n, double p) :
                bookNo(s), units_sold(n), revenue(p*n) { }
    Sales_data(std::istream &);
    //新成员：关于Sales_data对象的操作
    std::string isbn() const { return bookNo; }
    //std::string isbn() const { return this->bookNo; }
    //std::string isbn(const Sales_data *const this) { return this->bookNo; }
    Sales_data& combine(const Sales_data&);
private:
    double avg_price() const;
    //数据成员
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

double Sales_data::avg_price() const{
    if (units_sold)
        return revenue/units_sold;
    else
        return 0;
}

Sales_data& Sales_data::combine(const Sales_data &rhs)
{
    units_sold += rhs.units_sold; //把rhs的成员加到this对象的成员上
    revenue += rhs.revenue;
    return  *this;
}

//Sales_data 的非成员接口函数
Sales_data add(const Sales_data&, const Sales_data&);
std::ostream &print(std::ostream&, const Sales_data&);
std::istream &read(std::istream&, Sales_data&);

//输入的交易信息包括ISBN,售出总数和售出价格
istream &read(istream &is, Sales_data &item)
{
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}

ostream &print(ostream &os, const Sales_data &item)
{
    os << item.isbn() << " " << item.units_sold << " "
       << item.revenue << " " << item.avg_price();
    return os;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
    Sales_data sum = lhs; //把lhs的数据成员拷贝给sum
    sum.combine(rhs);     //把rhs的数据成员加到sum当中
    return sum;
}

int main() {
    //total.combine(trans); //更新变量total当前的值
    Sales_data total;       //保存当前求和的变量
    if (read(cin, total)) { //读入第一笔交易
        Sales_data trans;   //保存下一笔交易的数据
        while (read(cin, trans)) { //读入剩余的交易
            if (total.isbn() == trans.isbn()) 
                total.combine(trans);
            else {
                print(cout, total) << endl; //输出结果
                total = trans;              //处理下一本书
            }
        }
        print(cout, total) << endl;
    } else {
        cerr << "No data?!" << endl;
        return -1;
    }
    return 0;
}