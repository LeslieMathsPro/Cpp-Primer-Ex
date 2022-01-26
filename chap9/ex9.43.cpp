#include "head.h"

// void func(string &s, string oldVal, string newVal)
// {
//     int n = oldVal.size();

//     for (auto iter = s.begin(); iter != s.end(); ++iter)
//     {
//         if (oldVal == string(iter, iter+n)) 
//         {
//             iter = s.erase(iter, iter+n);
//             s.insert(iter, newVal.begin(), newVal.end());
//         }
//     }
// }

void func(string &s, string oldVal, string newVal)
{
    int n = oldVal.size();
    for (int i = 0; i < s.size() - n; ++i)
    {
        if (oldVal == s.substr(i, n))
        {
            s.replace(i, n, newVal);
        }
    }
}

void test01()
{
	string s("I konw,though,you thoughlove methough"), oldVal("though"), newVal("tho");
	cout << s << endl;
	func(s, oldVal, newVal);
	cout <<  s<< endl;
}
int main()
{
	test01();
	return 0;
}