#include <iostream>

using namespace std;

// 복소수(real, imag) 저장 클래스

class Complex {
public:
	Complex() {
		real = 0;
		real = 0;
	}
	Complex(double real_, double imag_) {
	//Complex(double real_ = 0, double imag_ = 0) {
		real = real_;
		imag = imag_;
	}
	double GetReal() {
		return real;
	}
	void setReal(double real_) {
		real = real_;
	}
	double GetImage() {
		return imag;
	}
	void SetImage(double imag_) {
		imag = imag_;
	}
private:
	double real;
	double imag;
};

int main() {

	//Complex c1 = Complex(); // 매개변수에서 초기화 하고 Complex()함수를 지워야 정상작동
	Complex c1;
	//Complex c2 = Complex(2);
	Complex c2 = Complex(2, 3);
	Complex c3(2, 3); // 위의 c2와 같은 표현
	Complex c4 = { 2, 3 };
	Complex c5 = Complex{ 2, 3 };
	Complex c6{ 2, 3 };

	cout << "c1 = " << c1.GetReal() << ", " << c1.GetImage() << endl;
	cout << "c2 = " << c2.GetReal() << ", " << c2.GetImage() << endl;
	cout << "c3 = " << c2.GetReal() << ", " << c3.GetImage() << endl;
}