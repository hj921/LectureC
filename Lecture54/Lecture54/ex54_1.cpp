#include <iostream>

using namespace std;

//struct TV {
//private:
class TV {
	bool powerOn;
	int channel;
	int volume;

public:
	void on() {
		powerOn = true;
		cout << "TV�� �׽��ϴ�." << endl;
	}

	void off() {
		powerOn = false;
		cout << "TV�� �����ϴ�." << endl;
	}

	void setChannel(int cnl) {
		if (cnl >= 1 && cnl <= 999) {
			channel = cnl;
			cout << "ä���� " << cnl << "(��)�� �ٲ���ϴ�." << endl;
		}
	}
	void setVolume(int vol) {
		if (vol >= 0 && vol <= 100) {
			volume = vol;
			cout << "ä���� " << vol << "(��)�� �ٲ���ϴ�." << endl;
		}
	}
};

int main() {
	TV lg;
	/* private���� ���� �Ұ�
	lg.powerOn = true;
	lg.channel = 10;
	lg.setVolume = 400;
	*/
	lg.on();
	lg.setChannel(10);
	lg.setVolume(50);
	lg.setVolume(-73); // ���� ��ȭ ����
}