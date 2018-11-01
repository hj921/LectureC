// 시프트(shift) : 옮기다
// << >>

#include <stdio.h>

int main() {
	char a = 22; // 00010110
	// char형 -> -128 ~ 127까지 표현 가능

	// 44
	// 
	printf("%d\n", a << 1);

	// 176
	printf("%d\n", a << 3);

	// 1408
	// 00010110000000 short나 int 같은 더 큰 자료형으로 변환함.
	printf("%d\n", a << 6);

	// 11
	printf("%d\n", a >> 1);

	// 2
	printf("%d\n", a >> 3);

	//0
	// 오른 쪽 shift하는 경우는 무조건 잘림(더 큰 자료형으로 변환 x)
	printf("%d\n", a >> 6);
}