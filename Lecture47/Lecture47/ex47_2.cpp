#include <stdio.h>

int main() {
	FILE *in, *out; // 스트림, 파일을 가리키는 포인터(간단히 설명하면)
	int n;

	in = fopen("intput.txt", "r"); // r(read), w(write)

	printf("in = %d\n", in);

	if (in != nullptr) {
		fscanf(in, "%d\n", &n);
		printf("%d\n", n);
		fclose(in);
	}

} 