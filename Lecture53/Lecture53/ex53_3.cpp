#include <iostream>

using namespace std;

int n;
void set() {
	n = 10;
}

namespace doodle {
	//int n;
	void set() {
		n = 20;
	}
	namespace google {
		//int n;
		void set() {
			n = 30; // 30 0 0 위에서 가장 가까이서 선언된 n에 대해 n 값 set
		}
		int n;
	}
	int n; 
}

int main() {
	::set();
	doodle::set();
	doodle::google::set();

	cout << ::n << endl;
	cout << doodle::n << endl;
	cout << doodle::google::n << endl;
}