#include <stdio.h>

#define SQUARE(X) X * X

int main() {
	int a;
	scanf("%d", &a);
	printf("%d\n", SQUARE(a));
	printf("%d\n", 100 / SQUARE(a)); // 100 <- 100 / 5 * 5 연산을 함.
	//printf("%d\n", 100 / (SQUARE(a)));
	// #define SQUARE(X) (X * X) 일경우 아래 형태 정상작동
	printf("%d\n", 100 / SQUARE(a)); 

	printf("%d\n", SQUARE(a - 1)); // #define SQUARE(X) ((X) * (X)) 일 때 정상 작동.
}
/*
int square(int a) {
	return a * a;
}
int main() {
	int a;
	scanf("%d", &a);
	printf("%d\n", square(a));
}
*/