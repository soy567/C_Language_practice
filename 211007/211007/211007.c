// 01 - 정수 사칙연산
#include<stdio.h>

int main(void) {
	int a, b;

	printf("두 정수를 공백으로 구분하여 입력: ");
	scanf("%d %d", &a, &b);

	if (a > b) 
		printf("%d / %d = %d ...... %d\n", a, b, (a / b), (a % b));
	else
		printf("%d / %d = %d ...... %d\n", b, a, (b / a), (b % a));

	return 0;
}


// 02 - 실수형 연산 및 형식지정자 이용한 출력 포맷 설정
#include<stdio.h>

int main(void) {
	float kg;

	printf("무게를 입력하세요. (kg): ");
	scanf("%f", &kg);

	printf("%.3fkg은 %.3f 파운드 입니다. ", kg, kg * 2.20462442);

	return 0;
}


// 03 - 실수 연산 연습(cm -> feet)
#include<stdio.h>

int main(void) {
	float cm;

	printf("길이를 입력하세요. (cm): ");
	scanf("%f", &cm);

	printf("%.3fcm는 %.3ffeet입니다. \n", cm, cm * 0.033);

	return 0;
}


// 04 - 실수 연산 연습
#include<stdio.h>

int main(void) {
	float r = 7.58;

	printf("반지름이 %.3f인 구의 체적 V = %f\n", r, (4 / 3) * 3.14 * r * r);
	printf("반지름이 %.3f인 구의 표면적 S = %f\n", r, 4 * 3.14 * r * r);

	return 0;
}


// 05 - 실수 표준 입력과 연산 연습
#include<stdio.h>

int main(void) {
	float r;

	printf("구의 반지름을 입력하시오: ");
	scanf("%f", &r);

	printf("반지름이 %.3f인 구의 체적 V = %f\n", r, (4 / 3) * 3.14 * r * r);
	printf("반지름이 %.3f인 구의 표면적 S = %f\n", r, 4 * 3.14 * r * r);

	return 0;
}


// 06 - 천만 이하의 정수 입력받아 만, 천, 백, 십, 일 단위로 출력
#include<stdio.h>

int main(void) {
	int a, tmp;

	printf("10000000 이하의 수를 입력하시오: ");
	scanf("%d", &a);

	if(a > 10000000) {
		printf("천만 이하의 수를 입력하세요!\n");
		return 0;
	}
	
	tmp = a;
	for (int i = 10000; i > 0; i /= 10) {
		if (i == 10000 && tmp / i)
			printf("%d만 ", tmp / i);
		else if (i == 1000 && tmp / i)
			printf("%d천 ", tmp / i);
		else if (i == 100 && tmp / i)
			printf("%d백 ", tmp / i);
		else if (i == 10 && tmp / i)
			printf("%d십 ", tmp / i);
		else if (i == 1 && tmp / i)
			printf("%d", tmp / i);

		tmp = tmp % i;
	}
	printf("입니다.\n");

	return 0;
}


// 07 - 조건연산자 이용하여 상반기 하반기 구분
#include<stdio.h>

int main(void) {
	int month;

	printf("몇월달인지 입력하십시오: ");
	scanf("%d", &month);

	if (month < 7)
		printf("상반기 입니다.\n");
	else
		printf("하반기 입니다.\n");

	return 0;
}


// 08 - 세가지 수 중 가장 큰 수 구하기
#include<stdio.h>

int main(void) {
	int a, b, c, max;

	printf("세가지 수를 공백으로 구분하여 차례로 입력하세요: ");
	scanf("%d %d %d", &a, &b, &c);

	if (a > b) {
		if (a > c) max = a;
		else max = c;
	}
	else {
		if (b > c) max = b;
		else max = c;
	}

	printf("가장 큰 수는 %d 입니다.\n", max);
	
	return 0;
}


// 09 - 실수 연산 이용한 비만 판단 프로그램
#include<stdio.h>

int main(void) {
	float height, weight;

	printf("신장과 체중을 공백으로 구분하여 입력하시오: ");
	scanf("%f %f", &height, &weight);

	if (weight <= ((height - 100) * 0.9))
		printf("정상입니다.\n");
	else
		printf("비만입니다.\n");

	return 0;
}


// 10 - 이율 계산 프로그램 (단리)
#include<stdio.h>

int main(void) {
	int principal = 1000000, year;

	printf("예치 기간을 입력하세요. (년): ");
	scanf("%d", &year);

	printf("만기 시 총 수령액은 %f원 입니다.\n", principal * (1 + 0.045 * year));

	return 0;
}


// 11 - 이율 계산 프로그램 (복리, pow 이용)
#include<stdio.h>
#include<math.h>

int main(void) {
	int principal = 1000000, year;

	printf("예치 기간을 입력하세요. (년): ");
	scanf("%d", &year);

	printf("만기 시 총 수령액은 %f원 입니다.\n", pow((1 + 0.045), year)*principal);
	return 0;
}


// 12 - 2차원 평면 중간지점 구하기
#include<stdio.h>

int main(void) {
	float x1 = 3.2, x2 = -8.3, y1 = 4.6, y2 = -2.3;

	printf("(%.1f, %.1f)과 (%.1f, %.1f)의 중간지점 = (%.1f, %.1f)\n", x1, y1, x2, y2, (x1 + x2) / 2, (y1 + y2) / 2);
	return 0;
}


// 13 - 금액 입력받아 필요한 화폐 계산하는 프로그램
#include<stdio.h>

int main(void) {
	int a, x = 0;
	

	printf("금액을 입력하십시오.(최소 천원이상): ");
	scanf("%d", &a);

	if (a < 1000) {
		printf("천원 이상의 금액을 입력하세요.\n");
		return 0;
	}

	for (int i = 50000; i >= 1000;  ) {
		printf("%d원권 %d개\n", i, a / i);
		a = a % i;

		if (x) i = i / 2;
		else i = i / 5;

		x = !x;
	}
	return 0;
}