#include <stdio.h>

// ��������
int itemCnt = 0; 
int money = 100;

//int cost; 

void buyItem(int cost, int cnt) {
	//itemCnt++;
	itemCnt += cnt;
	money -= cost;
	printf("�������� �����߽��ϴ�.\n");
	printf(" ������ ����: %d\n", itemCnt);
	printf(" �ܾ� : %d\n", money);
}

int main() {
	//cost = 30;
	int a; // ��������
	buyItem(30, 5);
	//cost = 50;
	buyItem(50, 7);
	/*
	// ������ ����
	itemCnt++;
	money -= 10;
	printf("�������� �����߽��ϴ�.\n");
	printf(" ������ ����: %d\n", itemCnt);
	printf(" �ܾ� : %d\n", money);
	*/

	/* �߷� */
	/*
	// ������ �ι�°����
	itemCnt++;
	money -= 10;
	printf("�������� �����߽��ϴ�.\n");
	printf(" ������ ����: %d\n", itemCnt);
	printf(" �ܾ� : %d\n", money);
	*/
}