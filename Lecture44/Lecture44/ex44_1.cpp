// ��� : ������ �ʴ� ��
// ���� : ���� �� �ִ� ��
// const, ��ũ��, enum

#include <stdio.h>

int main() {
	/*
	float pi = 3.14159;

	float a = pi;
	float b = pi *= 2;

	printf("�� = %.2f\n", pi);
	*/

	const float PI = 3.14159; // ����� �빮�ڷ� �ַ� ����.
	float a = PI;
	// float b = PI *= 2;  // �Ұ���

	printf("�� = %.2f\n", PI);
	printf("&PI = %df\n", &PI);
}