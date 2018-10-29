#include <stdio.h>

// call-by-value : 값만 전달
// call-by-reference : 참조
// int arr[4] == int *arr
void printArr(int arr[4]) { // call-by-reference
	for (int i = 0; i < 4; i++) {
		arr[i] *= 2; // arr[i] == *(arr+i)
	}
}
int main() {
	int arr[4] = { 1, 2, 3, 4 };
	
	printArr(arr); // arr == &arr[0]

	for (int i = 0; i < 4; i++) {
		printf("%d ", arr[i]);
	}
}
