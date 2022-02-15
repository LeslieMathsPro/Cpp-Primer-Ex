#include <iostream>
#include <algorithm>

using namespace std;

class numbered
{
public:
    numbered():mysn(rand()){}
    numbered(const numbered &num):mysn(num.mysn){}
    int mysn;
};

//void f(numbered s) { cout << s.mysn << endl; }

void f(const numbered &s) { std::cout << s.mysn << std::endl; }

int main()
{
    const numbered a, b = a, c = b;
    f(a);
    f(b);
    f(c);

    return 0;
}