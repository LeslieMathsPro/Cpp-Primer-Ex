#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> v{1,2,3,4,3};

    auto pbeg = v.begin();
    //输出元素直到遇到第一个负值为止
     while (pbeg != v.end() && *pbeg >= 0)
        cout << *++pbeg << endl; //输出当前值，并且把pbeg向前移动一个元素
}
