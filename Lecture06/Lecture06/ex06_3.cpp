// ����ȯ : �ڷ����� �ٸ� �ڷ������� �ٲٴ� �۾�

#include <stdio.h>

int main() {
	int math = 90, korean = 95, english = 96;
	int sum = math + korean + english;
	//double sum = math + korean + english;
	// 93.666667����, 93.00000�� ����
	//double avg = sum / 3; // ���� / ���� = ������ double type�� ����Ǵ� ��.
	double avg = (double)sum / 3; // 93.666667���

	printf("%f\n", avg); 

	int a = 5 / 3; // 1
}

// ���� / ���� = ����
// �Ǽ� / ���� = �Ǽ�
// ���� / �Ǽ� : ���� �ʴ°� ����. �ϴ��� �Ǽ��� ����ȯ �Ŀ� �����°� ����
// �Ǽ� / �Ǽ� = �Ǽ�

// ���� + ���� = ����
// ���� + �Ǽ� = �Ǽ�
// �Ǽ� + �Ǽ� = �Ǽ� (-, *)������ ��������