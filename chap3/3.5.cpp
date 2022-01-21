//数组是一种类似于标准库类型vector的数据结构，但是在性能和灵活性的权衡上又与vector有所不同。
//与vector不同的是，数组的大小确定不变，不能随意向数组中添加元素。
//如果不确定元素的个数，请使用vector。

//数组的声明
unsigned cnt = 42;
constexpr unsigned sz = 42;
int arr[10]; //含有10个整数的数组
int *parr[sz]; //含有42个整型指针的数组
string bad[cnt]; //错误：cnt不是常量表达式
string strs[get_size()]; //当get_size是constexpr时正确，否则错误

//显式初始化数组元素
const unsigned sz = 3; 
int ial[sz] = {0, 1, 2}; //含有三个元素的数组，元素值分别为1，2，3
int a2[] = {0, 1, 2}; //维度是3的数组
int a3[5] = {0, 1, 2}; //等价于a3[] = {0, 1, 2, 0, 0}
string a4[3] = {"hi", "bye"}; //等价于a4[] = {"hi", "bye", ""}

//
int *ptrs[10]; //ptrs是含有10个整型指针的数组
int (*Parray)[10] = &arr; //Parray指向一个含有10个整数的数组
int (&arrRef)[10] = arr; //arrRef引用一个含有10个整数的数组 