#include "head.h"

int main(){
    string name = "";
    string familyName = "";
    vector<string> vec = {"Tom", "Jerry", "Lucy"};
    map<string, vector<string>> family = {{"Green", vec}, {"White", vec}};
    
    //按照英文名称习惯打印名字，比如Tom.Green
    for (auto &member : family)
    {
        cout << "Member is :" << " " << endl;
        for (auto it = member.second.begin(); it != member.second.end(); ++it){
            cout << *it << "." << member.first << endl;
        }
        cout << endl;
    }

    //先输入family name，然后自己name
    while (cin >> familyName >> name) {
        family[familyName].push_back(name);
    }

    for (auto &member : family)
    {
        cout << "Member is :" << " " << endl;
        for (auto it = member.second.begin(); it != member.second.end(); ++it){
            cout << *it << "." << member.first << endl;
        }
        cout << endl;
    }

    return 0;
}