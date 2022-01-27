#include "head.h"

int main(){
    //统计输入中每个单词出现的次数
    map<string, size_t> word_count;
    set<string> exclude = {"The", "But", "And", "Or", "An", "A", 
                            "the", "but", "and", "or", "an", "a"};
    string word;
    while (cin >> word){
        //只统计不在exclude中的单词
        if (exclude.find(word) == exclude.end()){
            ++word_count[word];
        }
    }
    for (const auto &w:word_count){
        cout << w.first << " shows " << w.second << ((w.second > 1) ? " times " : " time") << endl;
    }
}