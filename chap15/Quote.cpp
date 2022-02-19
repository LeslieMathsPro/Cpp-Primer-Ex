#include <iostream>
#include <string>
#include <memory>

class Quote {
public:
    Quote() = default; 
    Quote(const std::string &book, double sales_price): bookNo(book), price(sales_price) { }
    std::string isbn() const { return bookNo; }
    //返回给定数量的书籍的销售总额
    //派生类负责改写并使用不同的折扣计算算法
    virtual double net_price(std::size_t n) const
        { return n * price; }
    virtual ~Quote() = default; //对析构函数进行动态绑定
    virtual void debug() const
    {
        std::cout << "bookNo: " << bookNo << std::endl
                  << "price: " << price << std::endl;
    }

private:
    std::string bookNo; //书籍的ISBN编号
protected:
    double price = 0.0; //代表普通状态下不打折的价格
};

class Bulk_Quote : public Quote {   //Bulk_quote继承了Quote
public:
    Bulk_Quote() = default;
    //Bulk_Quote(const std::string&, double, std::size_t, double);
    Bulk_Quote(const std::string& book, double p, std::size_t qty, double disc) :
        Quote(book, p), min_qty(qty), discount(disc) { }
    //覆盖基类的函数版本以实现基于大量购买的折扣政策
    double net_price(std::size_t) const override;
    void debug() const override
    {
        Quote::debug();
        std::cout << "min_qty:" << min_qty << std::endl
                  << "discount:" << discount << std::endl;
    }
private:
    std::size_t min_qty = 0;    //适用折扣政策的最低购买量
    double discount = 0.0;      //以小数表示的折扣额
};

//如果达到了购买书籍的某个最低限量值，就可以享受折扣价格
double Bulk_Quote::net_price(size_t cnt) const
{
    if ( cnt >= min_qty )
        return cnt * (1 - discount) * price;
    else 
        return cnt * price;
}

double print_total(std::ostream &os, const Quote &item, size_t n)
{
    // 根据传入item形参的对象类型调用Quote::net_price
    // 或者Bulk_quote::net_price
    double ret = item.net_price(n);
    os << "ISBN: " << item.isbn()   //调用Quote::isbn
       << "# sold: " << n << " total due: " << ret << std::endl;
    return ret;
}

// 练习15.11
void func1()
{
	Quote *quote = nullptr;
	Quote base("0-201-70353-X", 5);
	Bulk_Quote derived("0-201-70353-X", 5, 5, 0.5);

	quote = &base;
	quote->debug();

	quote = &derived;
	quote->debug();
}

int main()
{
    func1();
    return 0;
}