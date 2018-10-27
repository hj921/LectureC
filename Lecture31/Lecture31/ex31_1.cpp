#include <stdio.h>

// 전역변수
int itemCnt = 0; 
int money = 100;

//int cost; 

void buyItem(int cost, int cnt) {
	//itemCnt++;
	itemCnt += cnt;
	money -= cost;
	printf("아이템을 구매했습니다.\n");
	printf(" 아이템 개수: %d\n", itemCnt);
	printf(" 잔액 : %d\n", money);
}

int main() {
	//cost = 30;
	int a; // 지역변수
	buyItem(30, 5);
	//cost = 50;
	buyItem(50, 7);
	/*
	// 아이템 구입
	itemCnt++;
	money -= 10;
	printf("아이템을 구매했습니다.\n");
	printf(" 아이템 개수: %d\n", itemCnt);
	printf(" 잔액 : %d\n", money);
	*/

	/* 중략 */
	/*
	// 아이템 두번째구입
	itemCnt++;
	money -= 10;
	printf("아이템을 구매했습니다.\n");
	printf(" 아이템 개수: %d\n", itemCnt);
	printf(" 잔액 : %d\n", money);
	*/
}