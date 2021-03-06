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



### 구조체에 함수 집어넣기

```c++
#include <stdio.h>

struct Time {
	int h, m, s;

	int totalSec() {
		return 3600 * h + 60 * m + s;
	}
};

int main() {
	Time t = { 1, 22, 48 };

	printf("%d\n", t.totalSec());
}
```

- 구조체와 밀접한 관련을 한 함수는 구조체에서 선언해주는 편이 좋음

```c++
#include <stdio.h>

struct Point {
    int x, y;
    
    void moveRight() {x++;}
    void moveLeft() {x--;}
    void moveUp() {y++;}
    void moveDown() {y--;}
};

int main() {
    Point p = {2, 5};
    
    p.moveDown();
    p.moveRight();
    
    printf("(%d, %d)\n", p.x, p.y);
}
```



### 상수

- 변하지 않는 수 <-> 변수(변할 수 있는 수)
- const, 매크로, enum

```c++
#include <stdio.h>

// 매크로
#define PI 3.14159 // 별명(PI)
// 3.14159fh 정의 됨 -> 주솟값을 가져올 수 없음.(주소값 존재 x)
// 값 변경도 불가

int main() {
	float a = PI;

	printf("π = %.2f\n", PI);
	//printf("&PI = %df\n", &PI);
}
```

```c++
// enum

#include <stdio.h>

enum EGameState {
	GAMESTATE_MAINMENU,
	GAMESTATE_PLAYING,
	GAMESTATE_PAUSED ,
	GAMESTATE_GAMEOVER
};

int main() {
	int currState = GAMESTATE_MAINMENU;
	// EGameState currState;

	while (true) {
		switch (currState) {
		case GAMESTATE_MAINMENU:
			break;
		case GAMESTATE_PLAYING:
			break;
		case GAMESTATE_PAUSED:
			break;
		case GAMESTATE_GAMEOVER:
			break;
		}
	}
}
```



### 매크로

- 매크로 사용 시 후에 문제 발생을 줄이기 위해 가능한 구문 전체와 각 변수별 괄호를 싸주는 것이 좋음.

```c++
#include <stdio.h>

#define FOR(I, S, E) for (int I = S; I <= E; I++)
#define LOOP while(true)

int main() {
	FOR(i, 1, 10) { // for (int i = 1;  i <= 10; i++)
		printf("%d ", i);
	}

	LOOP{
		printf("*");
	}
}
```



### 비트 연산

- 22 = 10110(2) -> char형 변수에 -> 00010110(8) -> 비트 하나 하나를 비교하며 연산
- 비트 논리 연산 : &(AND), |(OR), ^(XOR), ~(NOT)      cf.논리 연산 && || !

```c++
// 논리 연산 && || !
// 비트 논리 연산 & | ^  ~

#include <stdio.h>

int main() {
	char a = 12, b = 10; 
	// 12 = 1100(2), 10 = 1010(2)
	// 12 = 00001100(8), 10 = 00001010(8)

	// 8
	// 각 비트 AND 연산
	// 00001000 = 8(10)
	printf("%d\n", a & b); 

	// 14
	// 각 비트 OR 연산
	// 00001110 = 14(10)
	printf("%d\n", a | b); 

	// 6
	// 각 비트 XOR 연산
	// 00000110 = 6(10)
	printf("%d\n", a ^ b); 

	// -13
	// 각 비트 NOT 연산
	// 11110011 = -13(10) 맨 앞 부호 비트.
	printf("%d\n", ~a);
}
```

- 시프트(shift) 연산 : <<, >>
  - 시프트(shift) : 옮기다
  - 00010110 -> shift(왼방향) -> 00101100 (빈 공간 생기는 뒤는 0으로 채워지고 앞은 날리고)



### 파일 입출력

- C언어 main함수가 끝나면 자동으로 file을 닫음.
- 하지만 file 열 수 있는 개수 한계 존재 ->  파일 열고닫아가면서 적은 갯수의 파일을 열어 놓는 편이 좋음.
- fopen("파일명", "r,w,a") : r(read), w(write) 파일 안의 내용 다 지우고 파일에 씀, a(기존에 있는 내용 뒤에 이어씀)
- fopen에서 파일명 오타 -> runtime error

```c++
#include <stdio.h>

int main() {
	FILE *in, *out; // 스트림, 파일을 가리키는 포인터(간단히 설명하면)
	int n;

	in = fopen("input.txt", "r"); // r(read), w(write)
	out = fopen("output.txt", "w");
    
    printf("in = %d\n", in);

	fscanf(in, "%d", &n);
	fprintf(out, "%d\n", n);
    
    fclose(in);
    fclose(out);
}
```

```c++
#include <stdio.h>
// 자기 자신(코드) 출력
int main() {
	FILE *in = fopen("ex47_3.cpp", "r");
	char ch;
	while (!feof(in)) {
		fscanf(in, "%c", &ch);
		printf("%c", ch);
	}

	fclose(in);
}
```

- feof(in) : 파일을 끝까지 읽었을 때, TRUE 아닐 경우 FALSE. eof(end of file)

- 결과 -> 끝에 중괄호 하나 더 존재. while 문을 잘 생각해볼 것.

  ![1541039451317](C:\Users\user\AppData\Roaming\Typora\typora-user-images\1541039451317.png)

- 마지막 중괄호가 하나로 똑같이 print 되게 할 경우(권장 코드)

```c++
	while (fscanf(in, "%c", &ch) != EOF) {
		printf("%c", ch);
	}
```



### 유용한 함수들

- getchar(문자를 입력 받는다.) / putchar(문자를 내보낸다.) <- scanf ~ printf보다 빠름.
- getchar() : 매개변수가 필요 없음

```c++
ch = getchar();
putchar(ch);
```

- gets / puts -> gets_s
- scanf("%s", ...) : 한 줄 단위가 아닌 공백을 기준으로 받아진다.
- scanf("%s", str);에서 Hello, World!가 입력되면 Hello, 가 출력

```c++
#include <stdio.h>
int main() {
	char str[100];

	gets_s(str); // call by reference
	puts(str);
}
```

- sscanf / sprintf : 문자열로 부터 입출력 받아서 내보냄.

```c++
int main() {
	char str[] = "450";
	int n;

	sscanf(str, "%d", &n);
	printf("n의 값 : %d\n", n);
}

int main() {
    int n = 450;
    char str[100];
    
    sprintf(str, "%d", n);
    printf("%s\n", str)
}
```

- 난수 -> stdlib.h

```c++
#include <stdlib.h> // standard library
#include <stdio.h>
#include <time.h>

int main() {
    // seed, 현재 시각을 주로 seed로 많이 씀. 
    srand(time(NULL));
    // time(NULL); // 1970/01/01 00:00:00로부터 지난 시간, 초 단위
    // printf("%d\n", time(NULL));
	for (int i = 1; i <= 10; i++) {
		printf("%d\n", rand() % 10 + 1); // 1부터 10까지의 random number
	}
}
```

- exit(0) : 그 자리에서 바로 프로그램 종료

```c++
// exit(0);

#include <stdio.h>
#include <stdlib.h>
// 다섯 개의 자연수를 받아서 합을 구하는 함수. 
// 다른 형일 경우 잘못입력하였습니다 ~ 프로그램 종료

int main() {
	int sum = 0;

	for (int i = 0; i < 5; i++) {
		int n;

		scanf("%d", &n);

		if (n <= 0) {
			printf("INPUT ERROR\n");
			exit(0);
		}
		
		sum += n;
	}

	printf("%d\n", sum);
}
```





### C++ 스타일 입출력

```c++
#include <iostream>

using namespace std;

int main() {
    cout << "Hello, World!" << endl;
}
```

```c++
#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
}
```

- <<(shift)연산자 : 출력할 데이터를 분리해주는 용도로 쓰는 연산자
- endl : end line(줄바꿈) '\n'으로 대체도 가능함
- cout : 출력
- std : name space, 이름에서 성과 유사한 역할
- 같은 n이라는 이름을 쓰지만 서로 다른 namespace를 가지므로 다른 것으로

```c++
namespace a
{
    int n;
}
namespace b
{
    int n;
}

int main() {
    a::n = 10;
    b::n = 20;
}
```

```c++
#include <iostream>

using namespace std;

int main() {
	int a, b;
	cin >> a >> b;

	cout << a << " + " << b << " = " << a + b << endl;
}
```

```c++
#include <iostream>
#include <string>

using namespace std;

int main() {
	string name;

	cout << "이름 입력 : ";
	cin >> name;

	string message = "안녕하세요, " + name + " 님.";
	cout << message << endl;
	/*
	string str;
	str = "Hello";
	cout << str << endl;
	*/
}
```



### C++ 스타일 기본 문법

```c++
#include <iostream>

using namespace std;

int main() {
    int a(10); // 변수 초기화(C++ 스타일)
}
```

```c
int a = 10; // C언어 스타일 변수 초기화
```

```c
// 1
int a = 10;
// 2
int a;
a = 10;
// 1번 방식과 2번 방식에는 약간의 차이가 존재.(언급만)
```

```c++
#include <iostream>

using namespace std;

int main() {
	int a(5);
	int &r1 = a;
	int &r2 = 3; // 상수 3이 저장된 변수가 아닌 상수 자체를 포인터가 가리킬 수 없음
	int &r3 = a * a; // 식 자체는 메모리에 저장된 것이 아니므로 포인터로 가리킬 수 없음
    int &&r2 = 3;
    int &&r3 = a * a;
}
```

- r-value : 수정 할 수 있는 값 ex. 변수(int a;) int &a 표현
- l-value : 수정 할 수 없는 값 ex. 상수, a * a(공식 형태) int &&a

```c++
#include <iostream>

using namespace std;

int main() {
    arr[10] = {4, 5, 8, 9, 2, 4, 72, 4, 3, 7};
    
    for (n : arr) {
        cout << n << ' ';
        n++; // 출력 값에 변화 없음
    }
    
    for (&n : arr) {
        cout << n << ' ';
        n++; // 출력 값에 변화 있음
    }
}
```

- 첫 번째 for문: n을 변경한다고 해서 메모리상의 arr 자체의 값이 변경 되는 것이 아니므로 값 변화 없음
- 두 번째 for문: call-by-reference



### namespace

```c++
#include <iostream>

using namespace std;

int n;
void set() {
	::n = 10; // 명시적 전역 변수
}

namespace doodle {
	int n;
	void set()
}

namespace google {
	int n;
	void set()
}

int main() {
	::set();
	doodle::set();
	google::set();
	cout << ::n << endl; // 10
	cout << doodle::n << endl; // 20
	cout << google::n << endl; // 30
}

namespace doodle {
    void set() {
        n = 20;
    }
}

void google::set() {
    n = 30;
}
```

- namespace 안의 함수도 기본 뼈대만 선언 후 밑에 정의 및 구체적 내용을 정의하는 방법 가능
- 식별자 검색

```c++
#include <iostream>

using namespace std;

int n;
void set() {
	n = 10;
}

namespace doodle {
	void set();

	namespace google {
		void set();
		int n;
	}
	int n;
}

int main() {
	::set();
	doodle::set();
	doodle::google::set();

	cout << ::n << endl;
	cout << doodle::n << endl;
	cout << doodle::google::n << endl;
	// 10 20 30
	// 식별자 검색
}

void doodle::set() {
	n = 20;
}

void doodle::google::set() {
	n = 30;
}
```

- 전역의 함수 혹은 변수와 특정 namespace안의 함수 혹은 변수의 명이 같은 경우에는 using namespace를 사용하더라도 어느 함수, 변수인지 모호하므로 소속을 생략할 수 없음

### 클래스

- struct : C언어의 struct와 C++의 struct는 완전히 다름
- 클래스 = 자료저장 + 자료처리(가장 기본이 되는 기능) -> 변수 + 함수
- 클래스(타입): 특정한 용도를 수행하기 위한 변수와 함수를 모아 둔 틀
- 객체(오브젝트): 그 틀을 이용하여 찍어낸 개체(변수, 메모리 상의 공간)
- 접근제어지시자
  - public
  - private
  - protected
- 내부적인 속성들은 보호를 하며 외부 사용자들이 속성들에 접근 할 수 있는 인터페이스를 제공하는 것 -> 캡슐화
- struct -> default public / class -> defalut private

```c++
#include <iostream>

using namespace std;

//struct TV {
//private:
class TV {
	bool powerOn;
	int channel;
	int volume;

public:
	void on() {
		powerOn = true;
		cout << "TV를 켰습니다." << endl;
	}

	void off() {
		powerOn = false;
		cout << "TV를 껐습니다." << endl;
	}

	void setChannel(int cnl) {
		if (cnl >= 1 && cnl <= 999) {
			channel = cnl;
			cout << "채널을 " << cnl << "(으)로 바꿨습니다." << endl;
		}
	}
	void setVolume(int vol) {
		if (vol >= 0 && vol <= 100) {
			volume = vol;
			cout << "채널을 " << vol << "(으)로 바꿨습니다." << endl;
		}
	}
};

int main() {
	TV lg;
	/* private으로 접근 불가
	lg.powerOn = true;
	lg.channel = 10;
	lg.setVolume = 400;
	*/
	lg.on();
	lg.setChannel(10);
	lg.setVolume(50);
	lg.setVolume(-73); // 볼륨 변화 없음
}
```





### this 포인터

- this : 자기 객체 자신을 가리키는 포인터
- 보이지 않지만 'this'라는 매개변수를 받아 놓는다. -> 보이지 않는 매개변수

```c++
class MyClass {
public:
	void PrintThis() {
		cout << "나의 주소는 " << this << endl;
	}
};

int main() {
	MyClass a, b;

	cout << "a의 주소는 " << &a << endl;
	cout << "b의 주소는 " << &b << endl;

	a.PrintThis();
	b.PrintThis();
}
```



### 객체의 생성과 소멸

- 생성자: 객체가 생성될 때 자동으로 호출되는 함수
- 소멸자: 객체가 소멸될 때 자동으로 호출되는 함수
- 생성자: 멤버 변수 초기화
- 소멸자: 메모리 해제
- LocalObj 지역 함수를 만나는 순간 생성. 지역 함수가 끝나는 순간 소멸자 호츨
- default 생성자, default 소멸자

```c++
#include <iostream>

using namespace std;

class MyClass {
public:
	MyClass() { // 생성자
		cout << "생성자가 호출되었다!!" << endl;
	}

	~MyClass() // 소멸자
	{
		cout << "소멸자가 호출되었다!!" << endl;
	}
};

//MyClass globalObj;

void testLocalObj() {
	cout << "testLocalObj함수 시작!!" << endl;
	MyClass localObj;
	cout << "testLocalObj함수 끝!!" << endl;
} 
int main() {
	cout << "main함수 시작!!" << endl;
	testLocalObj();
	cout << "main함수 끝!!" << endl;
}
```

- 변수 초기화 목록

```c++
Complex() : real(0), imag(0) {	} // 변수 초기화 목록
Complex(double real_, double imag_) : real(real_), imag(imag_) {	} 
// _를 이용하여 매개변수와 멤버변수 구분 초기화 목록에서는 굳이 사용하지 않아도 문제 없음
Complex(double real, double imag) : real(real), imag(imag) {    }
```

- 생성자 위임

```c++
class Time {
public:
	Time() : h(0), m(0), s(0) {	}
	Time(int s_) : Time() {
		s = s_;
	}
	Time(int m_, int s_) : Time(s_) {
		m = m_;
	}
	Time(int h_, int m_, int s_) : Time(m_, s_) { // 생성자 위임
		h = h_;
	}
private:
	int h;
	int m;
	int s;
};
```

 

### 정적 멤버

- static : 정적 <-> 동적
- class 내에서 private 접근 가능
- 전역 함수 -> class와 밀접한 관련 존재, private에 접근 하고 싶은 경우
- 정적 멤버 메서드

```c++
#include <iostream>

using namespace std;

// 0~1사이의 값 float RGB(A)
class Color {
public:
	Color() : r(0), g(0), b(0) {	} // black
	Color(float r, float g, float b) : r(r), g(g), b(b) {	}

	float GetR() { return r; }
	float GetG() { return g; }
	float GetB() { return b; }

	static Color MixColors(Color a, Color b) {
		//return Color((a.GetR() + b.GetR()) / 2, (a.GetG(), b.GetG()) / 2, (a.GetB() + b.GetB()) / 2);
		return Color((a.r + b.r) / 2, (a.g, b.g) / 2, (a.b + b.b) / 2);
	}

private:
	float r;
	float g;
	float b;
};



int main() {
	Color blue(0, 0, 1);
	Color red(1, 0, 0);

	Color purple = Color::MixColors(blue, red);
	//Color purple = blue.MixColors(blue, red);

	cout << "r = " << purple.GetR() << ", g = " << purple.GetG() << ", b = " << purple.GetB();
}
```

- 정적 멤버 변수

```c++
#include <iostream>

using namespace std;

int idCounter = 1;

class Color {
public:

	Color() : r(0), g(0), b(0), id(idCounter++) {
		/*
		id = idCounter;
		idCounter++;
		*/
	}
	Color(float r, float g, float b) : r(r), g(g), b(b), id(idCounter++) {	}

	float GetR() { return r; }
	float GetG() { return g; }
	float GetB() { return b; }

	int GetId() { return id; }

	static Color MixColors(Color a, Color b) {
		return Color((a.r + b.r) / 2, (a.g + b.g) / 2, (a.b + b.b) / 2);
	}

	// static int idCounter = 1; // 정적으로 선언 된 것은 클래스 안에서 초기값을 줄 수 없음.
	static int idCounter;

private:
	float r;
	float g;
	float b;

	int id;
};

int Color::idCounter = 1; // 선언과 정의 분리 형태

int main() {
	Color blue(0, 0, 1);
	Color red(1, 0, 0);

	Color purple = Color::MixColors(blue, red);

	cout << "r = " << purple.GetR() << ", g = " << purple.GetG() << ", b = " << purple.GetB() << endl;

	cout << "red.GetId() = " << red.GetId() << endl;
	cout << "blue.GetId() = " << blue.GetId() << endl;
	cout << "purple.GetId() = " << purple.GetId() << endl;
}
```

- 클래스와 관련있는 함수나 변수는 클래스안으로 넣는 것이 좋음(전역 변수, 전역 함수 남용은 좋지 않음.)

### 상수형 매개변수와 상수형 메서드

- 매개변수의 상수화 (모든 함수에 대해서)
- 메서드의 상수화 (멤버 메서드에서만) : 어떤 메서드에 대해서 메서드 내에서 속한 클래스에 다른 멤버변수를 건들 수 없도록 만드는 것.
  - 멤버변수 읽기는 가능하지만 쓰기는 불가능

```c++
#include <iostream>

using namespace std;

class Account {
public:
	Account() : money(0) {		}
	Account(int money) : money(money) {	}
	
	void Deposit(const int d) {
		// d = money; // 버그 생성
		money += d;
		cout << d << "원을 예금했다!!" << endl;
	}
	void Draw(const int d) {
		if (money >= d) {
			money -= d;
			cout << d << "원을 인출했다!!" << endl;
		}
	}

	int ViewMoney() const {
		// money++; // 실수(버그) 생성, 이러한 실수 방지 -> 메서드 상수화
		return money;
	}
private:
	int money;
};

int main() {
	Account doodle(100);
	doodle.Deposit(100);
	doodle.Draw(20);
	cout << doodle.ViewMoney() << endl;
}
```

