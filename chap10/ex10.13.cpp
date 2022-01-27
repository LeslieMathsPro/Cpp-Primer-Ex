#include "head.h"

bool biggerThan5(const string& s)
{
    return s.size() >= 5;
}

int main(){
    vector<string> words = {"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
    auto end_bigger = partition(words.begin(),words.end(),biggerThan5);
    cout << "words中长度大于等于5的元素为：";
    for (auto iter = words.begin(); iter != end_bigger; ++iter)
    {
        cout << *iter << " ";
    }
    cout << endl;

    return 0;
}