/*
2. 체중(kg, 실수)과 키(m, 실수)를 입력받아서 체질량 지수를 구하는 프로그램을 만들어보세요.
BMI = 체중 / 키
*/

#include <stdio.h>

int main() {
	float k, m;

	printf("체중(kg)과 키(M)를 각각 입력해 주십시오.\n");
	scanf("%f%f", &k, &m);

	printf("BMI 지수는 %f 입니다.", k / (m * m));

	/*
	float weight, height;

	printf("체중 입력(kg) : \n");
	scanf("%f", &weight);
	printf("키 입력 (m) : \n");
	scanf("%f", &height);

	float bmi = weight / (height * height);

	printf("BMI : %f\n", bmi);
	*/
}