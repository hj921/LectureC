#include <stdio.h>

int main() {
	FILE *in, *out; // 스트림, 파일을 가리키는 포인터(간단히 설명하면)
	int n;

	in = fopen("input.txt", "r"); // r(read), w(write)
	// in = fopen("intput.txt", "r") // runtime error
	//out = fopen("output.txt", "w");
	//out = fopen("output.txt", "a");

	printf("in = %d\n", in);

	fscanf(in, "%d", &n);
	//fprintf(out, "%d\n", n);
	printf("%d\n", n);

	fclose(in);
	fclose(out);
} // C언어 main함수가 끝나면 자동으로 file을 닫음.
// 하지만 file 열 수 있는 개수 한계 존재 ->  파일 열고닫아가면서 적은 갯수의 파일을 열어 놓는 편이 좋음.