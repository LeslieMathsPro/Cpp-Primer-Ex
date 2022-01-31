#include "head.h"

int main()
{
    int ix = 1024, *pi = &ix, *pi2 = new int(2048);

    typedef unique_ptr<int> IntP;
    //IntP p0(ix); // X
    //IntP p1(pi); //X
    IntP p2(pi2);
    //IntP p3(&ix);
    //IntP p4(new int(2048));
    IntP p5(p2.get());

    cout << p5 << endl;
    cout << *p5 << endl;
}