#include <stdio.h>

void swap(int &x, int &y) { // C++에서 사용가능한 reference 변수
	int tmp = x;
	x = y;
	y = tmp;
}

int main() {
	int a, b;
	scanf("%d%d", &a, &b);

	swap(a, b);

	printf("a = %d, b = %d\n", a, b);
}