#include <stdio.h>
// char: 1����Ʈ ������
// character: ���� (�ݰ�����  Halfwidth, ABCabc1234_+\;/#%) | �������� (Fullwidth, �ѱ�, ����, �Ϻ���, ���þƾ� ��)x

int main() {
	char a = 67;

	printf("%d\n", a);
	printf("%c\n", a);
	printf("%d\n", 'C'); // 'C' == 67

	// ASCII : American Standard(����-����)
}