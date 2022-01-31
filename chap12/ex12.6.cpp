#include "head.h"

void readi(vector<int> *p){
    int val;
    cout << "please input the value in vector p:" << " ";
    while (cin >> val){
        p->push_back(val);
    }
}

void printi(vector<int> *p){
    for (auto &i : *p){
        cout << i << " ";
    }
    cout << endl;
}

int main(){
    vector<int> *p = new vector<int>;
    readi(p);
    printi(p);
    delete p;
    return 0;
}