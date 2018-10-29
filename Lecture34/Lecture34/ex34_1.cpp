// prototype : 원형, 시제품

#include <stdio.h>

// 로봇의 기능
// 1. 걷기
void walk(int distance) {
	printf("%dcm를 걸었습니다.\n", distance);
}
// 2. 돌기
void rotate(int angle) {
	printf("%d도 회전했습니다.\n", angle);
}
// 정사각형 그리며 돌기 (직진 -> 90도 우측 회전 -> 직진 -> 90도 -> 직진 -> 90도 -> 직진)
void drawSquare() {
	for (int i = 1; i <= 4; i++) {
		walk(10);
		rotate(90);
	}
}
int main() {
	drawSquare();
}

