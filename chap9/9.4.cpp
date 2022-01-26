#include "head.h"
int main(){
vector<int> ivec;
    //size应该为, capacity的值依赖具体实现
cout << " ivec: size " << ivec.size()
     << " capacity: "  << ivec.capacity() << endl;
//向ivec添加24个元素
for (vector<int>::size_type ix = 0; ix != 24; ++ix)
    ivec.push_back(ix);
//size应该为24; capacity应该大于等于24,具体值依赖于标准库的实现
cout << "ivec: size" << ivec.size()
     << ": capacity" << ivec.capacity() << endl;

ivec.reserve(50); //将capacity至少设定为50，可能会更大
//size应该是24; capacity应该大于等于50, 具体值依赖于标准库的实现
cout << " ivec: size " << ivec.size()
     << " capacity: "  << ivec.capacity() << endl;

//添加元素用光多余容量
while (ivec.size() != ivec.capacity())
    ivec.push_back(0);
cout << " ivec: size " << ivec.size()
     << " capacity: "  << ivec.capacity() << endl;
//实际上，只要没有操作需求超出vector的容量，vector就不能重新分配内存容量。

ivec.push_back(42);
cout << " ivec: size " << ivec.size()
     << " capacity: "  << ivec.capacity() << endl;

ivec.shrink_to_fit();
cout << " ivec: size " << ivec.size()
     << " capacity: "  << ivec.capacity() << endl;
}