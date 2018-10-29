// 3. 실행결과는?
// 5432112345
#include <stdio.h>

void rec(int n) {
	if (n == 0) return;
	printf("%d", n);
	rec(n - 1);
	printf("%d", n);
}

int main() {
	rec(5);
}
