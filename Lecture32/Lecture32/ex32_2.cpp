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

	printf("반환된 값 : %d\n", a); // first, 반환된 값 : 1
	*/
	noMeaning();
}