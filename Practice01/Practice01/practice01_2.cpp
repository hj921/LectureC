/*
2. ü��(kg, �Ǽ�)�� Ű(m, �Ǽ�)�� �Է¹޾Ƽ� ü���� ������ ���ϴ� ���α׷��� ��������.
BMI = ü�� / Ű
*/

#include <stdio.h>

int main() {
	float k, m;

	printf("ü��(kg)�� Ű(M)�� ���� �Է��� �ֽʽÿ�.\n");
	scanf("%f%f", &k, &m);

	printf("BMI ������ %f �Դϴ�.", k / (m * m));

	/*
	float weight, height;

	printf("ü�� �Է�(kg) : \n");
	scanf("%f", &weight);
	printf("Ű �Է� (m) : \n");
	scanf("%f", &height);

	float bmi = weight / (height * height);

	printf("BMI : %f\n", bmi);
	*/
}