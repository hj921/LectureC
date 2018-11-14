#include <iostream>

using namespace std;

class Color {
public:

	Color() : r(0), g(0), b(0), id(idCounter++) {
		/*
		id = idCounter;
		idCounter++;
		*/
	}
	Color(float r, float g, float b) : r(r), g(g), b(b), id(idCounter++) {	}

	float GetR() { return r; }
	float GetG() { return g; }
	float GetB() { return b; }

	int GetId() { return id; }

	static Color MixColors(Color a, Color b) {
		return Color((a.r + b.r) / 2, (a.g + b.g) / 2, (a.b + b.b) / 2);
	}

	// static int idCounter = 1; // 정적으로 선언 된 것은 클래스 안에서 초기값을 줄 수 없음.
	static int idCounter;

private:
	float r;
	float g;
	float b;

	int id;
};

int Color::idCounter = 1; // 선언과 정의 분리 형태

int main() {
	Color blue(0, 0, 1);
	Color red(1, 0, 0);

	Color purple = Color::MixColors(blue, red);

	cout << "r = " << purple.GetR() << ", g = " << purple.GetG() << ", b = " << purple.GetB() << endl;

	cout << "red.GetId() = " << red.GetId() << endl;
	cout << "blue.GetId() = " << blue.GetId() << endl;
	cout << "purple.GetId() = " << purple.GetId() << endl;
}