#include <stdio.h>
/*
int noMeaning() {
	printf("first\n");
	return 1;
	printf("second\n");
	return 2;
}
*/

void noMeaning() {
	printf("first\n");
	return ;
	printf("second\n");
	return ;
}


int main() {
	/*
	int a;
	a = noMeaning();

	printf("��ȯ�� �� : %d\n", a); // first, ��ȯ�� �� : 1
	*/
	noMeaning();
}