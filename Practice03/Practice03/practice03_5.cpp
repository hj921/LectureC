#include <stdio.h>

int main() {
	int arr[3][3] = { 0 }; // 0���� ä���� 3x3 �迭

	printf("%d\n", &arr); // arr[3][3] ��ü�� ����Ű�� ������
	printf("%d\n", arr); // arr == &arr[0] 1st row �ּҰ�
	printf("%d\n", *arr); // arr��ü�� ����ִ� ��. 1st row 1���� �迭 ��� -> 1st row�� �ּҰ� ���

	printf("%d\n", &arr[0]);
	printf("%d\n", arr[0]);
	printf("%d\n", *arr[0]); // arr[0] -> 1st row�� ù��° ��Ұ� �ּҰ� ����Ű�� ��

	printf("%d\n", &arr[0][0]);

	printf("%d\n", arr[0][0]); 
}