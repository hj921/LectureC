#include <stdio.h>

int main() {
	/*
	const char *name = "Doodle";
	printf("�̸�: %s\n", name);
	*/

	typedef const char *String;
	String name = "Doodle";
	printf("�̸�: %s\n", name);
}