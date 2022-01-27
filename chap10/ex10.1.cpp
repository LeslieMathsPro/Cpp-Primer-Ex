#include "head.h"

// int main()
// {
//     int val;
//     vector<int> a;
//     while(cin >> val){
//         a.push_back(val);
//     }
//     int findVal = 1;

//     cout << "The val " << findVal << " shows " << count(a.begin(), a.end(), findVal) << endl;
// }
int main()
{
    string s;
    list<string> ls;
    while(cin >> s){
        ls.push_back(s);
    }
    string findString = "hello";

    cout << "The string " << findString << " shows " << count(ls.begin(), ls.end(), findString) << endl;
}

//错误: const char*上没有定义+运算符
string sum = accumulate(v.cbegin(), v.cend(), "");
//原因在于，如果我们传递了一个字符串字面值，用于保存和的对象的类型将是const char*
//如前所述，此类型决定了使用哪个+运算符。由于const char*并没有+运算符，此调用将产生编译错误。

