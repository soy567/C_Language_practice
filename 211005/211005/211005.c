
// 01 �ε��Ҽ��� Ȯ��
#include<stdio.h>

int main(void) {
	const char c1 = '!', c2 = '@', c3 = '#', c4 = '$', c5 = '^', c6 = '&', c7 = '^';
	const double f1 = 523.45, f2 = 238.34567e3, f3 = 33489.134e-3;
	const char str[50] = "\"C\" ���� ����ִ� \'���α׷��� ���\' �̳׿�.";

	printf("%c %c %c %c %c %c %c\n", c1, c2, c3, c4, c5, c6, c7);
	printf("%.2lf, %E, %E\n",f1, f2, f3);
	printf("%s\n", str);

	return 0;
}

/*
// 02
#include<stdio.h>

int main(void) {

	printf("%d\n", 047);
	printf("%d\n", 0x3df);

	return 0;
}


// 03
#include<stdio.h>

int main(void) {
	printf("���� ����: %f\n", 3.14 * 6.89 * 6.89);
	return 0;
}


// 04
#include<stdio.h>

int main(void) {
	printf("�Ϸ�� %d�� �Դϴ�.", 60 * 60 * 24);
	return 0;
}


// 05
#include<stdio.h>

int main(void) {
	int sec = 60 * 60 * 24;
	printf("�Ϸ�� %d�� �Դϴ�.", sec);
	return 0;
}


// 06
#include<stdio.h>

int main(void) {
	int point1 = 95, point2 = 84;
	int total = point1 + point2;

	printf("%d + %d = %d\n", point1, point2, total);
	return 0;
}


// 07
#include<stdio.h>

int main(void) {
	int point1 = 95, point2 = 84;
	int total = point1 + point2;

	printf("%d + %d = %d\n", point1, point2, total);
	printf("total / 2 = %d\n", total / 2);
	printf("total / 2.0 = %f\n", total / 2.0);
	
	return 0;
}


// 08
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

/*
// 09
#include<stdio.h>
#define PI 3.14

int main(void) {
	float r = 7.58;
	printf("���� ���� = %f\n", PI * r * r);
	printf("���� �ѷ� = %f\n", 2 * PI * r);

	return 0;
}


// 10
#include<stdio.h>
#define PI 3.141592

int main(void) {
	float r = 7.58;
	printf("���� ���� = %f\n", PI * r * r);
	printf("���� �ѷ� = %f\n", 2 * PI * r);

	return 0;
}


// 11
#include<stdio.h>

int main(void) {
	printf("%dF�� �����µ� = %f\n", 10, 5.0 / 9.0 * (10 - 32.0));
	printf("%dF�� �����µ� = %f\n", 50, 5.0 / 9.0 * (50 - 32.0));
	printf("%dF�� �����µ� = %f\n", 80, 5.0 / 9.0 * (80 - 32.0));
	printf("%dF�� �����µ� = %f\n", 100, 5.0 / 9.0 * (100 - 32.0));
}


// 12
#include<stdio.h>

int main(void) {
	printf("%dC�� ȭ���µ� = %f\n", -10,( 9.0 / 5.0) * -10 + 32.0);
	printf("%dC�� ȭ���µ� = %f\n", 5, (9.0 / 5.0) * 5 + 32.0);
	printf("%dC�� ȭ���µ� = %f\n", 15,( 9.0 / 5.0) * 15 + 32.0);
	printf("%dC�� ȭ���µ� = %f\n", 35, (9.0 / 5.0) * 35 + 32.0);
	
	return 0;
}


// 13
#include<stdio.h>

int main(void) {
	printf("\a�����ð��Դϴ�.");
	return 0;
}


// 14
#include<stdio.h>

int main(void) {
	printf("%o�� �ƽ�Ű �ڵ� �� = %d\n", 041, 041);
	printf("%o�� �ƽ�Ű �ڵ� �� = %d\n", 042, 042);
	printf("%o�� �ƽ�Ű �ڵ� �� = %d\n", 043, 043);
	printf("%o�� �ƽ�Ű �ڵ� �� = %d\n", 044, 044);
	printf("%o�� �ƽ�Ű �ڵ� �� = %d\n", 045, 045);

	return 0;
}


// 15
#include<stdio.h>

int main(void) {
	printf("%d���� %f��������(m^2)\n", 18, 18*3.306);
	printf("%d���� %f��������(m^2)\n", 25, 25 * 3.306);
	printf("%d���� %f��������(m^2)\n", 32, 32 * 3.306);
	printf("%d���� %f��������(m^2)\n", 44, 44 * 3.306);
	printf("%d���� %f��������(m^2)\n", 52, 52 * 3.306);

	return 0;
}


// 16
#include<stdio.h>

int main(void) {
	printf("%dkm�� %f����(mile)\n", 60, 60 / 1.609);
	printf("%dkm�� %f����(mile)\n", 80, 80 / 1.609);
	printf("%dkm�� %f����(mile)\n", 100, 100 / 1.609);
	printf("%dkm�� %f����(mile)\n", 120, 120 / 1.609);

	return 0;
}


// 17
#include<stdio.h>

int main(void) {
	printf("8���� �ڵ尪 = %o, 10���� �ڵ尪 = %d, 16���� �ڵ尪 = %x\n", '#', '#', '#');
	printf("8���� �ڵ尪 = %o, 10���� �ڵ尪 = %d, 16���� �ڵ尪 = %x\n", '$', '$', '$');
	printf("8���� �ڵ尪 = %o, 10���� �ڵ尪 = %d, 16���� �ڵ尪 = %x\n", '^', '^', '^');
	printf("8���� �ڵ尪 = %o, 10���� �ڵ尪 = %d, 16���� �ڵ尪 = %x\n", '&', '&', '&');
	printf("8���� �ڵ尪 = %o, 10���� �ڵ尪 = %d, 16���� �ڵ尪 = %x\n", '*', '*', '*');

	return 0;
}


// 18
#include<stdio.h>

int main(void) {
	printf("'A' + 2 = %c\n", 'A' + 2);
	printf("'A' + 5 = %c\n", 'A' + 5);
	printf("'S' - 1 = %c\n", 'S' -1 );
	printf("'S' - 3 = %c\n", 'S' - 3);

	return 0;
}


// 19
#include<stdio.h>

int main(void) {
	float krw = 1000000;

	printf("%.0f���� %f �޷��Դϴ�.\n", krw, krw/1120);

	return 0;
}


// 20
#include<stdio.h>

int main(void) {
	float dist_to_mars = 117900000;
	float dist_to_uranus = 2871000000;

	printf("ȭ���� õ�ռ� ���� �Ÿ� = %fkm\n", dist_to_uranus - dist_to_mars);

	return 0;
}
*/