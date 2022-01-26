#include "head.h"

int main(){
    list<int> a = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> b(10);
    b.assign(a.begin(), a.end());
    deque<int> d1, d2;

    for (int i = 0; i < 10 ; i++)
    {
        if (b[i] % 2 == 0)
            d2.push_back(b[i]);
        else 
            d1.push_back(b[i]);
    }

    for (int j = 0; j < d2.size(); j++)
    {
        cout << d2[j] << endl;
    }

    return 0;
}