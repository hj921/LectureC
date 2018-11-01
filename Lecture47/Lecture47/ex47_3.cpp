#include <stdio.h>

int main() {
	FILE *in = fopen("ex47_3.cpp", "r");
	char ch;
	/*
	while (!feof(in)) {
		fscanf(in, "%c", &ch);
		printf("%c", ch);
	}
	*/
	while (fscanf(in, "%c", &ch) != EOF) {
		printf("%c", ch);
	}

	fclose(in);
}