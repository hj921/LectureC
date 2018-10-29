#include <stdio.h>

int main() {
	//int point[2] = { 3, 4 };
	//printf("(%d, %d)\n", point[0], point[1]);
	
	typedef int Pair[2];
	Pair point = { 3, 4 };

	printf("(%d, %d)\n", point[0], point[1]);
}