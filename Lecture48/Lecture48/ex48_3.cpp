// 난수
#include <stdlib.h> // standard library
#include <stdio.h>
#include <time.h>

int main() {
	//time(NULL);
	//printf("%d\n", time(NULL));

	//seed
	srand(time(NULL));
	for (int i = 1; i <= 10; i++) {
		printf("%d\n", rand() % 10 + 1); // 1부터 10까지의 random number
	}
}