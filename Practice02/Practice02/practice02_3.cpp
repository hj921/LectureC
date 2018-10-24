// 일의 자릿수가 3, 6, 9 .. 인 경우 *
// 12*45*78*101112 *

#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		int k = i % 10;
		if (k == 3 || k == 6 || k == 9) {
			printf("* ");
		}
		else {
			printf("%d ", i);
		}
	}
	printf("\n");
}