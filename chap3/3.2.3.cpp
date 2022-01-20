//处理string对象中的字符
#include <cctype>
#include <string>
#include <iostream>

using namespace std;
//cctype中的函数
// isalnum(c); //
// isalpha(c);
// isdigit(c);

// int main(){
//     std::string str("some string");
//     for (auto c : str){ //让编译器来决定c的类型
//         std::cout << c << std::endl;
//     }
// }

//这里实现一个使用for和ispunct函数来统计string对象中标点个数：
// int main(){
//     string s("Hello World!!!");
//     decltype(s.size()) punct_cnt = 0;

//     for (auto c : s){
//         if (ispunct(c)){
//             ++punct_cnt;
//         }
//     }
//     cout << punct_cnt 
//          << " punctuation characters in " << s << endl;
//     return 0;
// }

//使用范围for语句改变字符串中的字符
//如果想要改变string对象中字符的值，必须把循环变量定义成引用类型。
// int main(){
//     string s("Hello World!!!");

//     for (auto &c : s)
//         c = toupper(c);
//     cout << s << endl;
//     return 0;
// }

//string 下标必须大于等于0而小于s.size()。
//使用超出此范围的下标将引发不可预知的结果，以此推断，使用下标访问空string也会引发不可预知的结果。

//想要编写一个程序，把0到15之间的十进制数转换成对应的十六进制形式，只需要初始化一个字符串令其存放16个十六进制"数字"
int main(){
    const string hexdigits = "0123456789ABCDEF"; //可能的十六进制数字
    cout << "Enter a series of numbers between 0 and 15"
         << " separated by spaces. Hit ENTER when finished: "
         << endl;
    string result;  //用于保存十六进制的字符串
    string::size_type n;  //用于保存从输入流读取的数
    while(cin >> n)
        if (n < hexdigits.size())
            result += hexdigits[n];
    cout << "Your hex number is: " << result << endl;
    return 0;
}