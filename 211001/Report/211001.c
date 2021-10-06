/*
// 01 - ���ڿ� ���� ���ϴ� �Լ� mystrlen ����
#include<stdio.h>
#include<string.h>

int mystrlen(const char* p) {
	int cnt = 0;
	while (p[cnt] != '\0') {
		cnt++;
	}
	return cnt;
}

int main(void) {
	char a[50];

	printf("���ڿ� �Է�: ");
	gets(a);

	printf("strlen: %d, mystrlen: %d\n", strlen(a), mystrlen(a));

	return 0;
}


// 02 - ���ڿ� �����Լ� mystrcat ����
#include<stdio.h>

void mystrcat(char s1[], const char s2[]) {
	int cnt = 0, i = 0;

	while (s1[cnt] != '\0') {
		cnt++;
	}

	while (s2[i] != '\0') {
		s1[cnt] = s2[i];
		i++;
		cnt++;
	}

	printf("%s\n", s1);
}

int main(void) {
	char s1[50] = "C";

	mystrcat(s1, "programing language");
	return 0;
}


// 03 - gets �̿��Ͽ� ���ڿ� �ΰ� �Է¹ް� mystrcat �̿��Ͽ� ����
#include<stdio.h>

char* mystrcat(char s1[], const char s2[]) {
	int cnt = 0, i = 0;

	while (s1[cnt] != '\0') {
		cnt++;
	}

	while (s2[i] != '\0') {
		s1[cnt] = s2[i];
		i++;
		cnt++;
	}

	s1[cnt] = '\0';

	return s1;
}

int main(void) {
	char s1[50], s2[50];
	char* res;

	printf("ù��° ���ڿ� �Է�: ");
	gets(s1);
	printf("�ι�° ���ڿ� �Է�: ");
	gets(s2); 

	res = mystrcat(s1, s2);

	printf("���: %s\n", res);

	return 0;
}


// 04 - ���ڿ����� Ư�� ���� �����ϴ� �Լ� delchar ����
#include<stdio.h>

void delchar(char str[], const char ch) {
	int i = 0;

	while (str[i] != '\0') {
		if (str[i] == ch) {
			str[i] = ' ';
		}
		i++;
	}
	printf("%s", str);
}

int main(void) {
	char str[20];
	char ch = 'a';

	strcpy(str, "java");
	delchar(str, ch);

	return 0;
}


// 05 - gets�� scanf �̿��Ͽ� ���ڿ��� ���� �Է¹ް� delchar ����
#include<stdio.h>
#include<stdlib.h>

void delchar(char str[], const char ch) {
	int i = 0;

	while (str[i] != '\0') {
		if (str[i] == ch) {
			str[i] = ' ';
		}
		i++;
	}
	printf("%s", str);
}

int main(void) {
	char str[50], c;

	printf("���ڿ��� �Է��ϼ���: ");
	gets(str);

	printf("������ ���ڸ� �Է��ϼ���: ");
	scanf("%c", &c);

	delchar(str, c);

	return 0;
}


// 06 - �� �ܾ� ǥ���Է����� �޾� �ܾ� �������� ����ϴ� ���α׷� �ۼ�
#include<stdio.h>

int main(void) {
	int cnt = 0, i, j = 0;
	char a[30], res[30];

	printf("�� �ܾ �Է��ϼ���. -> ");
	gets(a);

	while (a[cnt] != '\0') {
		cnt++;
	}

	for (i = cnt-1; i >= 0; i--) {
		res[j] = a[i];
		j++;
	}
	res[j] = '\0';
	printf("�Է��� �ܾ �ݴ�� ����մϴ�. -> %s", res);

	return 0;
}


// 07 - ���� �Է¹޾� �ƽ�Ű �ڵ�� ����ϴ� ���α׷�
#include<stdio.h>

int main(void) {
	char c;

	printf("���ڸ� �Է��ϼ���: ");
	scanf("%c", &c);

	printf("%c�� �ƽ�Ű �ڵ�: %d\n", c, c);
	return 0;
}


// 08 - �� ���� ���ڿ� ǥ���Է����� �Է¹޾� �ܾ��� ���ڸ� �������� ����ϴ� ���α׷�
#include<stdio.h>
#include<string.h>

char* strrev(char str[]) {
	char res[100];
	int j = 0;

	char* ptr = strtok(str, " ");
	while (ptr != NULL) {

		for (int i = strlen(ptr)-1 ; i >= 0; i--) {
			res[j] = ptr[i];
			j++;
		}
		res[j] = ' ';
		j++; 

		ptr = strtok(NULL, " ");
	}
	res[j] = '\0';

	return res;
}

int main(void) {
	char str[100], *res;

	printf("�� ���� ������ �Է��ϼ���. ->\n");
	gets(str);

	res = strrev(str);
	
	printf("\n�Է��� ������ �ܾ �ݴ�� ����մϴ�. ->\n");
	printf("%s\n", res);

	return 0;
}


// 09 - ���� ���� ���ڿ� �Է¹޾� �������� �� ���Ͽ� ��� (ispunct ���)
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(void) {
	char str[5][50] = {0};
	int i, j;

	for (i = 0; i < 5; i++) {
		printf("���ڿ��� �Է��ϼ���: ");
		gets(str[i]);
	}

	for (i = 0; i < 5; i++) {
		int cnt = 0;
		for (j = 0; j < strlen(str[i]); j++) {
			if (ispunct(str[i][j]))
				cnt++;
		}
		printf("%d �� ���ڿ��� ������ ���� : %d\n", i, cnt);
	}

	return 0;
}


// 10 - �������� ���ڿ� ������ ��ȯ�ϴ� �Լ�  toint ����, atoi�� ��
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int toint(const char* str) {
	int i, j, res = 0;

	for (i = (strlen(str) - 1), j = 1; i >= 0; i--) {
		res += ((int)str[i] - 48) * j;
		j *= 10;
	}
	return res;
}

int main(void) {
	char a[50];

	printf("������ �ϳ� �Է��ϼ���. -> ");
	scanf("%s", a);

	printf("���� �Լ� atoi()�� �̿��� ���� -> %d\n", atoi(a));
	printf("���� ������ �Լ��� �̿��� ���� -> %d\n", toint(a));

	return 0;
}


// 11 - toint ����Ͽ� �Էµ� �� ������ ���� ��� ����ϴ� ���α׷�
#include<stdio.h>

int toint(const char* str) {
	int i, j, res = 0;

	for (i = (strlen(str) - 1), j = 1; i >= 0; i--) {
		res += ((int)str[i] - 48) * j;
		j *= 10;
	}
	return res;
}

int main(void) {
	char a[10], b[10];
	int x, y;

	printf("�� ������ ������ �̿��� �����Ͽ� �Է�: ");
	scanf("%s %s", a, b);

	x = toint(a);
	y = toint(b);

	printf("�Է��� �� ���� �� =  %d", x + y);

	return 0;
}


// 12 - ������ ���ڿ� �Է¹޾� �빮�ڴ� �ҹ��ڷ�, �ҹ��ڴ� �빮�ڷ� ��ȯ�Ͽ� ���
#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(void) {
	char str[50];
	int i;

	printf("���� ������ �Է��ϼ���. ->\n");
	gets(str);

	for (i = 0; i < strlen(str); i++) {
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = toupper(str[i]);
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = tolower(str[i]);
	}

	printf("������ �Է��� ���ڿ����� �빮�ڿ� �ҹ��ڸ� �ݴ�� ��ȯ�ϸ� ->\n%s\n", str);
	return 0;
}


// 13 - �����ٿ� ���ϴ� ���� �Է¹ް�, ������ �ٿ��� ctrl+Z�� �Է��Ͽ� �Է� ���� (�ִ� 10��)
//           �ش� ���忡�� �ٸ��� ��� �ܾ� ������ ���� �ܾ��� ���� ����ϴ� ���α׷�
//           ��ū�� ��ĭ, ��ǥ, ��ħǥ, ����ǥ, ��(\t)�� ����
#include<stdio.h>
#include<string.h>

void printtok(char str[]) {
	char buf[100] = {0};
	int i = 1;

	char* ptr = strtok(str, "\n");
	while (ptr != NULL) {
		strcpy(buf, ptr);
		ptr = strtok(NULL, "\n");

		printf("<< %i�ٿ� �Է��� �ܾ�(��ū) ��� >>\n", i);
	
		char* ptr2 = strtok(buf, ".,!\t ");
		while (ptr2 != NULL) {	
			printf("strlen(%s) = %d\n", ptr2, strlen(ptr2));
			ptr2 = strtok(NULL, ".,!\t ");
		}
		i++;
	}
}

int main(void) {
	char buf[100], str[3000] = {0};

	printf("���� �ٿ� ���ϴ� ������ �Է��ϼ���.\n");
	printf("�Է��� �� �Ǿ����� ���ο� �� ó���� crtl+Z, �׸��� Enter�� �Է��ϼ���.\n");
	
	while (NULL != gets(buf)) {
		strncat(str, buf, strlen(buf));
		str[strlen(str)] = '\n';
	}
	str[strlen(str)] = '\0';
	
	printtok(str);

	return 0;

}
*/

// 14 - ǥ���Է����� ���� ������ �� ���� ǥ���ϴ� ���ڿ��� ����ϴ� ���α׷�(�� ������ 10000 �̸�)
#include<stdio.h>
#include<locale.h>

int main(void) {
	int a, i, j;

	printf("10000���� ���� ���� �ϳ��� �Է��ϼ���. -> ");
	scanf("%d", &a);

	printf("�Է��� ������ [ ");
	for(i = 10000; i >0; i /= 10) {
		j = (a % i)  / (i / 10);

		if (j == 1) printf("��");
		else if (j == 2)  printf("��");
		else if (j == 3) printf("��");
		else if (j == 4) printf("��");
		else if (j == 5) printf("��");
		else if (j == 6) printf("��");
		else if (j == 7) printf("ĥ");
		else if (j == 8) printf("��");
		else if (j == 9) printf("��");

		if ((i / 10) == 1000) printf("õ");
		else if ((i / 10) == 100) printf("��");
		else if ((i / 10) == 10) printf("��");
		else {
			printf(" ]�Դϴ�.\n");
			break;
		}
		printf(" ");
	}
	return 0;
}
