// 2. ��ĭ�� �� �ڵ��?

#include <stdio.h>

struct Point {
	int x, y;
};

void pSwap(Point *p) {
	// x��ǥ�� y��ǥ�� ��ȯ
	int tmp = p->x;
	p->x = p->y;
	p->y = tmp;
}
int main() {
	Point pos = { 3, 4 };

	pSwap(&pos);

	printf("(%d, %d)\n", pos.x, pos.y);
}