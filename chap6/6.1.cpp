#include "head.h"

size_t count_calls()
{
    static size_t ctr = 0; //调用结束后，这个值依然有效
    return ++ctr;
}

int main(){
    for (size_t i = 0; i != 10; ++i)
        cout << count_calls() << endl;
    return 0;
}