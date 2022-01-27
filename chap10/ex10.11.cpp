#include "head.h"
void elimDups(vector<string> &words){
    //按字典序排序words, 以便查找重复单词
    sort(words.begin(), words.end());
    //unique重排输入范围，使得每个单词只出现一次
    //排列在范围的前部，返回指向不重复区域之后一个位置的迭代器
    auto end_unique = unique(words.begin(),words.end());
    //使用向量操作erase删除重复单词
}

bool isShorter(const string &s1, const string &s2){
    return s1.size() < s2.size();
}

int main(){
    vector<string> words = {"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
    elimDups(words);
    stable_sort(words.begin(), words.end(), isShorter);
    for (const auto &s : words) //无需拷贝字符串
        cout << s << " ";
    cout << endl;
}