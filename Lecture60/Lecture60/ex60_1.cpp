#include <iostream>

using namespace std;

class Account {
public:
	Account() : money(0) {		}
	Account(int money) : money(money) {	}
	
	void Deposit(const int d) {
		// d = money; // ���� ����
		money += d;
		cout << d << "���� �����ߴ�!!" << endl;
	}
	void Draw(const int d) {
		if (money >= d) {
			money -= d;
			cout << d << "���� �����ߴ�!!" << endl;
		}
	}

	int ViewMoney() const {
		// money++; // �Ǽ�(����) ����, �̷��� �Ǽ� ���� -> �޼��� ���ȭ
		return money;
	}
	/* // ViewMoney�� ���� ���� ������ �ǹ�. ����� �޼��带 ����� ���� �ƴ�
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