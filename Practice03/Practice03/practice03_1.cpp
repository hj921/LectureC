/*
	1. 100개 이하의 정수를 입력받아
	첫 줄에 짝수 번째 숫자들을 순선대로 출력하고,
	다음 줄에 홀 수 번째 숫자들을 순서대로 출력하는 프로그램을 만들어 보세요.

입력 예
7
3 1 4 1 5 9 2

출력 예
1 1 9
3 4 5 2
*/

#include <stdio.h>

int main() {
	int n;
	int a[105];

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	for (int i = 1; i < n; i+=2) {
		printf("%d ", a[i]);
	}
	printf("\n");

	for (int i = 0; i < n; i += 2) {
		printf("%d ", a[i]);
	}
	printf("\n");
}

