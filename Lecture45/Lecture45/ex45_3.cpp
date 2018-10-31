#include <stdio.h>

#define MAX(A, B) (((A) > (B)) ? (A) : (B))

//int max(int a, int b) {
//	/*
//	if (a > b) return a;
//	return b;
//	*/
//	return (a > b) ? a : b; // 삼항연산자
//}

int main() {
	int a = 5, b = 10;

	printf("%d\n", MAX(a, b));
}