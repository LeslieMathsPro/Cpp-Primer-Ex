 #include <string> 
 #include <iostream>
 using std::string;
 using std::cin;
 using std::cout;
 using std::endl;

//  //string 的操作
//  os << s; //将s写到输出流os当中，返回os
//  is >> s; //从is中读取字符串赋给s，字符串以空白分隔，返回is
//  getline (is,s); //从is中读取一行赋给s, 返回is
//  s.empty();
//  s.size();
//  s[n];
//  s1 + s2; //返回s1和s2连接后的结果
//  s1 = s2; //用s2的副本代替s1中原来的字符
//  s1 == s2;
//  s1 != s2;
//  <, <=, >, >= //利用字符在字典中的顺序来进行比较，且对字母的大小写敏感

//读取未知数量的string对象
// int main() {
//     string word;
//     while(cin >> word)           //反复读取，直至到达文件末尾
//         cout << word << endl;    //逐个输出单词，每个单词后面紧跟一个换行
//     return 0;
// }

// int main() {
//     string line;
//     while(getline(cin, line))           //反复读取，直至到达文件末尾
//         cout << line << endl;    //逐个输出单词，每个单词后面紧跟一个换行
//     return 0;
// }

//string::size_type 类型
//其实 size函数返回的是一个string::size_type类型的值， 它是一个无符号类型的值，而且能足够存放下任何string对象的大小。
//所有用于存放string类的size函数返回值的变量，都应该是string::size_type类型的。

//如果一个表达式中已经有了size() 函数， 就不要再用int了。这样可以避免混用int 和 unsigned可能带来的问题。

//因为某些历史原因，也为了与C语言兼容，C++语言中的字符串字面值并不是标准库类型string的对象
//切记：字符串字面值与string是不同的类型。
