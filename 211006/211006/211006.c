// 01 - 형식지정자 이용한 출력 포맷 연습(전체 폭 10)
#include<stdio.h>

int main(void) {
	int a;

	printf("4자리 정수 입력: ");
	scanf("%d", &a);

	printf("%10d\n", a);
	printf("%010d\n", a);
	printf("%+010d\n", a);
	printf("%-10d\n", a);
	
	printf("%10o\n", a);
	printf("%010o\n", a);
	
	printf("%10x\n", a);
	printf("%#010x\n", a);

	return 0;
}


// 02 - 문자 표준입력 함수 연습(getchar, putchar) 
#include<stdio.h>

int main(void) {
	char c;

	printf("문자 하나 입력: ");
	c = getchar();

	printf("putchar()로 출력 : ");
	putchar(c);
	printf("\nprintf()로 출력: %c\n", c);

	printf("10진수 코드값 = %d\n", c);
	printf("8진수 코드값 = %o\n", c);
	printf("16진수 코드값 = %x\n", c);

	return 0;
}


// 03 - 매크로 상수 이용한 실수 연산 (원의 면적과 둘레)
#include<stdio.h>
#define PI 3.141592

int main(void) {
	float r;

	printf("원의 반지름 입력: ");
	scanf("%f", &r);

	printf("원의 반지름 = %f\n", r);
	printf("원의 면적 = %f\n", PI*r*r);
	printf("원의 둘레 = %f\n", 2 * PI * r);

	return 0;
}


// 04 - 실수 연산 활용 (화씨 -> 섭씨)
#include<stdio.h>

int main(void) {
	float temp;

	printf("화씨 온도를 입력하세요: ");
	scanf("%f", &temp);

	printf("%fF의 섭씨온도 = %.4f\n", temp, 5.0 / 9.0 * (temp - 32.0));
	return 0;
}


// 05 - 실수 연산 활용 (화씨 -> 섭씨)
#include<stdio.h>

int main(void) {
	float temp[3] = { 0 };

	for (int i = 0; i < 3; i++) {
		printf("섭씨온도를 입력하세요: ");
		scanf("%f",& temp[i]);
	}

	for (int i = 0; i < 3; i++) 
		printf("%fC의 화씨온도 = %.4f\n", temp[i], (9.0 / 5.0) * temp[i] + 32.0);
	
	return 0;
}


// 06 - 실수 연산 활용 (평 -> m^2)
#include<stdio.h>

int main(void) {
	float pyung;
	printf("아파트 면적 입력(평): ");
	scanf("%f", &pyung);

	printf("%f 평은 %f m^2 입니다", pyung, pyung * 3.305785);

	return 0;
}


// 07 - 실수 연산 활용 (km -> mile)
#include<stdio.h>

int main(void) {
	float length;

	printf("길이를 입력하세요(km): ");
	scanf("%f", &length);

	printf("%fkm는 %fmile 입니다.\n", length, length * 0.621371);
	
	return 0;
}


// 08 - getchar 이용하여 문자 입력, 문자  8진수 10진수 16진수 값 출력 
#include<stdio.h>

int main(void) {
	char c;

	printf("문자를 하나 입력하세요: ");
	c = getchar();

	printf("입력한 문자: %c\n", c);
	printf("8진수 코드값 = %o\n", c);
	printf("10진수 코드값 = %d\n", c);
	printf("16진수 코드값 = %x\n", c);

	return 0;
}


// 09 - 실수 연산과 형식지정자 이용한 출력포맷 설정 연습
#include<stdio.h>

int main(void) {
	float w, h;

	printf("가로 세로 길이 공백으로 구분하여 입력: ");
	scanf("%f %f", &w, &h);

	printf("사각형일 경우 면적 = %12.3f\n", w * h);
	printf("삼각형일 경우 면적 = %-12.3f\n", w * h / 2);

	return 0;
}


// 10 - 정수 연산 연습 (두 정수 합과 평균)
#include<stdio.h>

int main(void) {
	int a, b;

	printf("두 정수를 공백으로 구분하여 입력: ");
	scanf("%d %d", &a, &b);

	printf("%d + %d = %d\n", a, b, a + b);
	printf("%d,%d의 평균 = %f\n", a, b, (float)(a + b) / 2);

	return 0;
}


// 11 - 실수 연산 연습 (두 실수 합과 평균)
#include<stdio.h>

int main(void) {
	float a, b;

	printf("두 실수를 공백으로 구분하여 입력: ");
	scanf("%f %f", &a, &b);

	printf("%f + %f = %f\n", a, b, a + b);
	printf("%f, %f의 평균 = %f", a, b, (a + b) / 2);

	return 0;
}



// 12 - 실수 연산과 형변환 연습 (두 실수 합과 평균 정수 형변환)
#include<stdio.h>

int main(void) {
	float a, b;

	printf("두 실수를 공백으로 구분하여 입력: ");
	scanf("%f %f", &a, &b);

	printf("%f + %f = %d\n", a, b, (int)(a + b));
	printf("%f, %f의 평균 = %d", a, b, (int)(a + b) / 2);

	return 0;
}
