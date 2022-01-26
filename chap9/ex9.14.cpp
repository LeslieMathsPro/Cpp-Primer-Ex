#include "head.h"

int main(){
    list<char*> slist = {"aa", "bb", "cc"};
    vector<string> svec2;
    //assign 也可以实现这个要求
    svec2.assign(slist.cbegin(), slist.cend());
    for (const auto i : svec2)
    {
        cout << i << endl;
    }
    return 0;
}