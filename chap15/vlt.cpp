#include "pch.h"
#include <iostream>
using namespace std;
class A {
	int a;
public:
	void set_a(int x) { a = x; }
	void put_a() { cout << a; }
};
class B :public A {
	int b;
public:
	void set_b(int x) { b = x; }
	void put_b() { cout << b; }
};
int main()
{
	A objA, *pA;
	B objB;
	pA = &objB;
	pA->set_a(10);
	pA->set_b(2);//虽然pA指向B，但是pA无法访问B；唯一例外的情况就是虚函数
}