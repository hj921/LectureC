// ++ --

#include <stdio.h>

int main() {
	/*
	int a = 10;
	printf("원래 a는 %d였다...\n", a);

	a++; // a = a + 1; a += 1;
	printf("1 증가해서 %d가 됐다...\n", a);
	a--;// a = a - 1; a -= 1;
	printf("1 감소해서 %d가 됐다...\n", a);
	*/

	// 전치와 후치
	int a = 10;
	int b;

	/*
	printf("=== 전치 증가 연산 ===\n");
	b = ++a;
	//a++; // 권장 방법
	//b = a;
	printf("a: %d\n", a);
	printf("b : %d\n", b);
	*/
	printf("=== 후치 증가 연산 ===\n");
	//b = a++; // a = 11, b = 10결과
	b = a;
	a++;
	
	printf("a: %d\n", a);
	printf("b : %d\n", b);
}