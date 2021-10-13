// 01 - 인치 센치미터 변환
#include<stdio.h>

int main(void) {
	float inch;

	printf("길이를 입력하세요 (인치): ");
	scanf("%f", &inch);

	printf("%f인치는 %fcm 입니다.", inch, inch * 2.54);

	return 0;
}


// 02 - 두개의 정수 입력받아 pow 함수로 거듭제곱값 구하기
#include<stdio.h>
#include<math.h>

int main(void) {
	int m, n;

	printf("m과 n을 공백으로 구분하여 입력하시오: ");
	scanf("%d %d", &m, &n);

	printf("%d ^ %d = %d", m, n, (int)pow(m, n));

	return 0;
}


// 03 - 섭씨 화씨 변환 함수 작성, 결과출력 (섭씨온도 0~100까지 0.5씩 증가)
#include<stdio.h>

float c_to_f(float c) {
	float f = (c * (9.0 / 5.0)) + 32;
	return f;
}

int main(void) {
	int i = 0;
	float c = 0;
	
	while (c <= 100) {
		printf("%.2f C는 %.2f F입니다.\n", c, c_to_f(c));
		c += 0.5;
	}
	return 0;
}


// 04 - 세개의 정수를 입력받아 가장 큰 정수 출력
#include<stdio.h>

int main(void) {
	int a, b, c, max;

	printf("세 개의 정수를 공백으로 구분하여 입력: ");
	scanf("%d %d %d", &a, &b, &c);

	if(a > b) max = a;
	else {
		if (b > c) max = b;
		else max = c;
	}

	printf("입력한 정수 중 가장 큰 수는 %d 입니다.", max);

	return 0;
}


// 05 - square()함수와 cube() 구현하여 정수 입력받아 다섯제곱 구하는 프로그램 구현
#include<stdio.h>

int square(int x) {
	return x * x;
}

int cube(int x) {
	return square(x) * x;
}

int main(void) {
	int a;

	printf("정수를 입력하시오: ");
	scanf("%d", &a);

	printf("%d의 다섯제곱 = %d", a, cube(a) * square(a));
	return 0;
}


// 06 - 반지름 r 입력받아 원의 면적과 둘레 길이 구하는 프로그램 작성
#include<stdio.h>
#define PI 3.14

float area(float r) {
	return PI * r * r;
}

float circumference(float r) {
	return 2.0 * PI * r;
}

int main(void) {
	float r;

	printf("반지름 r을 입력하세요: ");
	scanf("%f", &r);

	printf("원의 둘레 = %f, 원의 면적 = %f", circumference(r), area(r));
	return 0;
}


// 07 - 단리, 복리 함수 만들어 원금, 이자율, 기간(년) 입력하면 총액 출력하는 프로그램
#include<stdio.h>
#include<math.h>

float simple(int a, int r, int n) {
	float s = (float)a*(1 + r * n);
	return s;
}

float compound (int a, int r, int n) {
	float s = a * pow((1 + r ), n);
	return s;
}

int main(void) {
	int a, r, n;

	printf("원금 이자율 기간(년)을 공백으로 구분하여 입력하시오: ");
	scanf("%d %d %d", &a, &r, &n);

	printf("단리 총액 = %f, 복리 총액 = %f", simple(a, r, n), compound(a, r, n));
	return 0;
}


// 08 - 난수 맞히는 문제 (기회 7번)
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void) {
	int r, a, i = 0;
	srand(time(NULL));
	r = (rand() % 20) + 1;

	while (1) {

		if (i >= 7) {
			printf("모든 기회를 쓰셨습니다.\n");
			break;
		}

		printf("1~20중 숫자를 입력하세요(%d 번째): ", i + 1);
		scanf("%d", &a);

		if (a > r) printf("입력한 숫자가 더 큽니다.\n");
		else if (a < r) printf("입력한 숫자가 더 작습니다.\n");
		else {
			printf("정답입니다!\n");
			break;
		}
		i++;
	}

	return 0;
}


// 09 - 1부터 n까지 합 구하는 재귀함수 (20을 인자로 넣어 결과 출력)
#include<stdio.h>

int add_recursion(int n) {
	if (n == 1)
		return 1;

	return n + add_recursion(n - 1);
}

int main(void) {
	int a = 20;

	printf("%d부터 1까지의 합 = %d", a, add_recursion(a));
	return 0;
}


// 10 - 피보나치 수 구하는 재귀함수 작성, 처음부터 10번째 피보나치 수 각각 모두 출력
#include<stdio.h>

int pibo(int n) {
	if (n == 0) return 0;
	else if (n == 1) return 1;

	return pibo(n - 1) + pibo(n - 2);
}

int main(void) {
	int i;

	for (i = 0; i < 10; i++)
		printf("%d ", pibo(i));

	return 0;
}


// 11 - x의 y승 구하는 재귀함수 작성, 6의 0승에서 10승까지 출력하는 프로그램 작성
#include<stdio.h>

int exponential(int x, int y) {
	if (y == 1)
		return x;
	else if (y == 0)
		return 1;

	return x * exponential(x, y - 1);
}

int main(void) {
	int a = 6, i;

	for (i = 0; i <= 10; i++)
		printf("%d ^ %d = %d\n", a, i, exponential(a, i));

	return 0;
}


// 12 - 입력받은 정수 16 진수로 출력하는 재귀함수 작성
#include<stdio.h>

void tohex(int n) {
	if (n > 16) {
		tohex(n / 16);
		printf("%X", n % 16);
	}
	else printf("%X", n);
}

int main(void) {
	int a;

	printf("정수를 입력하시오: ");
	scanf("%d", &a);

	printf("%d를 16진수로 출력하면: ", a);
	tohex(a);

	return 0;
}


// 13 - 로또 모의 당첨 프로그램 (1~45 에서 6개의 난수 중복되지 않도록 생성)
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void) {
	int num[6] = { 0 }, i = 0, j;
	srand(time(NULL));

	while (i < 6) {
		num[i] = rand() % 45 + 1;
		for(j = 0; j < i; j++)
			if (num[j] == num[i]) {
				i--;
				break;
			}
		i++;
	}

	printf("생성된 로또번호: ");
	for (i = 0; i < 6; i++)
		printf("%d ", num[i]);

	return 0;
}


// 14 - 일차원 배열 복사하는 함수 작성 (void cpoyarray(int from[], int to[], int n))
#include<stdio.h>

void copyarray(int from[], int to[], int n) {
	int i;

	for (i = 0; i < n; i++)
		to[i] = from[i];
}

int main(void) {
	int from[5] = { 4, 5, 7, 7, 3, }, to[10] = { 0 }, i;

	copyarray(from, to, 5);

	for (i = 0; i < sizeof(to) / sizeof(int); i++)
		printf("%d ", to[i]);

	return 0;
}


// 15 - 일차원 배열의 일치 검사하는 함수 작성
#include<stdio.h>

int isequalarray(int a[], int b[], int n) {
	int i;
	for (i = 0; i < n; i++)
		if (a[i] != b[i])
			break;
	if (i != n) return 0;

	return 1;
}

int main(void) {
	int a[5] = { 1, 2, 3, 4, 5 };
	int b[5] = { 1, 2, 3, 4, 5 };

	if (isequalarray(a, b, 5))
		printf("두 배열은 같습니다.\n");
	else
		printf("두 배열은 다릅니다.\n");

	return 0;
}