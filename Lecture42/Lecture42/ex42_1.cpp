#include <stdio.h>

struct Time {
	int h, m, s;
};

int totalSec(Time t) { // ����Լ�(��� �޼���)
	return 3600 * t.h + 60 * t.m + t.s;
}
int main() {
	Time t = { 1, 22, 48 };

	// 1�ð� = 60�� = 3600��
	// 1�� = 60��

	// 1 * 3600 + 22 * 60 + 48
	printf("%d\n", totalSec(t));
}