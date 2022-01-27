#include "head.h"

bool check_size(const string &s, string::size_type sz)
{
    return s.size() <= sz;
}

int main(){
    vector<string> svect = { "the", "quick", "According", "jumps", "over", "the", "slow", "red", "turtle","environment" };
    auto smaller6 = bind(check_size, _1, 6);
    auto cnt = count_if(svect.begin(), svect.end(), smaller6);
    cout << "长度小于等于6的单词数量为：" << cnt << endl;
    return 0;
}