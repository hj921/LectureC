// return : �����ִ�, ��ȯ

#include <stdio.h>
/*
int main() {
	int a;
	a = printf("aaa\n");

	printf("%d\n", a);
}
*/

// 2���� �Ű�����(����)�� ���� ��ȯ

int plus(int a, int b) {
	return a + b;
}

int main() {
	int sum = plus(3, 5);
	printf("%d\n", sum);
}
