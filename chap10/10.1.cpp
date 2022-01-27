int val = 42;
auto result = find(vec.cbegin(), vec.cend(), val);

cout << "The value " << val
     << (result == vec.cend() ? "is not present" : "is present") << endl;

//由于find操作的是迭代器，  因此我们可以用同样的find函数在任何容器中查找值。

//类似的，由于指针就像内置数组上的迭代器一样，我们可以用find在数组中查找值：
int ia[] = {27, 210, 12, 47, 109, 83};
int val = 83;
int *result = find(begin(ia), end(ia), val);