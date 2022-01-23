#include "head.h"

int MaxValue(const int a, const int* b)
{
    if (a >= *b){
        return a;
    }
    else {
        return *b;
    }
}

int main()
{
    int x = 2;
    int* y = &x;
    cout << MaxValue(1, y) << endl;
    return 1;
}