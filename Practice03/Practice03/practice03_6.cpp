#include <stdio.h>

int main() {
	int arr[3][3] = { 0 };

	printf("%d\n", &arr[0][0]);
	
	// arr[0] = 1st row �ϳ��� �迭 �ǹ� -> �迭�� ù��° ��Ұ�(int �� ĭ)�� ����Ű�� �ּҰ� == arr[0]
	printf("%d\n", arr[0] + 1); // +4 �ּҰ�
	printf("%d\n", &arr[0] + 1); // +12 �ּҰ�
	// &arr[0] == arr -> 2���� �迭 ��ü. 2���� �迭�� ù��° ��� 1st row�� ����Ű�� ������(�ּҰ�)
	printf("%d\n", arr + 1); // +12(&arr[0] + 1)�� ������ �ǹ�.
	printf("%d\n", &arr + 1); // +36 ��ü arr ��ü�� ����Ű�� ������(&arr) 
}