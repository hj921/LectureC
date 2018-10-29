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

* block -> ctrl + h (변환)

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

- %d : 정수 출력 (1, 2, 3, ..., 0, -1, -2, -3)
- %f : 실수 출력 (3.14, -2.0 ..) 기본 소수점 여섯자리까지?
- %.2f : 소수점 둘째자리까지만 출력(반올림하여)
- %g : 실수 출력 (긴 숫자의 경우 지수 형태로도 출력) + 유효숫자
- %c : 문자 출력 (알파벳, 숫자, 몇몇 기호, \n) - 한글, 한자 유니코드는 출력이 안됨
- %s : 문자열 출력 (문자들이 열거되어 있는 것) - 한글 모두 포함 가능.



### 변수란?

RAM(주기억장치)에 데이터를 넣었다 저장하였다가 그 값을 다시 불러오는 등의 행위를 할 때 변수를 이용할 수 있다.

```C++
#include <stdio.h>

int main() {
    int a; // 선언
    
    a = 3; // 대입
    printf("%d\n", a);
    
    a = 5; // 대입
    printf("%d\n", a);
}
```

- int a : 32bit(4바이트)크기. a 라는 이름의 int형 변수 생성. 선언
- a = 3 : a라는 그릇에 3이라는 값을 넣는다 의미. 대입
- printf("%d\n", a) : a라는 변수에 있는 값을 불러와서 출력.
- 변수이름 : 알파벳 대소문자, _(underscore), 숫자(첫번째 글자로는 사용 불가)



### 자료형 Part1. 변수의 연산 / 변수의 자료형

- int : 정수를 담는 데 쓰임
- float : 실수를 담는데 쓰임.

EX) float의 저장 관련 설명 3.14

| +          | -2                   | 314                    |
| ---------- | -------------------- | ---------------------- |
| (양수의미) | (3.14 = 314 * 10^-2) | (소수점을 제외한 숫자) |

- float 실수를 저장하기엔 용량이 작음 -> 오차 발생 가능 

  => 오차 최소한 위해 double이라는 자료형 사용 하기도 함.

- 부동소수점(floating point)



### 자료형 Part2. 이진법 / C, C++의 자료형 총정리

- 2진법

  - 10진법

    12345 = 10000 + 2000 + 300 + 40 + 5

    ​	  = 1x10^4 + 2x10^3 + 3x10^2 + 4x10^1 + 5x10^0

  - 2진법 - 0, 1로만 구성

    100110(2)= 1x2^5 + 1x2^2 + 1x2^1 = 38

  - int - 32비트 = 4바이트(8비트 = 1바이트)

    ex. 5 = 101(2) -> 00000000 00000000 00000000 00000101

    ex. 37 = 100101(2) -> 00000000 00000000 00000000 00100101

  - 바이트 : 컴퓨터에서 데이터를 처리하는 가장 작은 단위

- 자료형 - 정수형, 실수형

  00000000 00000000 00000000 00100101

  11111111 11111111 11111111 11111111 = -1 가장 앞자리 숫자 부호를 의미.

  8비트 = 1바이트

  - 정수형

    - char (1바이트) - 문자를 담는 데 쓰임
    - short (2바이트)
    - long (4바이트) - -2147483648(-2^31) ~ +2147483647(2^31 - 1) => 2^32개
    - long long (8바이트)
    - int (시스템에 따라서 자동 결정, 대체로 long - 4바이트(32비트))

  - 실수형

    - float (4바이트)
    - double (8바이트)


  - unsigned(부호를 무시하겠다 의미), signed

    ```c++
    unsigned int a;
    unsigned double f;
    ```

    - 0 ~ +4294967295(2^32 - 1) <- unsigned가 될 경우

  - void : 리턴 값이 없는 함수의 자료형

  - bool : 참, 거짓을 저장하는 자료형 (= char) <- 컴퓨터 최소 단위가 1바이트이므로 bool을 이용해도 결국 1바이트를 사용하게 되므로.


### sizeof

- sizeof(x): x의 크기를 알려줌

- x: 형(int, float, ...)

- x: 변수 이름

  ```c++
  #include <stdio.h>
  
  int main() {
      int a = 3.14;
      double b = 10;
      
      printf("%d %f\n", a, b);
  }
  ```

  - 실수를 정수형 변수에 담을 수 없다.(값이 변함)
  - 정수를 실수형 변수에 담을 수 있다. 

### 형변환

- 자료형을 다른 자료형으로 바꾸는 작업

  ```c++
  #include <stdio.h>
  
  int main() {
      int math = 90, korean = 95, english = 96;
      int sum = math + korean + english;
      double avg = (double)sum / 3;
      
      printf("%f\n", avg);
  }
  ```

- 나눗셈

  - 정수 / 정수 = 정수
  - 실수 / 정수 = 실수
  - 정수 / 실수 : 가능한 하지 말 것. 하더라도 실수로 형변환 후 연산할 것.
  - 실수 / 실수 = 실수

- 덧셈(뺄셈, 곱셈도 마찬가지)

  - 정수 + 정수 = 정수
  - 정수 + 실수 = 실수
  - 실수 + 실수 = 실수



### scanf

- scanf(+포인터(&) 필요)

  ```c++
  #include <stdio.h>
  
  int main() {
  	int a, b;
  
  	scanf("%d%d", &a, &b); // &: 포인터
  
  	int sum = a + b;
  	int diff = a - b;
  	int prod = a * b;
  	int quo = a / b;
  
  	printf("%d + %d = %d\n", a, b, sum);
  	printf("%d - %d = %d\n", a, b, diff);
  	printf("%d * %d = %d\n", a, b, prod);
  	printf("%d / %d = %d\n", a, b, quo);
  }
  ```

- scanf("%d%d, &a, &b") - 숫자가 space든 enter든 구분만 되어있다면 각가의 %d로 인식



### char(character형)

- char: 1바이트 정수형 (int: 4바이트)

- character: 문자 - 반각문자(Halfwidths, ABC,abc1234_+\;/#%..) cf) 전각문자(Fullwidths, 한글, 일본어, 러시아어 등) x

  ```c++
  #include <stdio.h>
  
  int main() {
      char a = 67;
      
      printf("%c\n", a);
      printf("%d\n", a);
      printf("%d\n", 'C'); // 'C' == 67
  }
  ```


### ASCII

- American Standard (문자 ~ 숫자)

  ```c++
  #include <stdio.h>
  
  int main() {
      char a;
      
      scanf("%c\n", &a);
      
      printf("당신이 입력한 문자는 %c입니다.\n", a);
  }
  ```

- R입력(scanf) -> ASCII코드 값 82를 변수 a에 담음. -> printf에서 a의 82 숫자 값을 가져와서 해당하는 문자 R을 반환.

### 산술연산자

- 수학적인 연산

- (+ - * / % =)

  ```c++
  #include <stdio.h>
  int main() {
      int a = 5;
      a = a + 3; // 대입연산
  }
  ```

- += -= *= /= %=

  ```c++
  #include <stdio.h>
  int main() {
      int a = 5;
      
      a += 6; // a = a + 6;
      a %= 7; // a = a % 7;
  }
  ```

- ++ --

  - 전치 연산

    ```c++
    #include <stdio.h>
    
    int main() {
        int a = 10;
        int b;
        // b = ++a;
        a++; // a = 11, b = 11
        b = a;
    }
    ```

  - 후치 연산

    ```c++
    #include <stdio.h>
    
    int main() {
        int a = 10;
        int b;
        // b = a++;
        b = a; // a = 11, b = 10
        a++;
    }
    ```



### 비교 연산자

- 참: 1, 거짓: 0

```c++
#include <stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    
    int p = a > b;
    int q = a < b;
    int r = a == b; // == : 같다.
}
```



### 논리 연산자

- &&(AND), ||(OR), !(NOT)

```c++
#include <stdio.h>

int main() {
	int a;
	scanf("%d", &a);

	bool p = (a >= 1) && (a <= 10);
	bool q = (a == 3) || a == 7;
	bool r = !q;

	printf("%d\n", p);
	printf("%d\n", q);
	printf("%d\n", r);
}
```



### if

- 경우를 나눌 때 사용.

```c++
if (n % 2 == 0) {
    printf("n은 짝수\n");
}
else {
    printf("n은 홀수\n");
}
```

- 중첩 if문
- 중괄호 코딩 스타일



### switch

- if와 유사

```c++
switch(choice) {
    case 1:
        printf("새 게임\n");
        break;
    case 2:
        printf("불러오기\n");
        break;
    case 3:
        printf("설정\n");
        break;
    case 4:
        printf("크레딧\n");
        break;
    default:
		printf("잘못 입력하셨습니다.");
		break;
}
```

- break : 중괄호 밖으려 나가게 됨. break가 없으면 case1에서 자동으로 case2로 넘어가는 문제가 발생.



### goto

- 남발하여 사용하지 않는 것 추천

```c++
#include <stdio.h>

int main() {
	int i = 1;
	repeat:
	printf("%d\n", i);
	if (i < 10) {
		i++;
		goto repeat;
	}
}
```



### while

- 반복문

```c++
while (i <= 10) {
    printf("%d\n", i);
    i++;
}
```



### do-while

- 조건을 만족하든 안하든 무조건 첫 번째 한 번은 실행

```c++
do {
    printf("%d\n", i);
    i++;
} while(i <= 10)
```



### 무한 반복

```c++
while(true) {
    printf("%d ", i);
    i++; // ctrl + c로 stop
}
```

### for

- 반복문
- 일정하게 증가 / 감소되는 변수가 필요할 때
- 배열의 모든 원소에 순차적으로 접근하고 싶을 때
- 특정 횟수만큼 작업을 반복하고 싶을 때

```c++
for (i = 1; i <= 10; i++) {
    printf("%d\n", i);
}
```

- 블럭 내에서 정의된 변수는 블럭 밖에서 사용 불가.
- break : 반복문 한 개를 빠져나옴
- continue
- 중첩  for 문

```c++
// 중첩 for 문

#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	/*
	
		***
		***
		***
		
	*/

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) { // for (int j = 1; j <= i; j++) 계단 출력
			printf("*");
		}
		printf("\n");
	}
}
```



### 배열

```c++
int a[5]; // 5개의 칸의 저장공간. 칸 하나하나가 변수처럼 사용 가능
a[0] = 2;
```

```c++
int arr[] = { 3, 1, 4, 1, 5, 9, 2, 6, 5, 3 };
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
```

- 2차원 배열

```c++
int arr[3][4]{
    { 1, 2, 3, 4 }, 
    { 5, 6, 7, 8 },
    { 9, 10, 11, 12 }
};

for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
        printf("%d ", arr[i][j]);
    }
    printf("\n");
}
```

- 파스칼의 삼각형

```c++
int main() {
	int p[10][10];

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j <= i; j++) {
			if (j == 0 || j == i) {
				p[i][j] = 1;
			}
			else {
				p[i][j] = p[i - 1][j - 1] + p[i - 1][j];
			}
			printf("%d ", p[i][j]);
		}
		printf("\n");
	}
}
```



### 문자열

```c++
char arr[100] = "Hello, world!";
```

- 문자열 끝에 항상 NULL 문자 존재. 그러므로 배열의 크기는 보이는 문자 수 + 1
- <string.h>
  - strlen
  - strcpy(str2, str1) : str1의 문자열을 str2에 복사
  - strcat
  - strcmp(str1, str2) : 사전순서. str1이 사전순서상 앞이면 -1, 뒤이면 1, 동일 0



### 포인터(pointer)

- 변수를 가리키는 것.
- 변수의 주소를 저장하는 변수

```c++
int a = 20;
int *ptr_a; // 포인터 선언
ptr_a = &a; // a의 주솟값 포인터 a에 저장

char c;
char *ptr_c;
```



### 배열 - 포인터 관계

```c++
int a = 10;
int *ptr_a = &a;

printf("ptr_a의 값 : %d\n", ptr_a);
printf("ptr_a + 1의 값 : %d\n", ptr_a + 1);
```



- 와 ptr_a + 1 -> 값 차이(=4)

- 포인터에 값을 더하면 포인터가 가르키는 값의 형의 크기만큼 더해짐. int는 4바이트 이므로 4만큼.

- 배열 선언하면 메모리상에서도 다닥다닥 붙어있는 형태로 할당된다.

  ``` c++
  #include <stdio.h>
  
  int main() {
  	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
  	printf("arr의 값 : %d\n", arr); // arr == &arr[0]
      printf("arr + 1의 값 : %d\n", arr + 1); //(arr + 1) == &arr[1]
      // (arr + i) == &arr[i]
  	for (int i = 0; i < 10; i++) {
  		printf("&arr[%d] = %d\n", i, &arr[i]);
  	}
  }
  ```




### 배열 포인터

```c++
/*
	1. arr == &arr[0] ptr == &ptr[0]
	2. *ptr == ptr[0]
	3. ptr + 1 == ptr에 sizeof(*ptr)을 더한 값
*/

#include <stdio.h>

int main() {
	int arr[3] = { 1, 2, 3 };

	printf("arr = %d\n", arr);
	printf("arr + 1 = %d\n", arr + 1); // sizeof(arr)만큼 더해짐

	printf("&arr = %d\n", &arr);
	printf("&arr + 1 = %d\n", &arr + 1); // sizeof(arr)만큼 더해짐
}
```

- 배열 첫 번째 칸을 대표로 가르킴
- 해당 포인터 배열 + 1은 그 다음 배열을 가르킴. 즉 sizeof(arr)가 더해짐.

```c++
// 배열 포인터
#include <stdio.h>

int main() {
	int arr[3] = { 1, 2, 3 };

	int(*ptr_arr)[3]; //길이 3인 int형 배열을 가리키는 포인터를 선언
	ptr_arr = &arr;
    
    for (int i = 0; i < 3; i++) {
        printf("%d\n", (*ptr_arr)[i]);
    }
}
```



### 2차원 배열과 배열 포인터

```c++
#include <stdio.h>

int main() {
	int arr[2][3] = { {1, 2, 3}, {4, 5, 6} };

	for (int(*row)[3] = arr; row < arr + 2; row++) {
		for (int *col = *row; col < *row + 3; col++) {
			printf("%d ", *col);
		}
		printf("\n");
	}
}
```



### 포인터 배열

- 포인터들의 배열
- cf) 배열 포인터 : 배열을 가리키는 포인터

```c++
int main() {
	int*ptr[4]; // 포인터 배열 선언
}
```

```c++
#include <stdio.h>

int main() {

	int arr[4] = { 1, 2, 3, 4 };
	int *ptr[4];

	for (int i = 0; i < 4; i++) {
		ptr[i] = &arr[i];
	}

	for (int i = 0; i < 4; i++) {
		printf("%d ", *ptr[i]);
	}
	printf("\n");
}
```



### 함수

```c++
#include <stdio.h>

int main() {
	printf("Hello, World\n");
}
```

- int main() {} : main이라는 함수를 정의
- printf("") : stdio.h에 있는 함수를 호출(사용)

```c++
#include <stdio.h>

// 전역변수
int itemCnt = 0; 
int money = 100;
// int cost;

void buyItem(int cost, int cnt) {
	// itemCnt++
    itemCnt += cnt;
	money -= cost;
	printf("아이템을 구매했습니다.\n");
	printf(" 아이템 개수: %d\n", itemCnt);
	printf(" 잔액 : %d\n", money);
}

int main() {
	int a; // 지역변수
    // cost = 30;
	buyItem(30, 5);
	// cost = 50;
	buyItem(50, 7);
}
```

- 지역변수 : 특정 함수 내에서 선언 된 변수(함수(블럭) 범위 내에서만 사용가능)
- 매개변수 : 지역변수와 마찬가지로 함수 내에서만 사용이 가능. cost라는 변수를 main 함수에서 사용할 수는 없음.(ex. cost=30 x)
- 매개변수가 두 개 이상 함수 가능
- viod : 반환 값이 없음 의미.



### return

- 돌려주다, 반환

```c++
#include <stdio.h>

int plus(int a, int b) {
    return a + b;
}

int main() {
    int sum = plus(3, 5);
    printf("%d\n", sum);
    
    // return 0; return을 하지 않으면 자동으로 return 0 반환(main 함수의 경우)
}
```

- plus(3, 5) : plus 함수 실행(a = 3, b = 5 매개변수에 대입).
- 함수 실행 수 return 특정 값을 반환
- plus(3, 5) 자체로 특정 값 대입. sum에 대입
- printf로 출력
- 한 함수 내에 return을 두 번 해도 문법적 오류는 발생하지 않음.(첫 번째 return만을 반환하고 함수를 종료. 함수는 return을 만나면 즉시 종료.)

### call-by-value

- 값에 의한 호출

```c++
#include <stdio.h>

void swap(int x, int y) {
	int tmp = x;
	x = y;
	y = tmp;
}
int main() {
	int a, b;

	scanf("%d%d", &a, &b);

	swap(a, b);
	printf("a = %d, b = %d\n", a, b);
}
```



### call-by-reference

- 참조에 의한 호출

```c++
#include <stdio.h>

void swap(int *x, int *y) {
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
int main() {
	int a, b;

	scanf("%d%d", &a, &b);

	swap(&a, &b);
	printf("a = %d, b = %d\n", a, b);
}
```



### prototype

- 원형, 시제품
- 함수가 어떻게 생겼는지만 간단하게 적어 놓는 것.
- 함수의 원형을 미리 적고, 정의는 나중으로 미뤄두는 것.
-  매개변수는 변수 type만 언급해줘도 가능.

```c++
// prototype : 원형, 시제품

#include <stdio.h>

// 함수 선언(함수 이름, 형, 매개변수만 적고 기능 구현은 안함)
void walk(int distance);
void rotate(int angle);
void drawSquare();

int main() {
	drawSquare(); // 호출
}

// 함수 정의(함수 기능 구현)
// 로봇의 기능
// 1. 걷기
void walk(int distance) {
	printf("%dcm를 걸었습니다.\n", distance);
}
// 2. 돌기
void rotate(int angle) {
	printf("%d도 회전했습니다.\n", angle);
}
// 정사각형 그리며 돌기 (직진 -> 90도 우측 회전 -> 직진 -> 90도 -> 직진 -> 90도 -> 직진)
void drawSquare() {
	for (int i = 1; i <= 4; i++) {
		walk(10);
		rotate(90);
	}
}

```



### 재귀 함수

- recursion
- 자기 자신의 정의 속에 다시 자기 자신이 포함된 것

![1540823160449](C:\Users\user\AppData\Roaming\Typora\typora-user-images\1540823160449.png)



### 배열을 매개변수로 넘기기

```c++
#include <stdio.h>

// int arr[4] == int *arr

void printArr(int arr[4]) { // call-by-reference
	for (int i = 0; i < 4; i++) {
		arr[i] *= 2; // arr[i] == *(arr+i)
	}
}
int main() {
	int arr[4] = { 1, 2, 3, 4 };
	
	printArr(arr); // arr == &arr[0]

	for (int i = 0; i < 4; i++) {
		printf("%d ", arr[i]);
	}
}

```



### typedef

- 형을 정의

```c++
#include <stdio.h>

int main() {
    unsigned short int age; // -> usi age;
    // unsigned short int : 자료형 중의 하나, 16비트(2바이트)짜리 부호가 없는 정수를 저장하는 자료형.
}
```

- 기존에 있는 자료형을 다른 이름으로 다시 지어주는 것.(별명)

```c++
#include <stdio.h>

int main() {
	//int point[2] = { 3, 4 };
	//printf("(%d, %d)\n", point[0], point[1]);
	
	typedef int Pair[2];
	Pair point = { 3, 4 };

	printf("(%d, %d)\n", point[0], point[1]);
}
```

### 구조체

```c++
typedef struct {int x, y;} Pair;

Pair p; // int p[2];
p.x = 3;
p.y = 4;
```

- 여러 개의 변수를 하나로 묶은 것
- 비교적 더 직관적
- 구조체도 결국엔 자료형
- 전역변수로 주로 선언
- typedef struct {int x, y;} Point == struct Point {int x, y;};
- typedef struct {int x, y;} Point; Point p == struct {int x, y;} p



### 구조체와 메모리

```c++
#include <stdio.h>

int main() {
	struct Point {
		int x, y; // 형 혼합되어도 상관 X
		char c;
		double d;
	};

	Point p;
}
```

```c++
#include <stdio.h>

struct ProductInfo {
	int num; // 4Byte
	char name[100]; // 100B
	int cost; // 4B
};

int main() {
	ProductInfo myProduct = {479783, "제주 한라봉", 19900}; // 초기화
    // 구조체 변수 초기화 시 등호 없이 작성 가능
    // ProductInfo myProduct{479783, "제주 한라봉", 19900}; 

	/*
	printf("상품 번호 : %d\n", myProduct.num);
	printf("상품 이름 : %s\n", myProduct.name);
	printf("가     격 : %d\n", myProduct.cost);

	printf("sizeof(myProduct = %d\n", sizeof(myProduct));
	*/
	printf("상품 번호 : %d\n", &myProduct.num);
	printf("상품 이름 : %d\n", myProduct.name);
	printf("가     격 : %d\n", &myProduct.cost);
    
    printf("%d\n", &myProduct); // == &myproduct.num
}
```

![1540834388630](C:\Users\user\AppData\Roaming\Typora\typora-user-images\1540834388630.png)



### 구조체 포인터

```c++
#include <stdio.h>

struct ProductInfo {
	int num; // 4Byte
	char name[100]; // 100B
	int cost; // 4B
};

/*
void productSale(ProductInfo p, int percent) { // call-by-value
	p.cost -= p.cost*percent / 100;
}
*/

// call-by-reference
void productSale(ProductInfo *p, int percent) {
	p->cost -= p->cost*percent / 100;
}
int main() {
	ProductInfo myProduct{ 479783, "제주 한라봉", 20000 };

	ProductInfo *ptr_product = &myProduct;

	productSale(&myProduct, 10);
	
	// (*a).b == a->b
	printf("상품 번호 : %d\n", ptr_product->num); // (*ptr_product).num
	printf("상품 이름 : %s\n", ptr_product->name);
	printf("가     격 : %d\n", ptr_product->cost);

	//printf("sizeof(myProduct = %d\n", sizeof(myProduct));
	
}
```

