#include <stdio.h>

int main() {
	char ch;
	
	ch = getchar(); // 매개변수가 필요 없음
	putchar(ch);

	char str[100];

	gets_s(str); // call by reference
	puts(str);

	scanf("%s", &str);
	printf("%s", str);
}