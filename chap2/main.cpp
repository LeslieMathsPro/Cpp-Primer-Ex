#include <iostream>
#include <string>
#include "Sales_data.h"

int main(){
    Sales_data data1, data2;
    //读入data1，data2的代码
    double price = 0;
    std::cin >> data1.bookNo >> data1.units_sold >> price;
    data1.revenue = data1.units_sold * price;

    std::cin >> data2.bookNo >> data2.units_sold >> price;
    data2.revenue = data2.units_sold * price;
    //检查data1和data2的ISBN是否相同代码
    //如果相同，求data1和data2的总和
    if (data1.bookNo == data2.bookNo) {
        unsigned totalCnt = data1.units_sold + data2.units_sold;
        double totalRevenue = data1.revenue + data2.revenue;
        // 输出: ISBN, 总销售量，总销售额， 平均价格
    std::cout << data1.bookNo << " " << totalCnt << " " << totalRevenue << " ";
    if (totalCnt != 0)
        std::cout << totalRevenue/totalCnt << std::endl;
    else 
        std::cout << "(no sales)" << std::endl;
    return 0;
    } else {
        std::cerr << "Data must refer to the same ISBN" << std::endl; 
        return -1;  //标志失败
    }
}