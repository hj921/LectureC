#include <stdio.h>

#define SQUARE(X) X * X

int main() {
	int a;
	scanf("%d", &a);
	printf("%d\n", SQUARE(a));
	printf("%d\n", 100 / SQUARE(a)); // 100 <- 100 / 5 * 5 ������ ��.
	//printf("%d\n", 100 / (SQUARE(a)));
	// #define SQUARE(X) (X * X) �ϰ�� �Ʒ� ���� �����۵�
	printf("%d\n", 100 / SQUARE(a)); 

	printf("%d\n", SQUARE(a - 1)); // #define SQUARE(X) ((X) * (X)) �� �� ���� �۵�.
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