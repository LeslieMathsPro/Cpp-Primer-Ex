#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <iostream>
#include <string>

using namespace std;

struct Sales_data{
    string bookNo;
    unsigned unit_sold = 0;
    double revenue = 0.0;

    string isbn() const {return bookNo;}
    Sales_data& combine(const Sales_data&);
    double avg_price() const;
};

double Sales_data::avg_price() const{
    if (unit_sold){
        return revenue / unit_sold;
    }
    else {
        return 0;
    }
}

Sales_data& Sales_data::combine (const Sales_data &rhs){
    unit_sold += rhs.unit_sold;
    revenue += rhs.revenue;
    return *this;
}

ostream &print(ostream&, const Sales_data&);
istream &read(istream&, Sales_data&);

ostream &print(ostream &os, const Sales_data &item){
    os << item.isbn() << " " << item.unit_sold << " "
       << item.revenue << " " << item.avg_price();
       return os;
}   

istream &read(istream &is, Sales_data &item){
    double price = 0;
    is >> item.bookNo >> item.unit_sold >> price;
    item.revenue = price * item.unit_sold;
    return is;
}

#endif