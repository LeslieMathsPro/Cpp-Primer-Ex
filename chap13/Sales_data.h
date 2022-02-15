#include <string>

class Sales_data{
public:
    Sales_data(); //默认构造函数
    Sales_data(const Sales_data&); //与合成的拷贝构造函数等价的拷贝构造函数的声明
    Sales_data& operator=(const Sales_data); //赋值运算符

    ~Sales_data() { };

    std::string isbn() const { return bookNo; }
    Sales_data& combine(const Sales_data&);
    double avg_price() const;
private:
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

Sales_data::Sales_data(const Sales_data &orig):bookNo(orig.bookNo),units_sold(orig.units_sold),revenue(orig.revenue) { }

// Sales_data& Sales_data::operator=(const Sales_data &rhs)
// {
//     bookNo = rhs.bookNo;
//     units_sold = rhs.units_sold;
//     revenue = rhs.revenue;
//     return *this;
// }