#include "head.h"

int main()
{
    string temp;
    deque<string> sde;

    while (cin >> temp) {
        sde.push_back(temp);
    }

    for (const auto vec:sde)
    {
        cout << vec << endl;
    }
    
    return 0;
}