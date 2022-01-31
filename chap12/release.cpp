#include "head.h"

// int main(){
//     unique_ptr<string> p1(new string ("Stegosaurus"));
//     unique_ptr<string> p2(p1.release());

//     cout << *p1 << endl;
//     cout << *p2 << endl;
//     return 0;
// }

int main(){
    unique_ptr<int> p1(new int (12));
    unique_ptr<int> p2(p1.release());

    cout << p1 << endl;
    cout << *p2 << endl;
    return 0;
}