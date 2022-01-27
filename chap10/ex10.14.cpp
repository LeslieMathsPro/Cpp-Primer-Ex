#include "head.h"

int main(){
    int a, b;
    cout << "Input two value: ";
    cin >> a >> b;
    auto f = [](const int& a, const int& b){return a + b;};
    cout << f(a, b) << endl;
    return 0;
}