/*
	4. 10*10 ������ ������ ������ �迭�� �Է¹޾�
	�� �迭�� �� ���� ����� ���� ����ϴ� ���α׷��� ��������.

	�Է� ��
	3 4
	4 2 6 3
	7 9 3 4
	5 1 2 1

	��� ��
	15
	23
	9
	*/

#include <stdio.h>

int main() {
	int  n_row, n_col;
	scanf("%d %d", &n_row, &n_col);

	int arr[12][12];

	for (int i = 0; i < n_row; i++) {
		for (int j = 0; j < n_col; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	
	for (int i = 0; i < n_row; i++) {
		int sum = 0;
		for (int j = 0; j < n_col; j++) {
			sum += arr[i][j];
		}
		printf("%d��° ���� ���� %d�Դϴ�.\n", i, sum);
	}
}