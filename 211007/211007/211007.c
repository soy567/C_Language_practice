// 01 - ���� ��Ģ����
#include<stdio.h>

int main(void) {
	int a, b;

	printf("�� ������ �������� �����Ͽ� �Է�: ");
	scanf("%d %d", &a, &b);

	if (a > b) 
		printf("%d / %d = %d ...... %d\n", a, b, (a / b), (a % b));
	else
		printf("%d / %d = %d ...... %d\n", b, a, (b / a), (b % a));

	return 0;
}


// 02 - �Ǽ��� ���� �� ���������� �̿��� ��� ���� ����
#include<stdio.h>

int main(void) {
	float kg;

	printf("���Ը� �Է��ϼ���. (kg): ");
	scanf("%f", &kg);

	printf("%.3fkg�� %.3f �Ŀ�� �Դϴ�. ", kg, kg * 2.20462442);

	return 0;
}


// 03 - �Ǽ� ���� ����(cm -> feet)
#include<stdio.h>

int main(void) {
	float cm;

	printf("���̸� �Է��ϼ���. (cm): ");
	scanf("%f", &cm);

	printf("%.3fcm�� %.3ffeet�Դϴ�. \n", cm, cm * 0.033);

	return 0;
}


// 04 - �Ǽ� ���� ����
#include<stdio.h>

int main(void) {
	float r = 7.58;

	printf("�������� %.3f�� ���� ü�� V = %f\n", r, (4 / 3) * 3.14 * r * r);
	printf("�������� %.3f�� ���� ǥ���� S = %f\n", r, 4 * 3.14 * r * r);

	return 0;
}


// 05 - �Ǽ� ǥ�� �Է°� ���� ����
#include<stdio.h>

int main(void) {
	float r;

	printf("���� �������� �Է��Ͻÿ�: ");
	scanf("%f", &r);

	printf("�������� %.3f�� ���� ü�� V = %f\n", r, (4 / 3) * 3.14 * r * r);
	printf("�������� %.3f�� ���� ǥ���� S = %f\n", r, 4 * 3.14 * r * r);

	return 0;
}


// 06 - õ�� ������ ���� �Է¹޾� ��, õ, ��, ��, �� ������ ���
#include<stdio.h>

int main(void) {
	int a, tmp;

	printf("10000000 ������ ���� �Է��Ͻÿ�: ");
	scanf("%d", &a);

	if(a > 10000000) {
		printf("õ�� ������ ���� �Է��ϼ���!\n");
		return 0;
	}
	
	tmp = a;
	for (int i = 10000; i > 0; i /= 10) {
		if (i == 10000 && tmp / i)
			printf("%d�� ", tmp / i);
		else if (i == 1000 && tmp / i)
			printf("%dõ ", tmp / i);
		else if (i == 100 && tmp / i)
			printf("%d�� ", tmp / i);
		else if (i == 10 && tmp / i)
			printf("%d�� ", tmp / i);
		else if (i == 1 && tmp / i)
			printf("%d", tmp / i);

		tmp = tmp % i;
	}
	printf("�Դϴ�.\n");

	return 0;
}


// 07 - ���ǿ����� �̿��Ͽ� ��ݱ� �Ϲݱ� ����
#include<stdio.h>

int main(void) {
	int month;

	printf("��������� �Է��Ͻʽÿ�: ");
	scanf("%d", &month);

	if (month < 7)
		printf("��ݱ� �Դϴ�.\n");
	else
		printf("�Ϲݱ� �Դϴ�.\n");

	return 0;
}


// 08 - ������ �� �� ���� ū �� ���ϱ�
#include<stdio.h>

int main(void) {
	int a, b, c, max;

	printf("������ ���� �������� �����Ͽ� ���ʷ� �Է��ϼ���: ");
	scanf("%d %d %d", &a, &b, &c);

	if (a > b) {
		if (a > c) max = a;
		else max = c;
	}
	else {
		if (b > c) max = b;
		else max = c;
	}

	printf("���� ū ���� %d �Դϴ�.\n", max);
	
	return 0;
}


// 09 - �Ǽ� ���� �̿��� �� �Ǵ� ���α׷�
#include<stdio.h>

int main(void) {
	float height, weight;

	printf("����� ü���� �������� �����Ͽ� �Է��Ͻÿ�: ");
	scanf("%f %f", &height, &weight);

	if (weight <= ((height - 100) * 0.9))
		printf("�����Դϴ�.\n");
	else
		printf("���Դϴ�.\n");

	return 0;
}


// 10 - ���� ��� ���α׷� (�ܸ�)
#include<stdio.h>

int main(void) {
	int principal = 1000000, year;

	printf("��ġ �Ⱓ�� �Է��ϼ���. (��): ");
	scanf("%d", &year);

	printf("���� �� �� ���ɾ��� %f�� �Դϴ�.\n", principal * (1 + 0.045 * year));

	return 0;
}


// 11 - ���� ��� ���α׷� (����, pow �̿�)
#include<stdio.h>
#include<math.h>

int main(void) {
	int principal = 1000000, year;

	printf("��ġ �Ⱓ�� �Է��ϼ���. (��): ");
	scanf("%d", &year);

	printf("���� �� �� ���ɾ��� %f�� �Դϴ�.\n", pow((1 + 0.045), year)*principal);
	return 0;
}


// 12 - 2���� ��� �߰����� ���ϱ�
#include<stdio.h>

int main(void) {
	float x1 = 3.2, x2 = -8.3, y1 = 4.6, y2 = -2.3;

	printf("(%.1f, %.1f)�� (%.1f, %.1f)�� �߰����� = (%.1f, %.1f)\n", x1, y1, x2, y2, (x1 + x2) / 2, (y1 + y2) / 2);
	return 0;
}


// 13 - �ݾ� �Է¹޾� �ʿ��� ȭ�� ����ϴ� ���α׷�
#include<stdio.h>

int main(void) {
	int a, x = 0;
	

	printf("�ݾ��� �Է��Ͻʽÿ�.(�ּ� õ���̻�): ");
	scanf("%d", &a);

	if (a < 1000) {
		printf("õ�� �̻��� �ݾ��� �Է��ϼ���.\n");
		return 0;
	}

	for (int i = 50000; i >= 1000;  ) {
		printf("%d���� %d��\n", i, a / i);
		a = a % i;

		if (x) i = i / 2;
		else i = i / 5;

		x = !x;
	}
	return 0;
}