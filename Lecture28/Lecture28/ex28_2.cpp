#include <stdio.h>

int main() {
	//char str[] = "Hello";
	//printf("%s\n", &str[0]); // 0��° ĭ�� ������(�ּ�)�� �˷��ָ� Null���ڰ� ���� ������ ���ڿ��� ������ִ� ��� = %s

	char strings[3][10] = { "Hello", "World", "Doodle" };

	for (int i = 0; i < 3; i++) {
		//printf("%s\n", &strings[i][0]);
		printf("%s\n", strings[i]);
	}
}