#include <stdio.h>

int main() {
	char ch;
	
	ch = getchar(); // �Ű������� �ʿ� ����
	putchar(ch);

	char str[100];

	gets_s(str); // call by reference
	puts(str);

	scanf("%s", &str);
	printf("%s", str);
}