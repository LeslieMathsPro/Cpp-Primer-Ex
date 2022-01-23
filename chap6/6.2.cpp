#include "head.h"

void print(const int ia[10])
{
    for (size_t i = 0; i != 10; ++i)
        cout << ia[i] << endl;
}

int main(){
    int v[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    print(v);
    return 0;
}