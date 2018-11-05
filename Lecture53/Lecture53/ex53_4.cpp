#include <iostream>

using namespace std;

int n;
void set() {
	n = 10;
}

namespace doodle {
	void set();

	namespace google {
		void set();
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
	// 10 20 30
	// 식별자 검색
}

void doodle::set() {
	n = 20;
}

void doodle::google::set() {
	n = 30;
}