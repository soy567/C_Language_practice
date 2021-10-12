// 01 - �迭 ���� ��� (�迭 ������ ���ؼ�)
#include<stdio.h>

int main(void) {
	double degree[] = { -5.34, 3.67, 19.76, 28.76, 35.63 };
	int size, i;
	size = sizeof(degree) / sizeof(double);

	printf("{ ");
	for (i = 0; i < size; i++)
		printf("%lf, ", degree[i]);
	printf("}\n");

	return 0;
}


// 02 - �迭���� ��� ������ ���� ��� 10�� ������Ű�� ���α׷�
#include<stdio.h>

int main(void) {
	int data[] = { 3, 21, 35, 57, 24, 82, 8 }, i;

	for (i = 0; i < sizeof(data) / sizeof(int); i++)
		*(data + i) += 10;

	for (i = 0; i < sizeof(data) / sizeof(int); i++)
		printf("%d ", data[i]);
	printf("\n");
	return 0;
}


// 03 - �� �迭�� ���� �����ϴ� ���α׷�
#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int a[] = { 32, 56, 7, 8, 24 }, b[] = { 3, 21, 35, 57, 24, 82, 8 };
	int size_a, size_b, i;

	size_a = sizeof(a) / sizeof(int);
	size_b = sizeof(b) / sizeof(int);

	int *c = (int *)malloc(sizeof(int) * (size_a + size_b));

	for (i = 0; i <( size_a + size_b);  i++) {
		if (i < size_a)
			c[i] = a[i];
		else
			c[i] = b[i - size_a];
	}

	for (i = 0; i < (size_a + size_b); i++)
		printf("%d ", c[i]);

	free(c);

	return 0;
}


// 04 - ������ �迭 �ʱ�ȭ �� ������ �� ���� ����
#include<stdio.h>

int main(void) {
	int A[3][4] = { {12, 30, 82, 54}, {43, 51, 32, 47}, {30, 42, 41, 69} };
	int i, j;

	for (i = 0; i < 3; i++)
		for (j = 0; j < 4; j++)
			A[i][j] = A[i][j] * 10 + 2;

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++)
			printf("%d ", A[i][j]);
		printf("\n");
	}

	return 0;
}


// 05 - ������ �迭 ���� �� ��� ��� ���α׷�
#include<stdio.h>

int main(void) {
	int a[] = { 4, 7, 9, 3, 6 };
	int b[] = { 10, 20, 30, 40, 50, 60 };
	int i;

	for (i = 0; i < sizeof(a) / sizeof(int); i++)
		b[i] = a[i];

	for (i = 0; i < sizeof(b) / sizeof(int); i++)
		printf("%d ", b[i]);

	return 0;
}


// 06 - ������ �迭 �������� �˻�
#include<stdio.h>

int chk_int_arr(int x[], int y[], int  size_x, int size_y) {
	int i;

	if (size_x != size_y)
		return 0;
	
	for (i = 0; i < size_x; i++)
		if (x[i] != y[i])
			break;
	if (i != size_x)
		return 0;
	
	return 1;
}

int main(void) {
	int a[] = { 4, 7, 9, 3, 6 };
	int b1[] = { 4, 7, 9, 3, 6 };
	int b2[] = { 10, 20, 30, 40, 50 };
	int b3[] = { 4, 7, 9, 3, 7 };
	int res;

	res = chk_int_arr(a, b1, sizeof(a)/ sizeof(int), sizeof (b1) / sizeof(int));
	if (res) printf("�� �迭 a�� b1�� �����ϴ�\n");
	else printf("�� �迭 a�� b1�� �ٸ��ϴ�.\n");

	res = chk_int_arr(a, b2, sizeof(a) / sizeof(int), sizeof(b2) / sizeof(int));
	if (res) printf("�� �迭 a�� b2�� �����ϴ�\n");
	else printf("�� �迭 a�� b2�� �ٸ��ϴ�.\n");

	res = chk_int_arr(a, b3, sizeof(a) / sizeof(int), sizeof(b3) / sizeof(int));
	if (res) printf("�� �迭 a�� b3�� �����ϴ�\n");
	else printf("�� �迭 a�� b3�� �ٸ��ϴ�.\n");
	
	return 0;
}


// 07 - �迭�� �� �հ� ���
#include<stdio.h>

int main(void) {
	float a[] = { 98.56, 78.62, 78.69, 89.32, 95.29 }, sum = 0;
	int i, size;

	size = sizeof(a) / sizeof(float);

	for (i = 0; i < size; i++)
		sum += a[i];

	printf("�迭���� �� �� = %f, ��� = %f", sum, sum / size);
	return 0; 
}


// 08 - 0~9 ������ 20�� �Է¹޾� ���帹�� �Է¹��� ���� �󵵼� ���
#include<stdio.h>

int main(void) {
	int a[20] = { 0 }, b[10] = { 0 }, i, max = 0;

	for (i = 0; i < 20; i++) {
		printf("0~9 ������ ������ �Է��ϼ���(%d ��°): ", i+1);
		scanf("%d", &a[i]);

		if(a[i] < 0 || a[i] > 10) {
			printf("0~9 ������ ������ �Է��ϼ���!\n");
			i--;
			continue;
		}
	}
	for (i = 0; i < 20; i++)
		b[a[i]]++;

	for (i = 1; i < 10; i++)
		if (b[max] < b[i])
			max = i;

	printf("���� ���� �Էµ� �� = %d, �Է�Ƚ�� = %d", max, b[max]);

	return 0;
}


// 09 - ���� ������ �迭 month�� �����ϰ� ��� ���� �Է¹޾� ���� ���� ����ϴ� ���α׷�
#include<stdio.h>

int main(void) {
	int month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int y, m;
	
	printf("��� ���� �������� �����Ͽ� �Է��ϼ���: ");
	scanf("%d %d", &y, &m);

	printf("%d�� %d���� ������ %d�� �Դϴ�.", y, m, month[m - 1]);
	return 0;
}


// 10 - �ݺ��� �̿��� �迭 ���� ����� ���
#include<stdio.h>

int main(void) {
	float a[10] = { 0 };
	int i;

	for (i = 0; i < 10; i++)
		a[i] = (float)1 / ((i + 2) *( i + 3));

	for (i = 0; i < 10; i++)
		printf("%f ", a[i]);

	return 0;
}


// 11 - �� �л��� ���� 2���� �迭�� ���� �� �л��� �հ� ��� ���
#include<stdio.h>

int main(void) {
	int score[5][4] = { {97, 90, 88, 95}, 
										{76, 89,75, 83}, 
										{60, 70, 88, 82}, 
										{83, 89, 92, 85}, 
										{75, 73, 72, 78} };
	int i, j, sum;

	for (i = 0; i < 5; i++) {
		sum = 0;
		for (j = 0; j < 4; j++)
			sum += score[i][j];
		printf("%d�� �л��� �� = %d, ��� = %f\n", i+1, sum, (float)(sum / 4));
	}
	return 0;
}


// 12 - ǥ�� ������ �迭�� �����Ͽ� ��� ���� �� ���ϱ�
#include<stdio.h>

int main(void) {
	int chart[4][4] = { {78, 48, 78, 98},
										{99, 92, 83, 29},
										{29, 64, 83, 89},
										{34, 78, 92, 56} };
	int i, j, sum = 0;

	for (i = 0; i < 4; i++)
		for (j = 0; j < 4; j++)
			sum += chart[i][j];

	printf("��Ʈ�� ���� �� = %d", sum);
	return 0;
}


// 13 - �ΰ��� ������ �迭�� �հ� �� ���ϴ� ���α׷�
#include<stdio.h>

int main(void) {
	int a[4][3] = { {46, 79, 78}, {35, 57, 28}, {43, 68, 76}, {56, 78, 98} };
	int b[4][3] = { {78, 35, 99}, {85, 82, 34}, {58, 69, 29}, {34, 59, 35} };
	int i, j;

	for (i = 0; i < 4; i++)
		for (j = 0; j < 3; j++)
			printf("%d�� %d�� ������ �� = %d, �� = %d\n", i + 1, j + 1, a[i][j] + b[i][j], a[i][j] - b[i][j]);
	return 0;
}


// 14 - �� ����� �� ���ϴ� ���α׷�
#include<stdio.h>

int main(void) {
	int a[3][2] = { {3, 5}, {4, 2}, {5, 7} };
	int b[2][3] = { {3, 8, 2}, {2, 4, 6} };
	int i, j, k, mul;

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			mul = 0;
			for (k = 0; k < 2; k++)
				mul += (a[i][k] * b[k][j]);
			printf("%d ", mul);
		}
		printf("\n");
	}
	return 0;
}


// 15 - �Ľ�Į�� �ﰢ�� ����ϴ� ���α׷� (nCr = n! / (r!(n-r)!) �̿�) 
#include<stdio.h>

int factorial(int n) {
	if (n == 1 || n == 0)
		return 1;
	return n * factorial(n - 1);
}

int main(void) {
	int pascal[10][10] = { 0, }; 
	int i, j;

	for(i = 0; i < 10; i++) {
		for (j = 0; j <= i; j++)
			pascal[i][j] = factorial(i) / (factorial(j) * factorial(i - j)) ;
	}

	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			if (pascal[i][j] == 0)
				printf(" ");
			else printf("%d ", pascal[i][j]);
		}
		printf("\n");
	}

	return 0;
}