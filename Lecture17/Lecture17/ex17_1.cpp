#include <stdio.h>

int main() {
	int i;
	scanf("%d", &i);

	for (; true; i++) { // true생략해도 true로 인식됨. for(; ; i++) == for(; true; i++)
		printf("%d", i);
	}
}