#include <iostream>
#include <vector>
using namespace std;

int main(){
    int temp{};
    vector<int> vec;
    while (cin >> temp){
        vec.push_back(temp);
    }

    for (auto i : vec){
        (i%2) ? i *= 2 : i;
        cout << i << endl;
    }

}