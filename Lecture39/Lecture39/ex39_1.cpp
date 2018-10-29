#include <stdio.h>

typedef struct { int x, y; } Point; // struct Point {int x, y;}: typedef 생략해서 쓸 때

int main() {
	Point p; // struct {int , y;} p: 바로 구조체 선언 할 때

	/*
	typedef int Int32;
	Int32 n; // Int32 n; == int n;
	*/
	p.x = 3;
	p.y = 4;
	
	printf("(%d, %d)\n", p.x, p.y);
	printf("sizeof(p) = %d\n", sizeof(p));
}