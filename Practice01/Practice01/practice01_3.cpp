/*
3. 알파벳을 입력받아서 그 다음 알파벳을 출력하는 프로그램을 만들어 보세요. (Z제외)
*/

#include <stdio.h>

int main() {
	char alphabet;

	printf("임의의 알파벳 하나를 입력하여 주세요..(z 제외) : \n");
	scanf("%c", &alphabet);

	printf("%c의 다음 알파벳은 %c 입니다.\n", alphabet, alphabet + 1);

	/*
	char alpha;

	scanf("%c", &alpha);

	char next_alpha = alpha + 1;
	printf("%c\n", next_alpha);
	*/
}