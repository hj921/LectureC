// 상수 : 변하지 않는 수
// 변수 : 변할 수 있는 수
// const, 매크로, enum

#include <stdio.h>

int main() {
	/*
	float pi = 3.14159;

	float a = pi;
	float b = pi *= 2;

	printf("π = %.2f\n", pi);
	*/

	const float PI = 3.14159; // 상수는 대문자로 주로 쓴다.
	float a = PI;
	// float b = PI *= 2;  // 불가능

	printf("π = %.2f\n", PI);
	printf("&PI = %df\n", &PI);
}