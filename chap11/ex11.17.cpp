#include "head.h"

int main(){
    multiset<string> c = {"Test"};
    vector<string> v = {"Hello2", "Hello", "Hello1"};

    //copy(v.begin(), v.end(), inserter(c, c.end()));
    //copy(v.begin(), v.end(), back_inserter(c));
    //copy(c.begin(), c.end(), inserter(v, v.end()));
    copy(c.begin(), c.end(), back_inserter(v));
    for (const string & s : v){
        cout << s << " ";
    }
    cout << endl;
    return 0;
}