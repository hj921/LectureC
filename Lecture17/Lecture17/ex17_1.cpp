#include <stdio.h>

int main() {
	int i;
	scanf("%d", &i);

	for (; true; i++) { // true�����ص� true�� �νĵ�. for(; ; i++) == for(; true; i++)
		printf("%d", i);
	}
}