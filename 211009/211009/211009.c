// 01- for �� ����
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


// 02 - for �� ����
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


// 03 - ���� ���������� �� ���ϴ� ���α׷�
#include<stdio.h>

int main(void) {
	int a, i, sum = 0;

	printf("���� ������ �Է��ϼ���: ");
	scanf("%d", &a);

	if (a < 0) {
		printf("���� ������ �Է��ϼ���!\n");
		return 0;
	}

	for (i = 1; i <= a; i++)
		sum += i;

	printf("1 ���� %d������ �� = %d\n", a, sum);
	return 0;
}


// 04 - 1~100 ������ 2,3,5,7, ��� ������ �� �� �࿡ 10���� ���
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


// 05 - 1���� 100���� ���� �� �Ҽ��� ����ϴ� ���α׷�
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


// 06 - ��ø for���̿��Ͽ� ���
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


// 07 - do while�� �̿��Ͽ� Ư�� �� �ݴ�� ���
#include<stdio.h>

int main(void) {
	int x, i = 1;
	printf("������ �Է��ϼ���: ");
	scanf("%d", &x);

	do {
		printf("%d�� �ڸ���  = %d\n", i , (x % (i * 10) / i));
		i *= 10;
	} while ((x % (i * 10) / i) != 0);

	return 0;
}


// 08 - y = 3X3 +2X2 + X + 5���� X�� 5~10(0.5�� ����) ������ �� ���
#include<stdio.h>

int main(void) {
	float x, y;
	
	for(x = 5; x <= 10; x += 0.5) {
		y = 3 * 3 * x + 2 * 2 * x + x + 5;
		printf("x = %f, y = %f \n", x, y);
	}

	return 0;
}


// 09 - ��ġ �Ⱓ�� ���� �ݾ� ���(�ܸ�)
#include<stdio.h>

int main(void) {
	int a = 1000000, i;

	for (i = 1; i <= 10; i++) 
		printf("%d���� �� ���ɾ� = %.0f��\n", i, a * (1 + 0.045) * i);
	
	return 0;
}


// 10 - ��ġ �Ⱓ�� ���� �ݾ� ��� (����)
#include<stdio.h>
#include<math.h>

int main(void) {
	int a = 1000000, i;

	for (i = 1; i <= 10; i++)
		printf("%d���� �� ���ɾ� = %f��\n", i, a * pow((1 + 0.045), i));

	return 0;
}


// 11 - 9 ������ ���� �Է¹޾� �ش� ������ ���
#include<stdio.h>

int main(void) {
	int a, i;

	printf("9 ������ ������ �Է��Ͻÿ�: ");
	scanf("%d", &a);

	if (a > 9) {
		printf("9������ ������ �Է��Ͻÿ�: ");
		return 0;
	}

	for (i = 1; i < 10; i++)
		printf("%d X %d = %d\n", a, i, a * i);

	return 0;
}


// 12 - �����µ� ȭ���µ� ��ȯ (�� �����µ� -60~140���� 20�� ����), ����� ����������
#include<stdio.h>

int main(void) {
	int i;

	for (i = -60; i <= 140; i += 20)
		printf("%d C�� %d F �Դϴ�.\n", i, (int)(9.0 / 5.0) * i + 32);

	return 0;
}


// 13 - 1 ���� n������ �� �� 10000�� ���� �ʴ� ���� ū �հ� �׶��� n�� ���ϱ�
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
	printf("10000�� �������� ���� ū �� = %d, �̶��� n = %d", sum, i);
	return 0;
}


// 14 - 1 ���� n������ �� �� 10000�� ���� �ʴ� ���� ū �հ� �׶��� n�� ���ϱ�
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
	printf("10000�� �������� ���� ū �� = %d, �̶��� n = %d", mul, i);
	return 0;
}


// 15 - ���� �Է¹޾� 0�Է¹��� �� ���� 32 ��Ʈ ���� ��� ���
#include<stdio.h>

int main(void) {
	int x, i;

	while (1) {
		printf("������ �Է��ϼ���(�����Ϸ��� 0 �Է�): ");
		scanf("%d", &x);

		if (x == 0)
			return 0;

		printf("2���� ��� = ");
		for (i = 31; i >= 0; i--)
			printf("%d", x >> i & 1);
		printf("\n");
	}

	return 0;
}