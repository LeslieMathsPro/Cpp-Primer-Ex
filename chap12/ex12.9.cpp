#include "head.h"

int main(){
    //int *q = new int(42), *r = new int(100);
    //r = q; 
    //cout << *r << " " << *q;

    auto q2 = make_shared<int>(42), r2 = make_shared<int>(100);
    r2 = q2;
    cout << *r2 << " " << *q2 << endl;
    return 0;
}