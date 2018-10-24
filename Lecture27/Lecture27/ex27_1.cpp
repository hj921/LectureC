#include <stdio.h>

int main() {
	int arr[2][3] = { {1, 2, 3}, {4, 5, 6} };

	printf("%d\n", sizeof(arr)); // 24
	printf("%d\n", sizeof(arr[0])); // 12 
	printf("%d\n", sizeof(arr[0][0])); // 4
}