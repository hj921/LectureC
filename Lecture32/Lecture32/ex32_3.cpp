#include <stdio.h>

int itemCnt = 0;
int money = 100;

int result; // 구매 성공시 : 0, 실패 : -1

void buyItem(int cost, int cnt) {
	if (money >= cost) {
		itemCnt += cnt;
		money -= cost;
		printf("아이템을 구매했습니다.\n");
		printf("  아이템 개수: %d\n", itemCnt);
		printf("  잔액: %d\n", money);
		result = 0;
		return;
	}
	else {
		printf("잔액이 부족합니다.\n");
		result = -1;
		return;
	}
	
}

int main() {
	buyItem(3000, 5);

	if (result == -1) {
		printf("돈이 부족하시군요...\n");
	}
	
	buyItem(50, 7);
}