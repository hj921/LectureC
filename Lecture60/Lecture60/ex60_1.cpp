#include <iostream>

using namespace std;

class Account {
public:
	Account() : money(0) {		}
	Account(int money) : money(money) {	}
	
	void Deposit(const int d) {
		// d = money; // 버그 생성
		money += d;
		cout << d << "원을 예금했다!!" << endl;
	}
	void Draw(const int d) {
		if (money >= d) {
			money -= d;
			cout << d << "원을 인출했다!!" << endl;
		}
	}

	int ViewMoney() const {
		// money++; // 실수(버그) 생성, 이러한 실수 방지 -> 메서드 상수화
		return money;
	}
	/* // ViewMoney의 리턴 값이 상수라는 의미. 상수형 메서드를 만드는 것은 아님
	const int ViewMoney() {
		return money;
	}
	*/
private:
	int money;
};

int main() {
	Account doodle(100);

	doodle.Deposit(100);
	doodle.Draw(20);

	cout << doodle.ViewMoney() << endl;
}