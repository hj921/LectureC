#include <stdio.h>

int main() {
	FILE *in, *out; // ��Ʈ��, ������ ����Ű�� ������(������ �����ϸ�)
	int n;

	in = fopen("intput.txt", "r"); // r(read), w(write)

	printf("in = %d\n", in);

	if (in != nullptr) {
		fscanf(in, "%d\n", &n);
		printf("%d\n", n);
		fclose(in);
	}

} 