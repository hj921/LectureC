#include <stdio.h>

int main() {
	FILE *in, *out; // ��Ʈ��, ������ ����Ű�� ������(������ �����ϸ�)
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
} // C��� main�Լ��� ������ �ڵ����� file�� ����.
// ������ file �� �� �ִ� ���� �Ѱ� ���� ->  ���� ����ݾư��鼭 ���� ������ ������ ���� ���� ���� ����.