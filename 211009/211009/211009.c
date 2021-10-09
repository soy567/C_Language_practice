// 01- for 문 연습
#include<stdio.h>

int main(void) {
	int i, j;

	for (i = 0; i < 5; i++) {
		for (j = 5 ; j > i; j--) 
			printf("%d", j);
		printf("\n");
	}

	return 0;
}


// 02 - for 문 연습
#include<stdio.h>

int main(void) {
	int i, j;

	for (i = 1; i < 6; i++) {
		for (j = 6; j > 0; j--)
			if (j <= i) printf("%d", j);
			else printf(" ");
		printf("\n");
	}
	return 0;
}


// 03 - 양의 정수까지의 합 구하는 프로그램
#include<stdio.h>

int main(void) {
	int a, i, sum = 0;

	printf("양의 정수를 입력하세요: ");
	scanf("%d", &a);

	if (a < 0) {
		printf("양의 정수를 입력하세요!\n");
		return 0;
	}

	for (i = 1; i <= a; i++)
		sum += i;

	printf("1 부터 %d까지의 합 = %d\n", a, sum);
	return 0;
}


// 04 - 1~100 정수중 2,3,5,7, 배수 제외한 수 한 행에 10개씩 출력
#include<stdio.h>

int main(void) {
	int i, j;

	for(i = 1; i <= 100;) {
		for (j = 0; j < 10; ) {
			if (i > 100) break;
			else if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0 && i % 7 != 0) {
				printf("%d ", i);
				j++;
			}
			i++;
		}
		printf("\n");
	}

	return 0;
}


// 05 - 1부터 100까지 정수 중 소수를 출력하는 프로그램
#include<stdio.h>

int main(void) {
	int i, j, f;

	for (i = 1; i <= 100; i++) {
		f = 1;
		for (j = 2; j < i; j++) {
			if (i % j == 0) {
				f = 0;
				break;
			}
		}
		if (f) printf("%d ", i);
	}

	return 0;
}


// 06 - 중첩 for문이용하여 출력
#include<stdio.h>

int main(void) {
	int i, j;

	for (i = 0; i <= 7; i++) {
		for (j = 7; j >= 0; j--)
			if (j <= i) printf("%d", j);
			else printf(" ");

		for (j = 1; j <= i; j++) 
			printf("%d", j);

		printf("\n");
	}

	return 0;
}


// 07 - do while문 이용하여 특정 수 반대로 출력
#include<stdio.h>

int main(void) {
	int x, i = 1;
	printf("정수를 입력하세요: ");
	scanf("%d", &x);

	do {
		printf("%d의 자리수  = %d\n", i , (x % (i * 10) / i));
		i *= 10;
	} while ((x % (i * 10) / i) != 0);

	return 0;
}


// 08 - y = 3X3 +2X2 + X + 5에서 X가 5~10(0.5씩 증가) 구간의 값 출력
#include<stdio.h>

int main(void) {
	float x, y;
	
	for(x = 5; x <= 10; x += 0.5) {
		y = 3 * 3 * x + 2 * 2 * x + x + 5;
		printf("x = %f, y = %f \n", x, y);
	}

	return 0;
}


// 09 - 예치 기간별 받을 금액 계산(단리)
#include<stdio.h>

int main(void) {
	int a = 1000000, i;

	for (i = 1; i <= 10; i++) 
		printf("%d년차 총 수령액 = %.0f원\n", i, a * (1 + 0.045) * i);
	
	return 0;
}


// 10 - 예치 기간별 받을 금액 계산 (복리)
#include<stdio.h>
#include<math.h>

int main(void) {
	int a = 1000000, i;

	for (i = 1; i <= 10; i++)
		printf("%d년차 총 수령액 = %f원\n", i, a * pow((1 + 0.045), i));

	return 0;
}


// 11 - 9 이하의 정수 입력받아 해당 구구단 출력
#include<stdio.h>

int main(void) {
	int a, i;

	printf("9 이하의 정수를 입력하시오: ");
	scanf("%d", &a);

	if (a > 9) {
		printf("9이하의 정수를 입력하시오: ");
		return 0;
	}

	for (i = 1; i < 10; i++)
		printf("%d X %d = %d\n", a, i, a * i);

	return 0;
}


// 12 - 섭씨온도 화씨온도 변환 (단 섭씨온도 -60~140까지 20씩 증가), 출력은 정수형으로
#include<stdio.h>

int main(void) {
	int i;

	for (i = -60; i <= 140; i += 20)
		printf("%d C는 %d F 입니다.\n", i, (int)(9.0 / 5.0) * i + 32);

	return 0;
}


// 13 - 1 부터 n까지의 합 중 10000을 넘지 않는 가장 큰 합과 그때의 n값 구하기
#include<stdio.h>

int main(void) {
	int i, sum = 0;

	for (i = 1; ; i++) {
		sum += i;
		if (sum > 10000) {
			sum -= i;
			i--;
			break;
		}
	}
	printf("10000을 넘지않은 가장 큰 합 = %d, 이때의 n = %d", sum, i);
	return 0;
}


// 14 - 1 부터 n까지의 곱 중 10000을 넘지 않는 가장 큰 합과 그때의 n값 구하기
#include<stdio.h>

int main(void) {
	int i, mul = 1;

	for (i = 1; ; i++) {
		mul *= i;
		if (mul > 10000) {
			mul /= i;
			i--;
			break;
		}
	}
	printf("10000을 넘지않은 가장 큰 곱 = %d, 이때의 n = %d", mul, i);
	return 0;
}


// 15 - 정수 입력받아 0입력받을 때 까지 32 비트 정보 모두 출력
#include<stdio.h>

int main(void) {
	int x, i;

	while (1) {
		printf("정수를 입력하세요(종료하려면 0 입력): ");
		scanf("%d", &x);

		if (x == 0)
			return 0;

		printf("2진수 출력 = ");
		for (i = 31; i >= 0; i--)
			printf("%d", x >> i & 1);
		printf("\n");
	}

	return 0;
}