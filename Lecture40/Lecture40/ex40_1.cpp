#include <stdio.h>

struct ProductInfo {
	int num; // 4Byte
	char name[100]; // 100B
	int cost; // 4B
};

int main() {
	ProductInfo myProduct = {479783, "제주 한라봉", 19900}; // 초기화

	/*
	printf("상품 번호 : %d\n", myProduct.num);
	printf("상품 이름 : %s\n", myProduct.name);
	printf("가     격 : %d\n", myProduct.cost);

	printf("sizeof(myProduct = %d\n", sizeof(myProduct));
	*/
	printf("상품 번호 : %d\n", &myProduct.num);
	printf("상품 이름 : %d\n", myProduct.name);
	printf("가     격 : %d\n", &myProduct.cost);

	printf("%d\n", &myProduct);
}