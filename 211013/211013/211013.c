// 01 - ��ġ ��ġ���� ��ȯ
#include<stdio.h>

int main(void) {
	float inch;

	printf("���̸� �Է��ϼ��� (��ġ): ");
	scanf("%f", &inch);

	printf("%f��ġ�� %fcm �Դϴ�.", inch, inch * 2.54);

	return 0;
}


// 02 - �ΰ��� ���� �Է¹޾� pow �Լ��� �ŵ������� ���ϱ�
#include<stdio.h>
#include<math.h>

int main(void) {
	int m, n;

	printf("m�� n�� �������� �����Ͽ� �Է��Ͻÿ�: ");
	scanf("%d %d", &m, &n);

	printf("%d ^ %d = %d", m, n, (int)pow(m, n));

	return 0;
}


// 03 - ���� ȭ�� ��ȯ �Լ� �ۼ�, ������ (�����µ� 0~100���� 0.5�� ����)
#include<stdio.h>

float c_to_f(float c) {
	float f = (c * (9.0 / 5.0)) + 32;
	return f;
}

int main(void) {
	int i = 0;
	float c = 0;
	
	while (c <= 100) {
		printf("%.2f C�� %.2f F�Դϴ�.\n", c, c_to_f(c));
		c += 0.5;
	}
	return 0;
}


// 04 - ������ ������ �Է¹޾� ���� ū ���� ���
#include<stdio.h>

int main(void) {
	int a, b, c, max;

	printf("�� ���� ������ �������� �����Ͽ� �Է�: ");
	scanf("%d %d %d", &a, &b, &c);

	if(a > b) max = a;
	else {
		if (b > c) max = b;
		else max = c;
	}

	printf("�Է��� ���� �� ���� ū ���� %d �Դϴ�.", max);

	return 0;
}


// 05 - square()�Լ��� cube() �����Ͽ� ���� �Է¹޾� �ټ����� ���ϴ� ���α׷� ����
#include<stdio.h>

int square(int x) {
	return x * x;
}

int cube(int x) {
	return square(x) * x;
}

int main(void) {
	int a;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &a);

	printf("%d�� �ټ����� = %d", a, cube(a) * square(a));
	return 0;
}


// 06 - ������ r �Է¹޾� ���� ������ �ѷ� ���� ���ϴ� ���α׷� �ۼ�
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

	printf("������ r�� �Է��ϼ���: ");
	scanf("%f", &r);

	printf("���� �ѷ� = %f, ���� ���� = %f", circumference(r), area(r));
	return 0;
}


// 07 - �ܸ�, ���� �Լ� ����� ����, ������, �Ⱓ(��) �Է��ϸ� �Ѿ� ����ϴ� ���α׷�
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

	printf("���� ������ �Ⱓ(��)�� �������� �����Ͽ� �Է��Ͻÿ�: ");
	scanf("%d %d %d", &a, &r, &n);

	printf("�ܸ� �Ѿ� = %f, ���� �Ѿ� = %f", simple(a, r, n), compound(a, r, n));
	return 0;
}


// 08 - ���� ������ ���� (��ȸ 7��)
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void) {
	int r, a, i = 0;
	srand(time(NULL));
	r = (rand() % 20) + 1;

	while (1) {

		if (i >= 7) {
			printf("��� ��ȸ�� ���̽��ϴ�.\n");
			break;
		}

		printf("1~20�� ���ڸ� �Է��ϼ���(%d ��°): ", i + 1);
		scanf("%d", &a);

		if (a > r) printf("�Է��� ���ڰ� �� Ů�ϴ�.\n");
		else if (a < r) printf("�Է��� ���ڰ� �� �۽��ϴ�.\n");
		else {
			printf("�����Դϴ�!\n");
			break;
		}
		i++;
	}

	return 0;
}


// 09 - 1���� n���� �� ���ϴ� ����Լ� (20�� ���ڷ� �־� ��� ���)
#include<stdio.h>

int add_recursion(int n) {
	if (n == 1)
		return 1;

	return n + add_recursion(n - 1);
}

int main(void) {
	int a = 20;

	printf("%d���� 1������ �� = %d", a, add_recursion(a));
	return 0;
}


// 10 - �Ǻ���ġ �� ���ϴ� ����Լ� �ۼ�, ó������ 10��° �Ǻ���ġ �� ���� ��� ���
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


// 11 - x�� y�� ���ϴ� ����Լ� �ۼ�, 6�� 0�¿��� 10�±��� ����ϴ� ���α׷� �ۼ�
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


// 12 - �Է¹��� ���� 16 ������ ����ϴ� ����Լ� �ۼ�
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

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &a);

	printf("%d�� 16������ ����ϸ�: ", a);
	tohex(a);

	return 0;
}


// 13 - �ζ� ���� ��÷ ���α׷� (1~45 ���� 6���� ���� �ߺ����� �ʵ��� ����)
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

	printf("������ �ζǹ�ȣ: ");
	for (i = 0; i < 6; i++)
		printf("%d ", num[i]);

	return 0;
}


// 14 - ������ �迭 �����ϴ� �Լ� �ۼ� (void cpoyarray(int from[], int to[], int n))
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


// 15 - ������ �迭�� ��ġ �˻��ϴ� �Լ� �ۼ�
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
		printf("�� �迭�� �����ϴ�.\n");
	else
		printf("�� �迭�� �ٸ��ϴ�.\n");

	return 0;
}