#include <iostream>

using namespace std;

int main() {
	// r-value : ���� �� �� �ִ� ��, l-value : ���� �� �� ���� ��
	int a(5);
	int &r1 = a;
	// int &r2 = 3; // ��� 3�� ����� ������ �ƴϹǷ� �����Ͱ� ����ų �� ����
	int &&r2 = 3;
	// int &r3 = a * a; // �� ��ü�� �޸𸮿� ����� ���� �ƴϹǷ� �����ͷ� ����ų �� ����
	int &&r3 = a * a;
	/*
	int a(5);
	int &p = a;
	p = 10;

	cout << p << endl;
	cout << a << endl;
	*/
}