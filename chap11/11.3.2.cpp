#include "head.h"

int main(){
    vector<int> ivec = {2, 4, 6, 8, 2, 4, 6, 8};
    set<int> set2;
    set2.insert(ivec.begin(), ivec.end());
    for (auto &i : set2){
        cout << i <<" ";
    }
    cout << endl;

    set2.insert({1, 3, 5, 7, 1, 3, 5, 7});
    for (auto &i : set2){
        cout << i <<" ";
    }
    cout << endl;
    return 0;
}