#include "head.h"

//定义一个Date类，表示生日，需要说明的是，该date类很简单，没有做类型检查
struct Date{
    int year;
    int month;
    int day;
    Date() = default; //空构造函数
    Date(int y, int m, int d) : year(y), month(m), day(d)
    {
    }
    void print(){
        cout << year << "-" << month << "-" << day << endl;
    }
};

int main(){
    string name;
    string fname;
    int year, month, day;
    pair<string, Date> p; //pair保存孩子的名与生日

    //该类型稍复杂，关键字string类型，用于保存家族姓氏
    //第二个元素是vector中存放pair保存孩子的名和生日向量
    map<string, vector<pair<string, Date>>> family;
    
    //
    while (cin >> fname >> name >> year >> month >> day)
    {
        Date d(year, month, day);
        p = {name, d};
        family[fname].push_back(p);
    }

    for (auto &member : family)
    {
        cout << "Member is:" << " " << endl;
        for (auto it = member.second.begin(); it != member.second.end(); ++it){
            cout << (*it).first << "." << member.first << " " << (*it).second.year << "-" << (*it).second.month << "-" << (*it).second.day << endl; 
        }
        cout << endl;
    }
    return 0;
}