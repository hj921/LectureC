#include <stdio.h>

int main() {
	int arr[3][3] = { 0 };

	printf("%d\n", &arr[0][0]);
	
	// arr[0] = 1st row 하나의 배열 의미 -> 배열의 첫번째 요소값(int 한 칸)을 가르키는 주소값 == arr[0]
	printf("%d\n", arr[0] + 1); // +4 주소값
	printf("%d\n", &arr[0] + 1); // +12 주소값
	// &arr[0] == arr -> 2차원 배열 전체. 2차원 배열의 첫번째 요소 1st row를 가르키는 포인터(주소값)
	printf("%d\n", arr + 1); // +12(&arr[0] + 1)과 동일한 의미.
	printf("%d\n", &arr + 1); // +36 전체 arr 자체를 가르키는 포인터(&arr) 
}