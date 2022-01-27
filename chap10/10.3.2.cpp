#include "head.h"

void biggies(vector<string> &words, vector<string>::size_type sz)
{
    elimDups(words); //将words按字典序排序，删除重复单词
    //按长度排序，长度相同的单词维持字典序
    stable_sort(words.begin(), words.end(),
                [](const string &a, const string &b)
                    {return a.size() < b.size();});

    //获取一个迭代器，指向第一个满足size() >= sz的元素
    auto wc = find_if(words.begin(), words.end(), [sz](const string &a)
                                                    {return a.size() >= sz; });
    
    //计算满足size>=sz的元素的数目
    auto count = words.end() - wc;
    cout << count << " " << make_
}

int main(){
    vector<string> words = {"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
    
    return 0;
}