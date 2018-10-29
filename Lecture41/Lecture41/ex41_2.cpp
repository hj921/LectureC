#include <stdio.h>

struct ProductInfo {
	int num; // 4Byte
	char name[100]; // 100B
	int cost; // 4B
};

void productSwap(ProductInfo *a, ProductInfo *b) {
	ProductInfo tmp = *a;
	*a = *b;
	*b = tmp;
}

int main() {
	ProductInfo myProduct{ 479783, "���� �Ѷ��", 20000 };
	ProductInfo otherProduct{ 4797284, "���� ������", 10000 };

	productSwap(&myProduct, &otherProduct);
	
	printf("��ǰ ��ȣ : %d\n", myProduct.num); // (*ptr_product).num
	printf("��ǰ �̸� : %s\n", myProduct.name);
	printf("��     �� : %d\n", myProduct.cost);


}