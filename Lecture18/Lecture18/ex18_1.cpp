// break: �ݺ��� �� ���� ��������
// ���� �Է� -> ���� ���
// 1��°: 7
// 2��°: 5
// ..
// 0�Է� �Ǹ� ����

#include <stdio.h>

int main() {
	for (int i = 1;  ; i++) {
		int k;
		scanf("%d", &k);

		if (k == 0) {
			break;
		}
		printf("%d��°: %d\n", i, k);
	}
}