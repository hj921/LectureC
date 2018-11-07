#include <iostream>

using namespace std;

class MyClass {
public:
	void PrintThis() {
		cout << "나의 주소는 " << this << endl;
	}
};

int main() {
	MyClass a, b;

	cout << "a의 주소는 " << &a << endl;
	cout << "b의 주소는 " << &b << endl;

	a.PrintThis();
	b.PrintThis();
}
// this 포인터를 사용하지 않을 경우
/*
class MyClass {
public:
	void PrintThis(MyClass *ptr) {
		cout << "나의 주소는 " << ptr << endl;
	}
};

int main() {
	MyClass a, b;

	cout << "a의 주소는 " << &a << endl;
	cout << "b의 주소는 " << &b << endl;

	a.PrintThis(&a);
	b.PrintThis(&b);
}
*/