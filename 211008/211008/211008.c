// 01 - 사분면 출력
#include<stdio.h>

int main(void) {
	int deg;

	printf("각도를 입력하세요: ");
	scanf("%d", &deg);

	if (deg %90 == 0) {
		if (deg == 0) printf("양의 X축\n");
		else if (deg == 90) printf("양의 Y축\n");
		else if (deg == 180) printf("음의 X축\n");
		else if (deg == 270) printf("음의 Y축\n");

		return 0;
	}

	printf("%d 사분면\n", (deg / 90) + 1);

	return 0;
}


// 02 - 실수 연산 이용 (조건 선택문 사용)
#include<stdio.h>

int main(void) {
	float x, y;
	int op;

	printf("두 실수 입력: ");
	scanf("%f %f", &x, &y);

	printf("연산 종류 번호선택 1<+>, 2<->, 3<*>, 4></>: ");
	scanf("%d", &op);

	switch (op){
	case 1: printf("%.2f + %.2f = %.2f\n", x, y, x + y); break;
	case 2: printf("%.2f - %.2f = %.2f\n", x, y, x - y); break;
	case 3: printf("%.2f * %.2f = %.2f\n", x, y, x * y); break;
	case 4: printf("%.2f / %.2f = %.2f\n", x, y, x / y); break;
	}
	return 0;
}


// 03 - 신장과 몸무게 이용한 비만정도 출력 프로그램
#include<stdio.h>

int main(void) {
	float height, weight, bmi;

	printf("신장과 체중을 공백으로 구분하여 입력하시오: ");
	scanf("%f %f", &height, &weight);

	bmi = weight / (height * height) * 10000;

	printf("%f\n", bmi);

	if (bmi < 18.5) printf("저체중입니다.\n");
	else if (bmi >= 18.5 && bmi < 24) printf("정상입니다.\n");
	else if (bmi >= 24 && bmi < 25) printf("과체중입니다.\n");
	else if (bmi >= 25 && bmi < 30) printf("경도비만입니다.\n");
	else printf("중증도 비만입니다.\n");

	return 0;
}


// 04 - 성별, 신장, 몸무게 이용해 비만도 출력하는 프로그램
#include<stdio.h>

int main(void) {
	float h, w, res;
	int gender;

	printf("성별을 입력하세요(1: 남자, 2:여자): ");
	scanf("%d", &gender);

	printf("키와 몸무게를 공백으로 구분하여 입력하세요: ");
	scanf("%f %f", &h, &w);

	if (gender == 1)
		res = (w / (h * h * 22) * 10000) * 100;
	else if (gender == 2)
		res = (w / (h * h * 21) * 10000) * 100;

	if (res < 110) printf("정상.\n");
	else if (res >= 100 && res < 120) printf("체중 과다.\n");
	else printf("비만.\n");
	
	return 0;
}


// 05 - 임의로 정한 1~20사이의 수 맞추는 프로그램
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void) {
	int r, a;
	srand(time(NULL));
	r = (rand() % 20) + 1;

	 while (1) {
		printf("1~20중 숫자를 입력하세요: ");
		scanf("%d", &a);

		if (a > r) printf("입력한 숫자가 더 큽니다.\n");
		else if (a < r) printf("입력한 숫자가 더 작습니다.\n");
		else {
			printf("정답입니다!\n");
			break;
		}
	}

	return 0;
}


// 06 - 종합소득 금액에 따라 세율 출력하는 프로그램
#include<stdio.h>

int main(void) {
	int a, res;

	printf("종합소득 금액을 입력하세요: ");
	scanf("%d", &a);

	if (a <= 1200) res = 6;
	else if (a > 1200 && a <= 4600) res = 15;
	else if (a > 4600 && a <= 8800) res = 24;
	else if (a > 8800 && a <= 300000000) res = 35;
	else res = 38;

	printf("세율은 %d \% 입니다.\n", res);
	return 0;
}


// 07 - 종합소득 금액에 따른 과세금액 계산 프로그램
#include<stdio.h>

int main(void) {
	int a, res;

	printf("종합소득을 입력하세요: ");
	scanf("%d", &a);

	if (a <= 12000000)
		res = (a * 0.06);
	else if (a > 12000000 && a <= 46000000)
		res = 720000 + ((a - 12000000) * 0.15);
	else if (a > 46000000 && a <= 88000000)
		res = 5820000 + ((a - 46000000) * 0.24);
	else if (a > 88000000 && a <= 300000000)
		res = 15900000 + ((a - 88000000) * 0.35);
	else
		res = 91000000 + ((a - 300000000) * 0.38);

	printf("과세금액은 %d원 입니다.\n", res);
	return 0;
}



// 08 - 실수 이용한 연산
#include<stdio.h>

int main(void) {
	float x, y;

	printf("두 실수를 공백을 이용하여 입력하세요: ");
	scanf("%f %f", &x, &y);

	printf("%f %f = %f", x, y, x + y);
	return 0;
}


// 09 - 월 입력받아 해당하는 분기 출력하는 프로그램
#include<stdio.h>

int main(void) {
	int month;

	printf("월을 입력하세요: ");
	scanf("%d", &month);

	if (month >= 1 && month <= 3) printf("1사분기: 1, 2, 3월\n");
	else if (month >= 4 && month <= 6) printf("2사분기: 4, 5, 6월\n");
	else if (month >= 7 && month <= 9) printf("3사분기: 7, 8, 9월\n");
	else printf("4사분기: 10, 11, 12월");

	return 0;
}


// 10 - 윤년 판단 프로그램
#include<stdio.h>

int main(void) {
	int year;

	printf("연도를 입력하세요: ");
	scanf("%d", &year);

	if (year % 4 == 0) {
		if (year % 100 == 0 && year % 400 == 0)
			printf("윤년입니다.\n");
		else if (year % 100 == 0) printf("윤년이 아닙니다.\n");
		else printf("윤년입니다.\n");
	}
	else printf("윤년이 아닙니다.\n");

	return 0;
}


// 11 - 월의 말일 출력하는 프로그램 (윤년 고려)
#include<stdio.h>

int main(void) {
	int year, month, last;

	printf("연도와 달을 공백으로 구분하여 입력하세요: ");
	scanf("%d %d", &year, &month);

	switch (month) {
	case 1: last = 31; break;
	case 2: 
		if (year % 4 == 0) {
			if (year % 100 == 0 && year % 400 == 0)
				last = 29;
			else if (year % 100 == 0) last = 28;
			else last = 29;
		}
		else last = 28;
		break;

	case 3: last = 31; break;
	case 4: last = 30; break;
	case 5: last = 31; break;
	case 6: last = 30; break;
	case 7: last = 31; break;
	case 8: last = 31; break;
	case 9: last = 30; break;
	case 10: last = 31; break;
	case 11: last = 30; break;
	case 12: last = 31; break;
	}

	printf("%d년 %d월의 말일은 %d일 입니다.\n ", year, month, last);

	return 0;
}


// 12 - 실수와 문자 처리 연습
#include<stdio.h>

int main(void) {
	float d;
	char x;

	printf("온도와 단위를 공백으로 구분하여 입력하세요: ");
	scanf("%f %c", &d, &x);

	if (x == 'C' || x == 'c')
		printf("%f C는 %f F입니다.\n", d, (9.0 / 5.0) * d + 32);
	else if (x == 'F' || x == 'f')
		printf("%f F는 %f C입니다.\n", d, (5.0 / 9.0) * (d - 32));

	return 0;
}
