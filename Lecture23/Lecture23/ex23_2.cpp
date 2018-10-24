#include <stdio.h>
#include <string.h>

int main() {
	/*
	char str[] = "Hello";

	sizeof(str) / sizeof(char) - 1;
	*/
	/*
	char str[100] = "Hello";

	int len;
	len = strlen(str);
	printf("문자열의 길이는 %d\n", len);
	*/

	/*
	char str1[] = "Hello";
	char str2[100];

	strcpy(str2, str1); // strcpy(사본, 원본) 
	*/

	/*
	char str[100] = "Hello";
	strcat(str, "World!");

	printf("%s\n", str);
	*/
	char str1[] = "sample";
	char str2[] = "simple";

	int cmp = strcmp(str1, str2);

	printf("%d\n", cmp);
}

