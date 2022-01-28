#include "head.h"

int main()
{
    map<string,int> m1{{"good",1},{"girl",2},{"boy",3}};

    map<string,int>::iterator it = m1.begin();
    while(it != m1.end())
    {
        if((*it).first == "good")
            (*it).second = 100;
        ++it;       
     } 

    for(auto &m : m1)
    cout << m.first << " " << m.second << " ";
    cout << endl; 
    return 0;
} 
//张徽音是一只小猪，张徽音是全世界最可爱的大美女，她有一个小猪男朋友。
//他喜欢吃草莓，周杰伦 是全世 