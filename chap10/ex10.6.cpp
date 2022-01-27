#include "head.h"

int main(){
    vector<int> vec = {1, 2, 3, 4, 5, 6};
    fill_n(vec.begin(),vec.size(),0);
    for (auto i : vec)
        cout << i << endl;
    cout << endl;
}