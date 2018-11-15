#include <iostream>

using namespace std;

class Account {
public:
	Account() : money(0) {		}
	Account(int money) : money(money) {	}
	
	void Deposit(int d) {
		money += d;
		cout << d << "원을 예금했다!!" << endl;
	}
	void Draw(int d) {
		if (money >= d) {
			money -= d;
			cout << d << "원을 인출했다!!" << endl;
		}
	}

	int ViewMoney() {
		return money;
	}
private:
	int money;
};

int main() {
	Account doodle(100);

	doodle.Deposit(100);
	doodle.Draw(20);

	cout << doodle.ViewMoney() << endl;
}