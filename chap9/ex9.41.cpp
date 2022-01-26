#include "head.h"

// int main()
// {
//     char vec[] = {'a', 'b', 'c'};
//     string s(vec, 3);
//     cout << s << endl;
//     return 0;
// }

int main()
{
    vector<char> vec{'a', 'b', 'c'};
    string s(vec.cbegin(), vec.cend());
    cout << s << endl;
    return 0;
}