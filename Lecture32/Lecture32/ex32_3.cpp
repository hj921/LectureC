#include <stdio.h>

int itemCnt = 0;
int money = 100;

int result; // ���� ������ : 0, ���� : -1

void buyItem(int cost, int cnt) {
	if (money >= cost) {
		itemCnt += cnt;
		money -= cost;
		printf("�������� �����߽��ϴ�.\n");
		printf("  ������ ����: %d\n", itemCnt);
		printf("  �ܾ�: %d\n", money);
		result = 0;
		return;
	}
	else {
		printf("�ܾ��� �����մϴ�.\n");
		result = -1;
		return;
	}
	
}

int main() {
	buyItem(3000, 5);

	if (result == -1) {
		printf("���� �����Ͻñ���...\n");
	}
	
	buyItem(50, 7);
}