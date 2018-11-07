#include <iostream>

using namespace std;

class MyClass {
public:
	MyClass() { // 생성자
		cout << "생성자가 호출되었다!!" << endl;
	}

	~MyClass() // 소멸자
	{
		cout << "소멸자가 호출되었다!!" << endl;
	}
};

//MyClass globalObj;

void testLocalObj() { // 지역 객체(local object)의 생성과 소멸을 테스트하기 위한 함수
	cout << "testLocalObj함수 시작!!" << endl;
	MyClass localObj;
	cout << "testLocalObj함수 끝!!" << endl;
} // LocalObj 함수를 만나는 순간 생성. 지역 함수가 끝나는 순간 소멸자 호츨
int main() {
	cout << "main함수 시작!!" << endl;
	testLocalObj();
	cout << "main함수 끝!!" << endl;
}