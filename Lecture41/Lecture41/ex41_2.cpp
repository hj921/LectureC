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
	ProductInfo myProduct{ 479783, "제주 한라봉", 20000 };
	ProductInfo otherProduct{ 4797284, "성주 꿀참외", 10000 };

	productSwap(&myProduct, &otherProduct);
	
	printf("상품 번호 : %d\n", myProduct.num); // (*ptr_product).num
	printf("상품 이름 : %s\n", myProduct.name);
	printf("가     격 : %d\n", myProduct.cost);


}