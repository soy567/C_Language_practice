// 01 - ��и� ���
#include<stdio.h>

int main(void) {
	int deg;

	printf("������ �Է��ϼ���: ");
	scanf("%d", &deg);

	if (deg %90 == 0) {
		if (deg == 0) printf("���� X��\n");
		else if (deg == 90) printf("���� Y��\n");
		else if (deg == 180) printf("���� X��\n");
		else if (deg == 270) printf("���� Y��\n");

		return 0;
	}

	printf("%d ��и�\n", (deg / 90) + 1);

	return 0;
}


// 02 - �Ǽ� ���� �̿� (���� ���ù� ���)
#include<stdio.h>

int main(void) {
	float x, y;
	int op;

	printf("�� �Ǽ� �Է�: ");
	scanf("%f %f", &x, &y);

	printf("���� ���� ��ȣ���� 1<+>, 2<->, 3<*>, 4></>: ");
	scanf("%d", &op);

	switch (op){
	case 1: printf("%.2f + %.2f = %.2f\n", x, y, x + y); break;
	case 2: printf("%.2f - %.2f = %.2f\n", x, y, x - y); break;
	case 3: printf("%.2f * %.2f = %.2f\n", x, y, x * y); break;
	case 4: printf("%.2f / %.2f = %.2f\n", x, y, x / y); break;
	}
	return 0;
}


// 03 - ����� ������ �̿��� ������ ��� ���α׷�
#include<stdio.h>

int main(void) {
	float height, weight, bmi;

	printf("����� ü���� �������� �����Ͽ� �Է��Ͻÿ�: ");
	scanf("%f %f", &height, &weight);

	bmi = weight / (height * height) * 10000;

	printf("%f\n", bmi);

	if (bmi < 18.5) printf("��ü���Դϴ�.\n");
	else if (bmi >= 18.5 && bmi < 24) printf("�����Դϴ�.\n");
	else if (bmi >= 24 && bmi < 25) printf("��ü���Դϴ�.\n");
	else if (bmi >= 25 && bmi < 30) printf("�浵���Դϴ�.\n");
	else printf("������ ���Դϴ�.\n");

	return 0;
}


// 04 - ����, ����, ������ �̿��� �񸸵� ����ϴ� ���α׷�
#include<stdio.h>

int main(void) {
	float h, w, res;
	int gender;

	printf("������ �Է��ϼ���(1: ����, 2:����): ");
	scanf("%d", &gender);

	printf("Ű�� �����Ը� �������� �����Ͽ� �Է��ϼ���: ");
	scanf("%f %f", &h, &w);

	if (gender == 1)
		res = (w / (h * h * 22) * 10000) * 100;
	else if (gender == 2)
		res = (w / (h * h * 21) * 10000) * 100;

	if (res < 110) printf("����.\n");
	else if (res >= 100 && res < 120) printf("ü�� ����.\n");
	else printf("��.\n");
	
	return 0;
}


// 05 - ���Ƿ� ���� 1~20������ �� ���ߴ� ���α׷�
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void) {
	int r, a;
	srand(time(NULL));
	r = (rand() % 20) + 1;

	 while (1) {
		printf("1~20�� ���ڸ� �Է��ϼ���: ");
		scanf("%d", &a);

		if (a > r) printf("�Է��� ���ڰ� �� Ů�ϴ�.\n");
		else if (a < r) printf("�Է��� ���ڰ� �� �۽��ϴ�.\n");
		else {
			printf("�����Դϴ�!\n");
			break;
		}
	}

	return 0;
}


// 06 - ���ռҵ� �ݾ׿� ���� ���� ����ϴ� ���α׷�
#include<stdio.h>

int main(void) {
	int a, res;

	printf("���ռҵ� �ݾ��� �Է��ϼ���: ");
	scanf("%d", &a);

	if (a <= 1200) res = 6;
	else if (a > 1200 && a <= 4600) res = 15;
	else if (a > 4600 && a <= 8800) res = 24;
	else if (a > 8800 && a <= 300000000) res = 35;
	else res = 38;

	printf("������ %d \% �Դϴ�.\n", res);
	return 0;
}


// 07 - ���ռҵ� �ݾ׿� ���� �����ݾ� ��� ���α׷�
#include<stdio.h>

int main(void) {
	int a, res;

	printf("���ռҵ��� �Է��ϼ���: ");
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

	printf("�����ݾ��� %d�� �Դϴ�.\n", res);
	return 0;
}



// 08 - �Ǽ� �̿��� ����
#include<stdio.h>

int main(void) {
	float x, y;

	printf("�� �Ǽ��� ������ �̿��Ͽ� �Է��ϼ���: ");
	scanf("%f %f", &x, &y);

	printf("%f %f = %f", x, y, x + y);
	return 0;
}


// 09 - �� �Է¹޾� �ش��ϴ� �б� ����ϴ� ���α׷�
#include<stdio.h>

int main(void) {
	int month;

	printf("���� �Է��ϼ���: ");
	scanf("%d", &month);

	if (month >= 1 && month <= 3) printf("1��б�: 1, 2, 3��\n");
	else if (month >= 4 && month <= 6) printf("2��б�: 4, 5, 6��\n");
	else if (month >= 7 && month <= 9) printf("3��б�: 7, 8, 9��\n");
	else printf("4��б�: 10, 11, 12��");

	return 0;
}


// 10 - ���� �Ǵ� ���α׷�
#include<stdio.h>

int main(void) {
	int year;

	printf("������ �Է��ϼ���: ");
	scanf("%d", &year);

	if (year % 4 == 0) {
		if (year % 100 == 0 && year % 400 == 0)
			printf("�����Դϴ�.\n");
		else if (year % 100 == 0) printf("������ �ƴմϴ�.\n");
		else printf("�����Դϴ�.\n");
	}
	else printf("������ �ƴմϴ�.\n");

	return 0;
}


// 11 - ���� ���� ����ϴ� ���α׷� (���� ���)
#include<stdio.h>

int main(void) {
	int year, month, last;

	printf("������ ���� �������� �����Ͽ� �Է��ϼ���: ");
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

	printf("%d�� %d���� ������ %d�� �Դϴ�.\n ", year, month, last);

	return 0;
}


// 12 - �Ǽ��� ���� ó�� ����
#include<stdio.h>

int main(void) {
	float d;
	char x;

	printf("�µ��� ������ �������� �����Ͽ� �Է��ϼ���: ");
	scanf("%f %c", &d, &x);

	if (x == 'C' || x == 'c')
		printf("%f C�� %f F�Դϴ�.\n", d, (9.0 / 5.0) * d + 32);
	else if (x == 'F' || x == 'f')
		printf("%f F�� %f C�Դϴ�.\n", d, (5.0 / 9.0) * (d - 32));

	return 0;
}
