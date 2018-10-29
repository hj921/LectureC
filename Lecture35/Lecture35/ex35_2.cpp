// 팩토리얼
// 5! = 5*4*3*2*1 = 120(for문 이용 방법도 생각해보기)
// n! = n * (n-1)!

#include <stdio.h>
// n을 매개변수 -> n!을 return 함수(factorial)s
int factorial(int n) {
	if (n == 1) return 1;
	return n * factorial(n - 1);
}

int main() {
	printf("%d\n", factorial(5));
}
