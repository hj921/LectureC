#include <iostream>

using namespace std;

int main() {
	// 변수 초기화(C++스타일)
	int a(10);
	int b(a);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	// C언어 스타일 변수 초기화(method1과 2는 약간의 차이가 존재)
	// method1
	// int a = 10;
	// method2
	/*
	int a;
	a = 10
	*/

}