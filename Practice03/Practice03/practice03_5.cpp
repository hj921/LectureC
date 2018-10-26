#include <stdio.h>

int main() {
	int arr[3][3] = { 0 }; // 0으로 채워진 3x3 배열

	printf("%d\n", &arr); // arr[3][3] 전체를 가르키는 포인터
	printf("%d\n", arr); // arr == &arr[0] 1st row 주소값
	printf("%d\n", *arr); // arr자체에 들어있는 값. 1st row 1차원 배열 출력 -> 1st row의 주소값 출력

	printf("%d\n", &arr[0]);
	printf("%d\n", arr[0]);
	printf("%d\n", *arr[0]); // arr[0] -> 1st row의 첫번째 요소값 주소가 가르키는 값

	printf("%d\n", &arr[0][0]);

	printf("%d\n", arr[0][0]); 
}