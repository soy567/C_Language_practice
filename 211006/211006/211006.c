/*
// 01
#include<stdio.h>

int main(void) {
	int a;

	printf("4�ڸ� ���� �Է�: ");
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


// 02
#include<stdio.h>

int main(void) {
	char c;

	printf("���� �ϳ� �Է�: ");
	c = getchar();

	printf("putchar()�� ��� : ");
	putchar(c);
	printf("\nprintf()�� ���: %c\n", c);

	printf("10���� �ڵ尪 = %d\n", c);
	printf("8���� �ڵ尪 = %o\n", c);
	printf("16���� �ڵ尪 = %x\n", c);

	return 0;
}


// 03
#include<stdio.h>
#define PI 3.141592

int main(void) {
	float r;

	printf("���� ������ �Է�: ");
	scanf("%f", &r);

	printf("���� ������ = %f\n", r);
	printf("���� ���� = %f\n", PI*r*r);
	printf("���� �ѷ� = %f\n", 2 * PI * r);

	return 0;
}


// 04
#include<stdio.h>

int main(void) {
	float temp;

	printf("ȭ�� �µ��� �Է��ϼ���: ");
	scanf("%f", &temp);

	printf("%fF�� �����µ� = %.4f\n", temp, 5.0 / 9.0 * (temp - 32.0));
	return 0;
}


// 05
#include<stdio.h>

int main(void) {
	float temp[3] = { 0 };

	for (int i = 0; i < 3; i++) {
		printf("�����µ��� �Է��ϼ���: ");
		scanf("%f",& temp[i]);
	}

	for (int i = 0; i < 3; i++) 
		printf("%fC�� ȭ���µ� = %.4f\n", temp[i], (9.0 / 5.0) * temp[i] + 32.0);
	
	return 0;
}


// 06
#include<stdio.h>

int main(void) {
	float pyung;
	printf("����Ʈ ���� �Է�(��): ");
	scanf("%f", &pyung);

	printf("%f ���� %f m^2 �Դϴ�", pyung, pyung * 3.305785);

	return 0;
}


// 07
#include<stdio.h>

int main(void) {
	float length;

	printf("���̸� �Է��ϼ���(km): ");
	scanf("%f", &length);

	printf("%fkm�� %fmile �Դϴ�.\n", length, length * 0.621371);
	
	return 0;
}


// 08
#include<stdio.h>

int main(void) {
	char c;

	printf("���ڸ� �ϳ� �Է��ϼ���: ");
	c = getchar();

	printf("�Է��� ����: %c\n", c);
	printf("8���� �ڵ尪 = %o\n", c);
	printf("10���� �ڵ尪 = %d\n", c);
	printf("16���� �ڵ尪 = %x\n", c);

	return 0;
}


// 09
#include<stdio.h>

int main(void) {
	float w, h;

	printf("���� ���� ���� �������� �����Ͽ� �Է�: ");
	scanf("%f %f", &w, &h);

	printf("�簢���� ��� ���� = %12.3f\n", w * h);
	printf("�ﰢ���� ��� ���� = %-12.3f\n", w * h / 2);

	return 0;
}


// 10
#include<stdio.h>

int main(void) {
	int a, b;

	printf("�� ������ �������� �����Ͽ� �Է�: ");
	scanf("%d %d", &a, &b);

	printf("%d + %d = %d\n", a, b, a + b);
	printf("%d,%d�� ��� = %f\n", a, b, (float)(a + b) / 2);

	return 0;
}


// 11
#include<stdio.h>

int main(void) {
	float a, b;

	printf("�� �Ǽ��� �������� �����Ͽ� �Է�: ");
	scanf("%f %f", &a, &b);

	printf("%f + %f = %f\n", a, b, a + b);
	printf("%f, %f�� ��� = %f", a, b, (a + b) / 2);

	return 0;
}



// 12
#include<stdio.h>

int main(void) {
	float a, b;

	printf("�� �Ǽ��� �������� �����Ͽ� �Է�: ");
	scanf("%f %f", &a, &b);

	printf("%f + %f = %d\n", a, b, (int)(a + b));
	printf("%f, %f�� ��� = %d", a, b, (int)(a + b) / 2);

	return 0;
}
*/