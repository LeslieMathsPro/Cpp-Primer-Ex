#include "head.h"

int main(){
    pair<string, int> p; //定义一个空的pair类型
    vector<pair<string, int>> vec;
    string word;
    int ival;
    while (cin >> word >> ival){
        p = {word, ival}; //采用列表初始化的方式
        vec.push_back(p);
    }

    for (int i = 0; i != vec.size(); ++i) //输出vector里面的内容
    {
        cout << (vec[i]).first << " " << (vec[i].second) << " " << endl;
    }
    return 0;
}