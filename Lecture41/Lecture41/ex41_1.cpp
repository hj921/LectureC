#include <stdio.h>

struct ProductInfo {
	int num; // 4Byte
	char name[100]; // 100B
	int cost; // 4B
};

/*
void productSale(ProductInfo p, int percent) { // call-by-value
	p.cost -= p.cost*percent / 100;
}
*/

// call-by-reference
void productSale(ProductInfo *p, int percent) {
	p->cost -= p->cost*percent / 100;
}
int main() {
	ProductInfo myProduct{ 479783, "���� �Ѷ��", 20000 };

	ProductInfo *ptr_product = &myProduct;

	productSale(&myProduct, 10);
	/*
	printf("��ǰ ��ȣ : %d\n", (*ptr_product).num);
	printf("��ǰ �̸� : %s\n", (*ptr_product).name);
	printf("��     �� : %d\n", (*ptr_product).cost);
	*/
	// (*a).b == a->b
	printf("��ǰ ��ȣ : %d\n", ptr_product->num); // (*ptr_product).num
	printf("��ǰ �̸� : %s\n", ptr_product->name);
	printf("��     �� : %d\n", ptr_product->cost);

	//printf("sizeof(myProduct = %d\n", sizeof(myProduct));
	
}