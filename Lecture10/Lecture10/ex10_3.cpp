// ++ --

#include <stdio.h>

int main() {
	/*
	int a = 10;
	printf("���� a�� %d����...\n", a);

	a++; // a = a + 1; a += 1;
	printf("1 �����ؼ� %d�� �ƴ�...\n", a);
	a--;// a = a - 1; a -= 1;
	printf("1 �����ؼ� %d�� �ƴ�...\n", a);
	*/

	// ��ġ�� ��ġ
	int a = 10;
	int b;

	/*
	printf("=== ��ġ ���� ���� ===\n");
	b = ++a;
	//a++; // ���� ���
	//b = a;
	printf("a: %d\n", a);
	printf("b : %d\n", b);
	*/
	printf("=== ��ġ ���� ���� ===\n");
	//b = a++; // a = 11, b = 10���
	b = a;
	a++;
	
	printf("a: %d\n", a);
	printf("b : %d\n", b);
}