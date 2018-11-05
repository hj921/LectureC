#include <iostream>

using namespace std;

int n;
void set() {
	//::n = 10; // 명시적 전역 변수
	n = 10;
}

namespace doodle {
	int n;
	void set() {
		//doodle::n = 20;
		n = 20;
	}
}

namespace google {
	int n;
	void set() {
		//google::n = 30;
		n = 30;
		//::n = 30; 
		//doodle::n = 30;
	}
}

int main() {
	::set();
	doodle::set();
	google::set();

	cout << ::n << endl;
	cout << doodle::n << endl;
	cout << google::n << endl;
}