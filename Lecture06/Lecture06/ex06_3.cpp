// 형변환 : 자료형을 다른 자료형으로 바꾸는 작업

#include <stdio.h>

int main() {
	int math = 90, korean = 95, english = 96;
	int sum = math + korean + english;
	//double sum = math + korean + english;
	// 93.666667예상, 93.00000이 계산됨
	//double avg = sum / 3; // 정수 / 정수 = 정수가 double type에 저장되는 것.
	double avg = (double)sum / 3; // 93.666667계산

	printf("%f\n", avg); 

	int a = 5 / 3; // 1
}

// 정수 / 정수 = 정수
// 실수 / 정수 = 실수
// 정수 / 실수 : 하지 않는게 좋음. 하더라도 실수로 형변환 후에 나누는게 좋음
// 실수 / 실수 = 실수

// 정수 + 정수 = 정수
// 정수 + 실수 = 실수
// 실수 + 실수 = 실수 (-, *)에서도 마찬가지