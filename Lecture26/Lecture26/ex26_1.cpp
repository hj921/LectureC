#include <stdio.h>

int main() {
	int arr[3] = { 1, 2, 3 };
	int *ptr = arr;

	for (int i = 0; i < 3; i++) {
		printf("%d ", *(ptr + i));
	}
	printf("\n");

	for (int i = 0; i < 3; i++) {
		printf("%d ", ptr[i]);
	}
	printf("\n");

	for (int i = 0; i < 3; i++) {
		printf("%d ", i[ptr]);
	}
	printf("\n");
}