//除了接受迭代器的insert和erase版本外，string还接受下标的版本。
//下标指出了开始删除的位置，或是insert到给定值之前的位置:

s.insert(s.size(), 5, '!'); //在s末尾插入五个感叹号
s.erase(s.size(), -5, 5);   //从s删除最后五个字符

//标准库string类型还提供接受C风格字符数组的insert和assign版本。
//例如，我们可以将空字符结尾的字符数组insert到或assign给一个string:
const char *cp = "Stately, plump Buck";
s.assign(cp, 7); //s == "Stately"
s.insert(s.size(), cp + 7); //s == "Stately, plump Buck"

string s("C++ Primer"), s2 = s; //将s和s2初始化为"C++ Primer"
s.insert(s.size(), "4th Ed."); // s == "C++ Primer 4th Ed."
s2.append(" 4th Ed.")          //等价方法: 将"4th Ed." 追加到s2; s == s2

//将4th 替换成 5th的等价方法
s.erase(11, 3);  //
s.erase(11, 3, "5th");

//or
s.replace(11, 3, "5th"); 

//此例中调用replace时，插入的文本恰好与删除的文本一样长。但这不是必须的，
//可以插入一个更长或更短的string;
s.replace(11, 3, "Fifth");