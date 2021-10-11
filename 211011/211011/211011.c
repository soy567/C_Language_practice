// 01 - 문자변수, 포인터 변수 연습
#include<stdio.h>

int main(void) {
	char c = '*';
	char* ptr = &c;

	printf("문자 : %c, 포인터 변수 내용: %c\n", c, *ptr);

	return 0;
}


// 02 - 정수형 포인터 연습
#include<stdio.h>

int main(void) {
	int data1 = 10, data2 = 20, sum;
	int* p;

	p = &data1;
	*p = 100;
	p = &data2;
	*p = 200;

	sum = data1 + data2;
	printf("sum = %d + %d = %d\n", data1, data2,  sum);

	return 0;
}


// 03 - 정수형 이중포인터 연습
#include<stdio.h>

int main(void) {
	int data1 = 10, data2 = 20, sum;
	int* p1 = &data1, * p2 = &data2;
	int** dp;

	dp = &p1;
	**dp = 100;
	dp = &p2;
	**dp = 200;
	sum = data1 + data2;

	printf("sum = %d + %d = %d\n", data1, data2, sum);
	
	return 0;
}


// 04 - 포인터 이용한 바이트 단위 값 출력 
// (2F='/', 24='$', 26='&', 3F='?'로 순서는 역순으로 출력)
#include<stdio.h>

int main(void) {
	int value = 0x2F24263F, i = 0;
	char* pc =NULL;

	pc = &value;
	
	while (i < 4) {
		switch (*pc) {
		case 0x2f: printf("/, 주소: %p\n", pc); break;
		case 0x24: printf("$, 주소: %p\n", pc); break;
		case 0x26: printf("&, 주소: %p\n", pc); break;
		case 0x3f: printf("?, 주소: %p\n", pc); break;
		}
		pc++;
		i++;
	}
	
	return 0;
}


// 05 - 정수형 변수 문자형 포인터로 읽어 바이트값 출력
#include<stdio.h>

int main(void) {
	int i = 0x324F3A24, j;
	char* p = &i;

	for (j = 3; j >= 0; j--) 
		printf("%X", *(p + j));
	
	return 0;
}


// 06 - 정수형 변수와 문자형 포인터 이용한 바이트 접근 연습
#include<stdio.h>

int main(void) {
	int i = 0x3C405B7B, j;
	char* p = &i, *tmp;

	for (j = 0; j < 4; j++, p++)
		if (*p == 0x5B)
			break;
	tmp = p;

	printf("*p++ = %X, *(p++) = %X\n", *p++, *(p++));
	p = tmp;
	printf("*++p = %X, *(++p) = %X\n", *++p, *(++p));
	p = tmp;
	printf("(*p)++ = %X\n", (*p)++);
	p = tmp;
	printf("++*p = %X, ++(*p) = %X\n", ++*p, ++(*p));

	return 0;
}


// 07 -double형 이용한  정수 사칙연산
#include<stdio.h>

int main(void) {
	int x, y, *p = NULL;
	double num;

	printf("두 정수를 공백으로 구분하여 입력하세요: ");
	scanf("%d %d", &x, &y);

	p = &num;
	*p = x;
	*(p + 1) = y;

	printf("%d + %d = %d\n", *p, *(p + 1), *p + *(p + 1));
	return 0;
}


// 08 - double형 포인터 연습
#include<stdio.h>

int main(void) {
	double a, b, *x = NULL, *y =NULL;
	
	printf("두개의 실수를 공백으로 구분하여 입력하세요: ");
	scanf("%lf %lf", &a, &b);

	x = &a;
	y = &b;

	printf("%lf + %lf = %lf\n", *x, *y, *x + *y);
	printf("%lf - %lf = %lf\n", *x, *y, *x - *y);
	printf("%lf * %lf = %lf\n", *x, *y, *x * *y);
	printf("%lf / %lf = %lf\n", *x, *y, *x / *y);

	return 0;
}