#include <stdio.h>

struct ProductInfo {
	int num; // 4Byte
	char name[100]; // 100B
	int cost; // 4B
};

int main() {
	ProductInfo myProduct = {479783, "���� �Ѷ��", 19900}; // �ʱ�ȭ

	/*
	printf("��ǰ ��ȣ : %d\n", myProduct.num);
	printf("��ǰ �̸� : %s\n", myProduct.name);
	printf("��     �� : %d\n", myProduct.cost);

	printf("sizeof(myProduct = %d\n", sizeof(myProduct));
	*/
	printf("��ǰ ��ȣ : %d\n", &myProduct.num);
	printf("��ǰ �̸� : %d\n", myProduct.name);
	printf("��     �� : %d\n", &myProduct.cost);

	printf("%d\n", &myProduct);
}