#include "head.h"

int main(){
    forward_list<int> flist = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto biter = flist.before_begin();
    auto iter = flist.begin();

    while (iter != flist.end())
    {
        if (*iter % 2)
        {
            iter = flist.insert_after(iter, *iter);
            biter = iter;
            iter++;
        }
        else 
        {
            iter = flist.erase_after(biter);
        }
    }

    for (auto &a :flist)
    {
        cout << a << " ";
    }
    cout << endl;
}