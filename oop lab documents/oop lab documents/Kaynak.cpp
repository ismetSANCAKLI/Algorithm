#include <iostream >
using namespace std;
class base {
public:
	int i;
	base(int x) { i = x; }
	virtual void func() { cout << "Using base version of func(): " << i << endl; }
};

class derived1 : public base {
public:
	derived1(int x) : base(x) {}
	void func() { cout << "Using derived1 version of func(): " << i * i << endl; }
};

class derived2 : public base {
public:
	derived2(int x) : base(x) {}
	void func() { cout << "Using derived2 version of func(): " << i + i << endl; }
};

int main() {
	base *p;
	base ob(10);
	derived1 d_ob1(10);
	derived2 d_ob2(10);
	p = &ob; p->func(); // use base�s func()
	p = &d_ob1; p->func(); // use derived1�s func()
	p = &d_ob2; p->func(); // use derived2�s func()
	system("pause");
	return 0;
}