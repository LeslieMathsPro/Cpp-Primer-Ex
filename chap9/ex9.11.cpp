#include "head.h"

vector<int> a = {10};
vector<int> b{a};
vector<int> c(3);
vector<int> d(10, -1);
vector<int> e(d.begin(), d.end());
vector<int> f;//构造一个空容器