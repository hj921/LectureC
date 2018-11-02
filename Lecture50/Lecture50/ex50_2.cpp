// 범위 기반 for 문

#include <iostream>

using namespace std;

int main() {
	int arr[10] = { 3, 1, 4, 1, 5, 9, 2, 6, 5 ,3 };

	for (int n : arr) {
		cout << n << '  ';
		n++; // 출력 값에 변화 x
	}
	cout << endl;

	for (int n : arr) {
		cout << n << '  ';
	}
	cout << endl;

	for (int &n : arr) {
		cout << n << '  ';
		n++; // 출력 값에 변화 x n값을 변화 시킨다고 해서 메모리상 arr 자체의 값이 변하지는 않음. (call by reference 필요)
	}

	/*
	for (int i = 0; i < 10; i++) {
		cout << n << endl;
	}
	*/
}