#include <iostream>
#include <memory>

using namespace std;
//#pragma warning( disable : 4996 ) //关闭strcpy不安全错误

int main(){
    char a[] = "C++";
    char b[] = "Primer";
    size_t i = sizeof(a) + sizeof(b);
    char *cp = new char[i]; //动态分配的char数组
    
    strcpy(cp, a);
    strcat(cp, b);

    cout << cp << endl;

    delete[] cp;

    return 0;
}
