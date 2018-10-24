#include <stdio.h>

int main() {
	//char str[] = "Hello";
	//printf("%s\n", &str[0]); // 0번째 칸의 포인터(주소)를 알려주면 Null문자가 나올 때까지 문자열을 출력해주는 기능 = %s

	char strings[3][10] = { "Hello", "World", "Doodle" };

	for (int i = 0; i < 3; i++) {
		//printf("%s\n", &strings[i][0]);
		printf("%s\n", strings[i]);
	}
}