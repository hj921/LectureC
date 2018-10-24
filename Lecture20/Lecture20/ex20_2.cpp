#include <stdio.h>

int main() {
	// array
	/*
	int arr[5] = { 3, 1, 4, 1, 5 };
	for (int i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	*/
	int arr[] = { 3, 1, 4, 1, 5, 9, 2, 6, 5, 3 };
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

}