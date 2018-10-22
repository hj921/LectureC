#include <stdio.h>
// char: 1바이트 정수형
// character: 문자 (반각문자  Halfwidth, ABCabc1234_+\;/#%) | 전각문자 (Fullwidth, 한글, 한자, 일본어, 러시아어 등)x

int main() {
	char a = 67;

	printf("%d\n", a);
	printf("%c\n", a);
	printf("%d\n", 'C'); // 'C' == 67

	// ASCII : American Standard(문자-숫자)
}