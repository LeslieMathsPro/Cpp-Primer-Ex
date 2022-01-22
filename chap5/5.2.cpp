#include "head.h"

int main(){
    //寻找第一个负值元素
    vector<int> v{1, 2, 3, 4};
    auto beg = v.begin();
    while (beg != v.end() && *beg >= 0){
        ++beg;
    }
    if (beg == v.end()){
        cout << "All positive in v" << endl;
    }
}