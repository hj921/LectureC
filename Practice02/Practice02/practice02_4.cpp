/*
	n = 4
	1
	1 3
	1 3 5
	1 3 5 7 // 2k -1(È¦¼ö)
*/

#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) { // for (int j = 1; j <= 2*i - 1; j += 2)
			printf("%d ", 2 * j - 1);
		}
		printf("\n");
	}
}