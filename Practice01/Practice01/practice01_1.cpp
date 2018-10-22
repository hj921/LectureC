/*
1. 두 숫자를 입력받아서 그 숫자들의 합을 출력하는 프로그램을 만들어 보세요.
*/

#include <stdio.h>

int main() {
	float a, b;
	printf("두 개의 숫자를 구분하여 입력하여 주세요.\n");
	scanf("%f%f", &a, &b);

	printf("%f + %f = %f\n", a, b, a + b);
	//float sum = a + b;
	//printf("%f + %f = %f\n", a, b, sum);
}