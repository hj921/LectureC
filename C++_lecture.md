### Hello, World

~~~c++
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
}
~~~

- #include : 프로그램에 stdio.h를 포함하라는 의미. (stdio.h는 파일, 열어 볼 수 있음.)
- stdio.h : printf등의 명령어의 함수 혹은 의미를 볼 수 있음.
- main() : 함수(명령어를 실행시켜 값을 되돌려주는 것.) 지정된 함수. C언어가 프로그램을 실행할 때 main() 함수를 먼저 실행. 
- printf() : 괄호 안의 내용을 출력.
- \n : [Enter] 역할
- ; : 마침표 역할. 문장의 끝에 반드시 붙여야 함.

예제1. 아래와 같은 형태로 출력이 되도록 프로그램짜기. printf 한 번 사용의 경우와 여러 번 사용한 경우

```mbox
동해물과 백두산이
마르고
닳도록
```

```c++
#include <stdio.h>

int main() {
    // method1
    printf("동해물과 백두산이\n마르고\n닭도록");
    // method2
    printf("동해물과 백두산이\n");
	printf("마르고\n");
	printf("닭도록\n");
}
```



### Printf

```c++
#include <stdio.h>

int main() {
    printf("%d + %d = %d\n", 2, 3, 5);
    
    printf("%f\n", 3.14);
    printf("%.2f\n", 3.141592);
    
    printf("%g\n", 3.141592);
    printf("%.3g\n", 8723984712.12837468723);
    
    printf("%c %c %c\n", 'a', 'b', 'c');
    
    printf("%s\n", "안녕하세요");
}
```

