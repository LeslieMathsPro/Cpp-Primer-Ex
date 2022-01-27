#include "head.h"

int main(){
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> vec1, vec2;
    list<int> vec3;
    copy(vec.begin(), vec.end(), inserter(vec1, vec1.begin()));
    copy(vec.begin(), vec.end(), back_inserter(vec2));
    copy(vec.begin(), vec.end(), front_inserter(vec3));

    for (auto &i : vec1)
    {
        cout << i;
    }
    cout << endl;

    for (auto &i : vec2)
    {
        cout << i;
    }
    cout << endl;

    for (auto &i : vec3)
    {
        cout << i;
    }
    cout << endl;
}