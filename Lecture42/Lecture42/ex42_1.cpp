#include <stdio.h>

struct Time {
	int h, m, s;
};

int totalSec(Time t) { // 멤버함수(멤버 메서드)
	return 3600 * t.h + 60 * t.m + t.s;
}
int main() {
	Time t = { 1, 22, 48 };

	// 1시간 = 60분 = 3600초
	// 1분 = 60초

	// 1 * 3600 + 22 * 60 + 48
	printf("%d\n", totalSec(t));
}