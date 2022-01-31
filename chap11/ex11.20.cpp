#include "head.h"

// int main(){
//     map<string, size_t> word_count;
//     string word;
//     while (cin >> word)
//         ++word_count[word];

//     for (const auto &w : word_count){
//         cout << w.first << " occurs " << w.second
//              << ((w.second > 1) ? " times" : " time") << endl;
//     }
// }

int main(){
    map<string, size_t> word_count;
    string word;
    while (cin >> word){
        auto ret = word_count.insert({word, 1});
        if (!ret.second) {
            ++ret.first->second;
        }
    }
    for (const auto &w : word_count){
         cout << w.first << " occurs " << w.second
              << ((w.second > 1) ? " times" : " time") << endl;
   }
    return 0;
}