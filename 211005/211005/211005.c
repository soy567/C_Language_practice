// 01 - 문자 상수, 문자열 상수, 실수, 부동소수점 형태 실수 출력 
#include<stdio.h>

int main(void) {
	const char c1 = '!', c2 = '@', c3 = '#', c4 = '$', c5 = '^', c6 = '&', c7 = '^';
	const double f1 = 523.45, f2 = 238.34567e3, f3 = 33489.134e-3;
	const char str[50] = "\"C\" 언어는 재미있는 \'프로그래밍 언어\' 이네요.";

	printf("%c %c %c %c %c %c %c\n", c1, c2, c3, c4, c5, c6, c7);
	printf("%.2lf, %E, %E\n",f1, f2, f3);
	printf("%s\n", str);

	return 0;
}


// 02 - 8진수, 16진수를 10진수로 연습
#include<stdio.h>

int main(void) {

	printf("%d\n", 047);
	printf("%d\n", 0x3df);

	return 0;
}


// 03 - 실수 연산 및 출력 연습 (원의 면적 이용)
#include<stdio.h>

int main(void) {
	printf("원의 면적: %f\n", 3.14 * 6.89 * 6.89);
	return 0;
}


// 04 - 정수 연산 및 출력 연습
#include<stdio.h>

int main(void) {
	printf("하루는 %d초 입니다.", 60 * 60 * 24);
	return 0;
}


// 05 - 정수 변수 선언 및 할당 연습
#include<stdio.h>

int main(void) {
	int sec = 60 * 60 * 24;
	printf("하루는 %d초 입니다.", sec);
	return 0;
}


// 06 - 정수 변수 선언, 연산, 할당 연습
#include<stdio.h>

int main(void) {
	int point1 = 95, point2 = 84;
	int total = point1 + point2;

	printf("%d + %d = %d\n", point1, point2, total);
	return 0;
}


// 07 - 출력 형식 지정자 활용 연습
#include<stdio.h>

int main(void) {
	int point1 = 95, point2 = 84;
	int total = point1 + point2;

	printf("%d + %d = %d\n", point1, point2, total);
	printf("total / 2 = %d\n", total / 2);
	printf("total / 2.0 = %f\n", total / 2.0);
	
	return 0;
}


// 08 - 8진수, 10진수, 16진수 상수 표현 연습
#include<stdio.h>

int main(void) {
	printf("%d %d %d\n", 1, 01, 0x1);
	printf("%d %d %d\n", 2, 02, 0x2);
	printf("%d %d %d\n", 3, 03, 0x3);
	printf("%d %d %d\n", 4, 04, 0x4);
	printf("%d %d %d\n", 5, 05, 0x5);
	printf("%d %d %d\n", 6, 06, 0x6);
	printf("%d %d %d\n", 7, 07, 0x7);
	printf("%d %d %d\n", 8, 010, 0x8);
	printf("%d %d %d\n", 9, 011, 0x9);
	printf("%d %d %d\n", 10, 012, 0xa);
	printf("%d %d %d\n", 11, 013, 0xb);
	printf("%d %d %d\n", 12, 014, 0xc);
	printf("%d %d %d\n", 13, 015, 0xd);
	printf("%d %d %d\n", 14, 016, 0xe);
	printf("%d %d %d\n", 15, 017, 0xf);
	printf("%d %d %d\n", 16, 020, 0x10);

	return 0;
}


// 09 - 매크로 상수 정의 및 사용 연습
#include<stdio.h>
#define PI 3.14

int main(void) {
	float r = 7.58;
	printf("원의 면적 = %f\n", PI * r * r);
	printf("원의 둘레 = %f\n", 2 * PI * r);

	return 0;
}


// 10 - 매크로 상수 실수 연산 활용
#include<stdio.h>
#define PI 3.141592

int main(void) {
	float r = 7.58;
	printf("원의 면적 = %f\n", PI * r * r);
	printf("원의 둘레 = %f\n", 2 * PI * r);

	return 0;
}


// 11 - 실수 연산 활용 연습 (화씨 -> 섭씨)
#include<stdio.h>

int main(void) {
	printf("%dF의 섭씨온도 = %f\n", 10, 5.0 / 9.0 * (10 - 32.0));
	printf("%dF의 섭씨온도 = %f\n", 50, 5.0 / 9.0 * (50 - 32.0));
	printf("%dF의 섭씨온도 = %f\n", 80, 5.0 / 9.0 * (80 - 32.0));
	printf("%dF의 섭씨온도 = %f\n", 100, 5.0 / 9.0 * (100 - 32.0));
}


// 12 - 실수 연산 활용 연습 (섭씨 -> 화씨)
#include<stdio.h>

int main(void) {
	printf("%dC의 화씨온도 = %f\n", -10,( 9.0 / 5.0) * -10 + 32.0);
	printf("%dC의 화씨온도 = %f\n", 5, (9.0 / 5.0) * 5 + 32.0);
	printf("%dC의 화씨온도 = %f\n", 15,( 9.0 / 5.0) * 15 + 32.0);
	printf("%dC의 화씨온도 = %f\n", 35, (9.0 / 5.0) * 35 + 32.0);
	
	return 0;
}


// 13 - 특수한 키워드(경보음) 연습
#include<stdio.h>

int main(void) {
	printf("\a수업시간입니다.");
	return 0;
}


// 14 - 8진수 작성과 출력 연습
#include<stdio.h>

int main(void) {
	printf("%o의 아스키 코드 값 = %d\n", 041, 041);
	printf("%o의 아스키 코드 값 = %d\n", 042, 042);
	printf("%o의 아스키 코드 값 = %d\n", 043, 043);
	printf("%o의 아스키 코드 값 = %d\n", 044, 044);
	printf("%o의 아스키 코드 값 = %d\n", 045, 045);

	return 0;
}


// 15 - 실수 연산 연습 (평 -> m^2)
#include<stdio.h>

int main(void) {
	printf("%d평은 %f제곱미터(m^2)\n", 18, 18*3.306);
	printf("%d평은 %f제곱미터(m^2)\n", 25, 25 * 3.306);
	printf("%d평은 %f제곱미터(m^2)\n", 32, 32 * 3.306);
	printf("%d평은 %f제곱미터(m^2)\n", 44, 44 * 3.306);
	printf("%d평은 %f제곱미터(m^2)\n", 52, 52 * 3.306);

	return 0;
}


// 16 - 실수 연산 연습 (km -> mile)
#include<stdio.h>

int main(void) {
	printf("%dkm는 %f마일(mile)\n", 60, 60 / 1.609);
	printf("%dkm는 %f마일(mile)\n", 80, 80 / 1.609);
	printf("%dkm는 %f마일(mile)\n", 100, 100 / 1.609);
	printf("%dkm는 %f마일(mile)\n", 120, 120 / 1.609);

	return 0;
}


// 17 - 문자 상수 8진수 10진수 16진수로 출력 (ASCII코드값 확인)
#include<stdio.h>

int main(void) {
	printf("8진수 코드값 = %o, 10진수 코드값 = %d, 16진수 코드값 = %x\n", '#', '#', '#');
	printf("8진수 코드값 = %o, 10진수 코드값 = %d, 16진수 코드값 = %x\n", '$', '$', '$');
	printf("8진수 코드값 = %o, 10진수 코드값 = %d, 16진수 코드값 = %x\n", '^', '^', '^');
	printf("8진수 코드값 = %o, 10진수 코드값 = %d, 16진수 코드값 = %x\n", '&', '&', '&');
	printf("8진수 코드값 = %o, 10진수 코드값 = %d, 16진수 코드값 = %x\n", '*', '*', '*');

	return 0;
}


// 18 - 문자 상수 ASCII 코드 활용 연습
#include<stdio.h>

int main(void) {
	printf("'A' + 2 = %c\n", 'A' + 2);
	printf("'A' + 5 = %c\n", 'A' + 5);
	printf("'S' - 1 = %c\n", 'S' -1 );
	printf("'S' - 3 = %c\n", 'S' - 3);

	return 0;
}


// 19 - 정수연산 연습 (달러 환전 프로그램)
#include<stdio.h>

int main(void) {
	float krw = 1000000;

	printf("%.0f원은 %f 달러입니다.\n", krw, krw/1120);

	return 0;
}


// 20 - 실수 연산 연습
#include<stdio.h>

int main(void) {
	float dist_to_mars = 117900000;
	float dist_to_uranus = 2871000000;

	printf("화성과 천왕성 간의 거리 = %fkm\n", dist_to_uranus - dist_to_mars);

	return 0;
}
