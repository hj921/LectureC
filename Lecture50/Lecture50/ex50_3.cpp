#include <iostream>

using namespace std;

int main() {
	// r-value : 수정 할 수 있는 값, l-value : 수정 할 수 없는 값
	int a(5);
	int &r1 = a;
	// int &r2 = 3; // 상수 3이 저장된 변수가 아니므로 포인터가 가리킬 수 없음
	int &&r2 = 3;
	// int &r3 = a * a; // 식 자체는 메모리에 저장된 것이 아니므로 포인터로 가리킬 수 없음
	int &&r3 = a * a;
	/*
	int a(5);
	int &p = a;
	p = 10;

	cout << p << endl;
	cout << a << endl;
	*/
}