#include "head.h"

int main(){
    unique_ptr<string> p3(new string("Trex"));
    unique_ptr<string> p2;
    p2.reset(p3.release());

    cout << p3 << endl;
    cout << *p2 << endl;
}