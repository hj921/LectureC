// Â¦¼öÀÇ °¹¼ö ±¸ÇÏ±â

#include <stdio.h>

int main() {
	int n;
	int arr[100];

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", arr[i]);
	}

	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 0) {
			cnt++;
		}
	}
	printf("%d\n", cnt);
}