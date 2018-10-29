#include <stdio.h>

int main() {
	/*
	const char *name = "Doodle";
	printf("이름: %s\n", name);
	*/

	typedef const char *String;
	String name = "Doodle";
	printf("이름: %s\n", name);
}