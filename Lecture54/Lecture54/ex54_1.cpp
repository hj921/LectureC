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
		cout << "TV를 켰습니다." << endl;
	}

	void off() {
		powerOn = false;
		cout << "TV를 껐습니다." << endl;
	}

	void setChannel(int cnl) {
		if (cnl >= 1 && cnl <= 999) {
			channel = cnl;
			cout << "채널을 " << cnl << "(으)로 바꿨습니다." << endl;
		}
	}
	void setVolume(int vol) {
		if (vol >= 0 && vol <= 100) {
			volume = vol;
			cout << "채널을 " << vol << "(으)로 바꿨습니다." << endl;
		}
	}
};

int main() {
	TV lg;
	/* private으로 접근 불가
	lg.powerOn = true;
	lg.channel = 10;
	lg.setVolume = 400;
	*/
	lg.on();
	lg.setChannel(10);
	lg.setVolume(50);
	lg.setVolume(-73); // 볼륨 변화 없음
}