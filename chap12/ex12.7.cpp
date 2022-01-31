#include "head.h"

void readi(shared_ptr<vector<int>> p){
    int val;
    cout << "please input the value in vector p:" << " ";
    while (cin >> val){
        p->push_back(val);
    }
}

void printi(shared_ptr<vector<int>> *p){
    for (auto &i : *p){
        cout << i << " ";
    }
    cout << endl;
}

int main(){
    shared_ptr<vector<int>> p = make_shared<vector<int>>();
    printi(p);
    return 0;
}