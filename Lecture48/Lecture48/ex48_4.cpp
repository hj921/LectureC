// exit(0);

#include <stdio.h>
#include <stdlib.h>
// 다섯 개의 자연수를 받아서 합을 구하는 함수. 
// 다른 형일 경우 잘못입력하였습니다 ~ 프로그램 종료

int main() {
	int sum = 0;

	for (int i = 0; i < 5; i++) {
		int n;

		scanf("%d", &n);

		if (n <= 0) {
			printf("INPUT ERROR\n");
			exit(0);
		}
		
		sum += n;
	}

	printf("%d\n", sum);
}