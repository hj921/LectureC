#include <stdio.h>

typedef struct { int x, y; } Point; // struct Point {int x, y;}: typedef �����ؼ� �� ��

int main() {
	Point p; // struct {int , y;} p: �ٷ� ����ü ���� �� ��

	/*
	typedef int Int32;
	Int32 n; // Int32 n; == int n;
	*/
	p.x = 3;
	p.y = 4;
	
	printf("(%d, %d)\n", p.x, p.y);
	printf("sizeof(p) = %d\n", sizeof(p));
}