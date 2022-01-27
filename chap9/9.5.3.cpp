//find函数完成最简单的搜索。它查找参数指定的字符串，若找到，则返回第一个匹配位置的下标，否则返回npos;

string name("AnnaBelle");
auto pos1 = name.find("Anna"); //pos1 == 0

string name("annaBelle");
auto pos1 = name.find("Anna"); //pos1 == npos


//字符串中常常包含表示数值的字符。例如，我们用两个字符的string表示数值15-字符'1'后跟字符'5'。
//一般情况下，一个数的字符表示不同于其数值。
int i = 42;
string s = to_string(i); //将整数i转换成字符表示形式
double d = stod(s); //将字符串s转换成浮点数

//要转换成数值的string中第一个非空白符必须是数值中可能出现的字符:
string s2 = "pi = 3.14";
//转换s中以数字开始的第一个子串，结果d = 3.14
d = stod (s.substr(s2.find_first_of("+-.0123456789")));

