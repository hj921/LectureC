#include <stdio.h>

// 매크로
#define PI 3.14159 
// 3.14159fh 정의 됨 -> 주솟값을 가져올 수 없음.(주소값 존재 x)
// 값 변경도 불가

int main() {
	float a = PI;

	printf("π = %.2f\n", PI);
	//printf("&PI = %df\n", &PI);
}