#include <stdio.h>

int main() {
	// 참: 1, 거짓: 0

	// ()안의 결과가 0이 아닌 경우 중괄호 부분을 출력. 0이면 else
	if (0) { // 0 이외의 어떤 값이 있든 *** 출력. 0일 경우 $$$ 출력
		printf("***\n");
	}
	else {
		printf("$$$\n");
	}
}