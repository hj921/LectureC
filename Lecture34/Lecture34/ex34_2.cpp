// prototype : ����, ����ǰ

#include <stdio.h>

// �κ��� ���
// 1. �ȱ�
// prototype�� �Ű������� ���� type�� ������൵ ����.
//void walk(int);
void walk(int distance);
// 2. ����
void rotate(int angle);
// ���簢�� �׸��� ���� (���� -> 90�� ���� ȸ�� -> ���� -> 90�� -> ���� -> 90�� -> ����)
void drawSquare();
int main() {
	drawSquare();
}

// �κ��� ���
// 1. �ȱ�

void walk(int distance) {
	printf("%dcm�� �ɾ����ϴ�.\n", distance);
}
// 2. ����
void rotate(int angle) {
	printf("%d�� ȸ���߽��ϴ�.\n", angle);
}
// ���簢�� �׸��� ���� (���� -> 90�� ���� ȸ�� -> ���� -> 90�� -> ���� -> 90�� -> ����)
void drawSquare() {
	for (int i = 1; i <= 4; i++) {
		walk(10);
		rotate(90);
	}
}
