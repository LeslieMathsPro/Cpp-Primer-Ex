#include "head.h"

bool findNum(vector<int>::iterator p, vector<int>::iterator q, int n)
{
    while (p != q) 
    {
        if (*p == n) {
            return true;
        }
        else {
            p++;
        }
    }
}

int main() 
{
    cout << "Enter the looking number:" << endl;
    int n;
    cin >> n;
    vector<int> a(10);
    for (int i = 0; i < 10; i++)
    {
        a.push_back(i);
    }
    vector<int>::iterator iter1 = a.begin();
    vector<int>::iterator iter2 = a.end();
    bool x;
    x = findNum(iter1, iter2, n);
    cout << x << endl;

    return 0;
}