#include "head.h"

int main(){
    map<string, list<int>> word_container;
    string word;
    int number;
    while (cin >> word){
        //数字输完之后，以999为标志结束这一层的while循环。
        //不加 number != word, 当输入下一个word时，由于输入流认为输入了不同的类型。因此结束了两层的while循环，结果只能显示第一行的
        while ( cin >> number && number != 9999){
            word_container[word].push_back(number);
        }
    } 

    for (auto &w:word_container){
        cout << w.first << " ";
        for (auto it = w.second.begin(); it != w.second.end(); ++it){
            cout << *it << " ";
        }
        cout << endl;
    }
}