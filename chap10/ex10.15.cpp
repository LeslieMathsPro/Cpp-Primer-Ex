#include "head.h"

int main(){
    int a;
    int b = 1;
    cout << "Please input one value: " << endl;
    cin >> a;
    auto f = [b](const int& a){return a + b;};
    cout << f(a) << endl;
    return 0;
}