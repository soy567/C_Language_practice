/*
// 01 - �м� ��Ÿ���� ����ü fraction ���� �� Ȯ��
#include<stdio.h>

struct fraction {
	int n, d;
};

int main(void) {
	struct fraction a;
	
	printf("���ڿ� �и� �������� �����Ͽ� �Է�: ");
	scanf("%d %d", &a.n, &a.d);

	printf("����ü�� �м� �� = %d / %d", a.n, a.d);
	return 0;
}


// 02 - ����ü fraction �̿��Ͽ� �� �м��� �� ���
#include<stdio.h>

struct fraction {
	int n, d;
};

int main(void) {
	struct fraction x, y;
	x.n = 4;
	x.d = 5;
	y.n = 3;
	y.d = 7;

	printf("%d/%d * %d/%d = %d/%d", x.n, x.d, y.n, y.d, x.n * y.n, x.d * y.d);
	return 0;
}


// 03 - ��ȭ����, ������, ����, ���Ϸ� ������ ����ü ����, ������ date����ü ����� ���(�����)
#include<stdio.h>
#include<string.h>

struct date {
	int y, m, d;
};

struct movie {
	char t[50];
	char d[30];
	int a;
	struct date s;
};

int main(void) {
	struct movie m[5] = { {"��", "���ѹ�", 17613000, 2014, 7, 30},
		{"���ϵ�", "�ֵ���", 12983000, 2014, 12, 17},
		{"��������", "���¿�", 14257000, 2014, 12, 17},
		{"��ȭ4", "����4", 111111, 2020, 2, 3},
		{"��ȭ5", "����5", 121312, 2021, 1, 1}};
	int i;

	printf("   ����\t      ����     ������\t ������\n");
	printf("===========================================\n");
	for(i = 0; i < 5; i++)
		printf("[%8s] %8s  %8d   %d.%d.%d\n", m[i].t, m[i].d, m[i].a, m[i].s.y, m[i].s.m, m[i].s.d);
	
	return 0;
}


// 04 - ����ü person����(�̸�, ��ȭ��ȣ, �ּ�), 3�� ���� �Է� �� ���
#include<stdio.h>
#include<string.h>

struct person {
	char name[30];
	char pNum[30];
	char addr[50];
};

int main(void) {
	struct person p[3];
	int i;

	strcpy(p[0].name, "ȫ�浿");
	strcpy(p[1].name, "����ȣ");
	strcpy(p[2].name, "����ȣ");

	strcpy(p[0].pNum, "011-1111-1111");
	strcpy(p[1].pNum, "017-3245-3278");
	strcpy(p[2].pNum, "011-2222-2456");

	strcpy(p[0].addr, "����� ���α� ��ô��");
	strcpy(p[1].addr, "����� ������ ���");
	strcpy(p[2].addr, "��⵵ �Ⱦ�� ��굿");

	printf("�� ��\t �� ȭ �� ȣ\t\t�� ��\n");
	for (i = 0; i < 3; i++) 
		printf("%s\t%s\t%s\n", p[i].name, p[i].pNum, p[i].addr);
	
	return 0;
}


// 05 - ����ü student(�̸�,�й�,�������,�а�,����), 5�� ������ �� �����
#include<stdio.h>

struct student {
	char name[30];
	int num;
	int score;
	char dept[30];
	char course[20];
};

int main(void) {
	struct student s[5] = { {"�̸�1", 1, 70, "�İ�", "��ǻ��"},
		{"�̸�2", 2, 77, "�ż���", "����"},
		{"�̸�3", 3, 80, "ȭ��", "ȭ��"},
		{"�̸�4", 4, 83, "����", "����"},
		{"�̸�5", 5, 100, "���", "���"}};
	int i;

	printf("�̸�\t�й�\t����\t�а�\t����\n");
	for (i = 0; i < 5; i++)
		printf("%s\t%d\t%d\t%s\t%s\n", s[i].name, s[i].num, s[i].score, s[i].dept, s[i].course);
	
	return 0;
}


// 06 - ����ü professor ����(���������� person�̿�), ������, �а�
#include<stdio.h>

struct person {
	char name[30];
	char pNum[30];
	char addr[50];
};

struct professor {
	struct person info;
	char dept[20];
	char course[2][100];
};

int main(void) {
	struct professor p[5] = { {"������", "011-3333-2456", "��õ������ ������", "�����", {"��ǻ�� ����","���α׷���"}},
		{"������", "016-3467-4389", "����� ������ ���", "�����", {"����ȸȭ","����"}},
		{"�ſ���", "017-2222-2456", "��⵵ �ϻ�� ȭ�", "�����", {"���ʼ���","�̻����"}},
		{"����4", "011-3333-2456", "��õ������ ������", "�����", {"��ǻ�� ����","�ڹ�"}},
		{"����5", "011-3333-2456", "��õ������ �ݰ", "��Ű�", {"��ǻ�� ����","���̽�"}}};
	int i;
	
	printf("�̸�\t��ȭ��ȣ\t�� ��\t\t\t�� ��\t�� ��\t\t�� ��\n\n");
	for (i = 0; i < 5; i++) {
		printf("%s\t%s\t%10s\t%s\t%s\t%s\n", p[i].info.name, p[i].info.pNum, p[i].info.addr, p[i].dept, p[i].course[0], p[i].course[1]);
	}

	return 0;
}


// 07 - ����ü student����, �л� 5�� ���� �� �����(person ����ü ���)
#include<stdio.h>

struct person {
	char name[30];
	char pNum[30];
	char addr[50];
};

struct professor {
	struct person info;
};

struct student {
	struct person info;
	int num;
	char dept[20];
	char course[100];
	struct professor pName;
};


int main(void) {
	struct student p[5] = { {"�л�1", "011-3333-2456", "��õ������ ������", 1, "�����", "��ǻ��", "����1"},
		{"�л�2", "016-3467-4389", "����� ������ ���", 2, "�����", "����", "����2" },
		{"�л�3", "017-2222-2456", "��⵵ �ϻ�� ȭ�", 3, "�����", "����","����3"},
		{"�л�4", "011-3333-2456", "��õ������ ������", 4, "�����", "��ǻ��","����4" },
		{"�л�5", "011-3333-2456", "��õ������ �ݰ", 5, "��Ű�", "��ǻ��","����5"} };

	int i;

	printf("�̸�\t��ȭ��ȣ\t�� ��\t\t\t�� ��\t�� ��\t�� ��\t���� ����\n\n");
	for (i = 0; i < 5; i++) 
		printf("%s\t%s\t%10s\t%d\t%s\t%s\t%s\n", p[i].info.name, p[i].info.pNum, p[i].info.addr, p[i].num, p[i].dept, p[i].course, p[i].pName.info.name);
	
	return 0;
}


// 08 - ����ü car(���,����,�������), �ڵ��� 2�� ���� �����
#include<stdio.h>

struct car {
	char year[10];
	char type[30];
	char master[50];
};

int main(void) {
	struct car c[2] = { {"2012 09", "�׷��� GT", "����� ���α� ��ô��"},
		{"2013 04", "���Ǵ�Ƽ", "���Ǵ�Ƽ �Ͻ�"}};
	int i;

	printf("�� ��\t �� ��\t\t�� ��\n\n");
	for (i = 0; i < 2; i++)
		printf("%s\t %s\t%s\n", c[i].year, c[i].type, c[i].master);

	return 0;
}


// 09 - ����ü employee ����, ���� 4�� ����, �����
#include<stdio.h>

struct person {
	char name[30];
	char pNum[30];
	char addr[50];
};

struct employee {
	int num;
	struct person info;
	int pay;
	int in;
};

int main(void) {
	struct employee e[4] = {{ 20123478, "������", "011-1111-1111", "����� ���α� ��ô��", 1200000, 120 },
		{ 20123479, "���ڰ�", "011-2222-2456", "��⵵ �Ⱦ�� ��굿", 1500000, 150 },
		{ 20123480, "������", "011-3333-2456", "��õ������ ������", 1800000, 180 },
		{ 20123481, "���¿�", "017-2222-2456", "��⵵ �ϻ�� ȭ�", 2200000, 250 }};
	int i;

	printf("�� ��\t  �� ��\t  �� ȭ �� ȣ\t�� ��\t\t\t �� ��\t�μ�Ƽ��\t�� ��\n\n");
	for (i = 0; i < 4; i++)
		printf("%d  %s %s\t%10s\t%d\t %-d%%\t    %.1f\n", e[i].num, e[i].info.name, e[i].info.pNum, e[i].info.addr, e[i].pay, e[i].in, (float)e[i].pay * (12 + e[i].in));
	
	return 0;
}


// 10 - ����ü ���Ҽ� ���� +,-,* �� ���밪 ���ϴ� �Լ� ����
#include<stdio.h>
#include<math.h>

typedef struct complex_num {
	float real, img;
} comp;

comp add_complex(comp a, comp b){
	comp tmp = {a.real + b.real, a.img + b.img};
	return tmp;
}

comp sub_complex(comp a, comp b) {
	comp tmp = { a.real - b.real, a.img - b.img };
	return tmp;
}

comp mul_complex(comp a, comp b) {
	comp tmp = { a.real*b.real - a.img*b.img, a.real*b.img + b.real*a.img};
	return tmp;
}

float abs_complex(comp a) {
	float tmp = { sqrt(pow(a.real, 2) + pow(a.img, 2))};
	return tmp;
}

float abs_float(float x) {
	return (x < 0) ? x * -1 : x;
}

int main(void) {
	comp a = { 4.5, 5.6 }, b = {-3.7, -5.5}, add, sub, mul;

	add = add_complex(a, b);
	sub = sub_complex(a, b);
	mul = mul_complex(a, b);

	printf("�� �� ( %.2f %c %.2fi ) + ( %.2f %c %.2fi ) = ( %.2f %c %.2fi )\n", a.real, (a.img > 0) ? '+' : '-', abs_float(a.img), b.real, (b.img > 0) ? '+' : '-', abs_float(b.img), add.real, (add.img > 0) ? '+' : '-', abs_float(add.img));
	printf("�� �� ( %.2f %c %.2fi ) + ( %.2f %c %.2fi ) = ( %.2f %c %.2fi )\n", a.real, (a.img > 0) ? '+' : '-', abs_float(a.img), b.real, (b.img > 0) ? '+' : '-', abs_float(b.img), sub.real, (sub.img > 0) ? '+' : '-', abs_float(sub.img));
	printf("�� �� ( %.2f %c %.2fi ) + ( %.2f %c %.2fi ) = ( %.2f %c %.2fi )\n", a.real, (a.img > 0) ? '+' : '-', abs_float(a.img), b.real, (b.img > 0) ? '+' : '-', abs_float(b.img), mul.real, (mul.img > 0) ? '+' : '-', abs_float(mul.img));
	printf("���� �� |( %.2f %c %.2fi )| =  %.3f   |( %.2f %c %.2fi )| =  %.3f", a.real, (a.img > 0) ? '+' : '-', abs_float(a.img), abs_complex(a), b.real, (b.img > 0) ? '+' : '-', abs_float(b.img), abs_complex(b));

	return 0; 
}


// 11 - ����ü, ������ �̿��Ͽ� �ִ� 7���� 7���� ī�� �����ִ� ���α׷� �ۼ�
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<wchar.h>
#include<locale.h>

typedef enum cardtype { hearts, diamonds, clubs, spades } cardtype;
typedef enum cardnum {ace =1, deuce, three, four, five, six, seven, eight, nine, ten, jack, queen, king} cardnum;

char *type_str[] = { "Hearts", "Diamonds", "Clubs", "Spades" };

typedef struct card {
	cardtype type;
	cardnum num;
} card;

void setcard(card set[]) {
	int i;
	for (i = 0; i < 52; i++) {
		set[i].type = i / 13;
		set[i].num = i % 13;
	}
}

void shuffle(card set[]) {
	int i, j;
	card temp;

	srand(time(NULL));
	for (i = 0; i < 52; i++) {
		j = rand() % 52;
		temp = set[i];
		set[i] = set[j];
		set[j] = temp;
	}
}

void deal(card set[], int cnt) {
	int i, j, t = 7 * cnt;

	for (i = 0; i < cnt; i++)
		printf("     ��� %d\t\t", i + 1);
	printf("\n");

	for (i = 0; i < t; ) {
		for (j = 0; j < cnt; j++, i++) {
			printf("%3d of ", set[i].num);
			switch (set[i].type) {
			case 0: wprintf(L"%lc", L'��'); break;
			case 1: wprintf(L"%lc", L'��'); break;
			case 2: wprintf(L"%lc", L'��'); break;
			case 3: wprintf(L"%lc", L'��'); break;
			}
			printf("(%s)\t", type_str[set[i].type]);
		}
		printf("\n");
	}
}

int main(void) {
	card set[52];
	int cnt;

	setlocale(LC_CTYPE, "");
	printf("ī�� ���ӿ� �� ����� �����մϱ�? >> ");
	scanf("%d", &cnt);

	if (cnt > 7) {
		printf("�ִ� 7����� ���� �����մϴ�.");
		return 0;
	}

	setcard(set);
	shuffle(set);
	deal(set, cnt);

	return 0;
}


// 12 - ���� ī����ӿ��� �� �������� 7���� ī�� �����Ͽ� �� ī�� ������ ��Ʈ����Ʈ���� �˻� �� ��� ���
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<wchar.h>
#include<locale.h>

typedef enum cardtype { hearts, diamonds, clubs, spades } cardtype;
typedef enum cardnum { ace = 1, deuce, three, four, five, six, seven, eight, nine, ten, jack, queen, king } cardnum;

char* type_str[] = { "Hearts", "Diamonds", "Clubs", "Spades" };

typedef struct card {
	cardtype type;
	cardnum num;
} card;

void setcard(card set[]) {
	int i;
	for (i = 0; i < 52; i++) {
		set[i].type = i / 13;
		set[i].num = (i % 13) + 1;
	}
}

void sortset(card set[]) {
	int i, j, p, min;
	card temp;

	for (i = 0; i < 6; i++) {
		min = set[i].num;
		p = i;
		
		for (j = i + 1; j < 7; j++) {
			if (set[j].num < min) {
				min = set[j].num;
				p = j;
			}
		}
		if (p != i) {
			temp = set[i];
			set[i] = set[p];
			set[p] = temp;
		}
	}
}

void shuffle(card set[]) {
	int i, j;
	card temp;

	srand(time(NULL));
	for (i = 0; i < 52; i++) {
		j = rand() % 52;
		temp = set[i];
		set[i] = set[j];
		set[j] = temp;
	}
}

void setuser(card set[], card user[][7], int cnt) {
	int i, j, k, t = 7*cnt;
	for (i = 0, k = 0; i < t; k++) 
		for (j = 0; j < cnt; j++, i++) {
			user[j][k].type = set[i].type;
			user[j][k].num = set[i].num;
		}	
}

void printset(card set[]) {
	int i, j, t ;

	printf("ī�� ���\n");
	for (i = 0; i < 7; i++) {
		printf("%3d of ", set[i].num);
		switch (set[i].type) {
		case 0: wprintf(L"%lc", L'��'); break;
		case 1: wprintf(L"%lc", L'��'); break;
		case 2: wprintf(L"%lc", L'��'); break;
		case 3: wprintf(L"%lc", L'��'); break;
		}
		printf("(%s)\n", type_str[set[i].type]);
	}
}

int chk_straight(card set[]) {
	int i, cnt, pre;
	sortset(set);

	for (cnt = 0, i = 0; i < 7; i++) {
		if (cnt == 5) break;

		if ((cnt == 0 || cnt == 4) && set[i].num == 1) {
			
			cnt++;
		}
		else if (cnt == 0) cnt++;
		else if (set[i-1].num + 1 == set[i].num) cnt++;
		else cnt = 0;
	}
	
	if (cnt == 5) return 1;
	
	return 0;
}


int main(void) {
	card set[52];
	card user[7][7];
	int cnt, res;

	setlocale(LC_CTYPE, "");
	printf("ī�� ���ӿ� �� ����� �����մϱ�? >> ");
	scanf("%d", &cnt);

	if (cnt > 7) {
		printf("�ִ� 7����� ���� �����մϴ�.");
		return 0;
	}

	setcard(set);

	
	do {
		shuffle(set);
		setuser(set, user, cnt);
	} while (!chk_straight(user[0]));
	printset(user[0]);
	printf("Straight");

	return 0;
}


// 13 - �÷��� �˻��Լ� �ۼ��ϰ� �÷��� ���� �� ���� �ۼ�
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<wchar.h>
#include<locale.h>

typedef enum cardtype { hearts, diamonds, clubs, spades } cardtype;
typedef enum cardnum { ace = 1, deuce, three, four, five, six, seven, eight, nine, ten, jack, queen, king } cardnum;

char* type_str[] = { "Hearts", "Diamonds", "Clubs", "Spades" };

typedef struct card {
	cardtype type;
	cardnum num;
} card;

void setcard(card set[]) {
	int i;
	for (i = 0; i < 52; i++) {
		set[i].type = i / 13;
		set[i].num = (i % 13) + 1;
	}
}

void sortset(card set[]) {
	int i, j, p, min;
	card temp;

	for (i = 0; i < 6; i++) {
		min = set[i].num;
		p = i;

		for (j = i + 1; j < 7; j++) {
			if (set[j].num < min) {
				min = set[j].num;
				p = j;
			}
		}
		if (p != i) {
			temp = set[i];
			set[i] = set[p];
			set[p] = temp;
		}
	}
}

void shuffle(card set[]) {
	int i, j;
	card temp;

	srand(time(NULL));
	for (i = 0; i < 52; i++) {
		j = rand() % 52;
		temp = set[i];
		set[i] = set[j];
		set[j] = temp;
	}
}

void setuser(card set[], card user[][7], int cnt) {
	int i, j, k, t = 7 * cnt;
	for (i = 0, k = 0; i < t; k++)
		for (j = 0; j < cnt; j++, i++) {
			user[j][k].type = set[i].type;
			user[j][k].num = set[i].num;
		}
}

void printset(card set[]) {
	int i, j, t;

	printf("ī�� ���\n");
	for (i = 0; i < 7; i++) {
		printf("%3d of ", set[i].num);
		switch (set[i].type) {
		case 0: wprintf(L"%lc", L'��'); break;
		case 1: wprintf(L"%lc", L'��'); break;
		case 2: wprintf(L"%lc", L'��'); break;
		case 3: wprintf(L"%lc", L'��'); break;
		}
		printf("(%s)\n", type_str[set[i].type]);
	}
}

int chk_flush(card set[]) {
	int i, cnt[4] = { 0 };
	
	sortset(set);

	for (i = 0; i < 7; i++)
		cnt[set[i].type]++;

	for (i = 0; i < 4; i++)
		if (cnt[i] >= 5) return i;

	return 0;
}


int main(void) {
	card set[52];
	card user[7][7];
	int cnt, res;

	setlocale(LC_CTYPE, "");
	printf("ī�� ���ӿ� �� ����� �����մϱ�? >> ");
	scanf("%d", &cnt);

	if (cnt > 7) {
		printf("�ִ� 7����� ���� �����մϴ�.");
		return 0;
	}

	setcard(set);


	do {
		shuffle(set);
		setuser(set, user, cnt);
	} while (!chk_flush(user[0]));
	printset(user[0]);
	printf("Flush");

	return 0;
}


// 14 - Ǯ�Ͽ콺���� �˻��ϴ� �Լ� �ۼ��ϰ� �ùķ��̼�
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<wchar.h>
#include<locale.h>

typedef enum cardtype { hearts, diamonds, clubs, spades } cardtype;
typedef enum cardnum { ace = 1, deuce, three, four, five, six, seven, eight, nine, ten, jack, queen, king } cardnum;

char* type_str[] = { "Hearts", "Diamonds", "Clubs", "Spades" };

typedef struct card {
	cardtype type;
	cardnum num;
} card;

void setcard(card set[]) {
	int i;
	for (i = 0; i < 52; i++) {
		set[i].type = i / 13;
		set[i].num = (i % 13) + 1;
	}
}

void sortset(card set[]) {
	int i, j, p, min;
	card temp;

	for (i = 0; i < 6; i++) {
		min = set[i].num;
		p = i;

		for (j = i + 1; j < 7; j++) {
			if (set[j].num < min) {
				min = set[j].num;
				p = j;
			}
		}
		if (p != i) {
			temp = set[i];
			set[i] = set[p];
			set[p] = temp;
		}
	}
}

void shuffle(card set[]) {
	int i, j;
	card temp;

	srand(time(NULL));
	for (i = 0; i < 52; i++) {
		j = rand() % 52;
		temp = set[i];
		set[i] = set[j];
		set[j] = temp;
	}
}

void setuser(card set[], card user[][7], int cnt) {
	int i, j, k, t = 7 * cnt;
	for (i = 0, k = 0; i < t; k++)
		for (j = 0; j < cnt; j++, i++) {
			user[j][k].type = set[i].type;
			user[j][k].num = set[i].num;
		}
}

void printset(card set[]) {
	int i, j, t;

	printf("ī�� ���\n");
	for (i = 0; i < 7; i++) {
		printf("%3d of ", set[i].num);
		switch (set[i].type) {
		case 0: wprintf(L"%lc", L'��'); break;
		case 1: wprintf(L"%lc", L'��'); break;
		case 2: wprintf(L"%lc", L'��'); break;
		case 3: wprintf(L"%lc", L'��'); break;
		}
		printf("(%s)\n", type_str[set[i].type]);
	}
}

char* chk_setnum(card set[]) {
	int i, cnt[14] = { 0 };

	for (i = 0; i < 7; i++)
		cnt[set[i].num]++;

	return cnt;
}

int chk_fullhouse(card set[]) {
	int* cnt, i, p = 0, t = 0;
	sortset(set);
	cnt = chk_setnum(set);

	for (i = 1; i < 14; i++) {
		if (p && t) break;
		else if (cnt[i] == 2) p++;
		else if (cnt[i] == 3) t++;
	}

	if (p && t) return 1;
	
	return 0;
}

int main(void) {
	card set[52];
	card user[7][7];
	int cnt, res;

	setlocale(LC_CTYPE, "");
	printf("ī�� ���ӿ� �� ����� �����մϱ�? >> ");
	scanf("%d", &cnt);

	if (cnt > 7) {
		printf("�ִ� 7����� ���� �����մϴ�.");
		return 0;
	}

	setcard(set);
	do {
		shuffle(set);
		setuser(set, user, cnt);
	} while (!chk_fullhouse(user[0]));
	printset(user[0]);
	printf("Full House");

	return 0;
}
*/

// 15 - ��Ŀ ���� �����(5���� 7�徿 ����������)
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<wchar.h>
#include<locale.h>

typedef enum cardtype { hearts, diamonds, clubs, spades } cardtype;
typedef enum cardnum { ace = 1, deuce, three, four, five, six, seven, eight, nine, ten, jack, queen, king } cardnum;

char* type_str[] = { "Hearts", "Diamonds", "Clubs", "Spades" };
char* rank_str[] = { "Straight Flush", "Four Card", "Full House", "Flush", "Straight", "Triple", "Two Pair", "One Pair", "None"};

typedef struct card {
	cardtype type;
	cardnum num;
} card;

void setcard(card set[]) {
	int i;
	for (i = 0; i < 52; i++) {
		set[i].type = i / 13;
		set[i].num = (i % 13) + 1;
	}
}

void sortset(card set[]) {
	int i, j, p, min;
	card temp;

	for (i = 0; i < 6; i++) {
		min = set[i].num;
		p = i;

		for (j = i + 1; j < 7; j++) 
			if (set[j].num < min) {
				min = set[j].num;
				p = j;
			}
		
		if (p != i) {
			temp = set[i];
			set[i] = set[p];
			set[p] = temp;
		}
	}
}

void shuffle(card set[]) {
	int i, j;
	card temp;

	srand(time(NULL));
	for (i = 0; i < 52; i++) {
		j = rand() % 52;
		temp = set[i];
		set[i] = set[j];
		set[j] = temp;
	}
}

void setuser(card set[], card user[][7], int cnt) {
	int i, j, k, t = 7 * cnt;
	for (i = 0, k = 0; i < t; k++)
		for (j = 0; j < cnt; j++, i++) {
			user[j][k].type = set[i].type;
			user[j][k].num = set[i].num;
		}
}

void printset(card user[][7], int cnt) {
	int i, j;

	for (i = 0; i < cnt; i++)
		printf("    gamer[%d]\t", i + 1);
	printf("\n");

	for (i = 0; i < 7; i++) {
		for (j = 0; j < cnt; j++) {
			printf("%3d", user[j][i].num);
			switch (user[j][i].type) {
			case 0: wprintf(L"%lc", L'��'); break;
			case 1: wprintf(L"%lc", L'��'); break;
			case 2: wprintf(L"%lc", L'��'); break;
			case 3: wprintf(L"%lc", L'��'); break;
			}
			printf("(%s)\t", type_str[user[j][i].type]);
		}
		printf("\n");
	}
}

char* chk_setnum(card set[]) {
	int i, cnt[14] = { 0 };

	for (i = 0; i < 7; i++)
		cnt[set[i].num]++;

	return cnt;
}

int chk_pair(card set[]) {
	int* cnt, i, p = 0;
	cnt = chk_setnum(set);

	for (i = 1; i < 14; i++)
		if (cnt[i] == 2) p++;
	return p;
}

int chk_triple(card set[]) {
	int* cnt, i, t = 0;
	cnt = chk_setnum(set);

	for(i = 1; i < 14; i++)
		if (cnt[i] == 3) {
			t = 1;
			break;
		}
	return t;
}

int chk_straight(card set[]) {
	int i, cnt, pre;
	sortset(set);

	for (cnt = 0, i = 0; i < 7; i++) {
		if (cnt == 5) break;
		if ((cnt == 0 || cnt == 4) && set[i].num == 1) cnt++;
		else if (cnt == 0) cnt++;
		else if (set[i - 1].num + 1 == set[i].num) cnt++;
		else cnt = 0;
	}
	if (cnt == 5) return 1;
	return 0;
}

int chk_flush(card set[]) {
	int i, cnt[4] = { 0 };

	sortset(set);
	for (i = 0; i < 7; i++)
		cnt[set[i].type]++;

	for (i = 0; i < 4; i++)
		if (cnt[i] >= 5) return i;

	return 0;
}

int chk_fullhouse(card set[]) {
	int* cnt, i, p = 0, t = 0;
	sortset(set);
	cnt = chk_setnum(set);

	for (i = 1; i < 14; i++) {
		if (p && t) break;
		else if (cnt[i] == 2) p++;
		else if (cnt[i] == 3) t++;
	}
	return (p && t);
}

int chk_fourcard(card set[]) {
	int* cnt, i, f = 0;
	cnt = chk_setnum(set);

	for(i = 1; i < 14; i++)
		if (cnt[i] == 4) {
			f = 1;
			break;
		}
	return f;
}

int chk_straight_flush(card set[]) {
	int s = 0, f = 0;
	s = chk_straight(set);
	f = chk_flush(set);
	return (s && f);
}

int chk_rank(card set[]) {
	int p = 0;

	if (chk_straight_flush(set)) return 0;
	else if (chk_flush(set)) return 1;
	else if (chk_fullhouse(set)) return 2;
	else if (chk_flush(set)) return 3;
	else if (chk_straight(set)) return 4;
	else if (chk_triple(set)) return 5;
	else { 
		p = chk_pair(set);
		if (p >= 2) return 6;
		else if (p == 1) return 7;
	}
	return 8;
	
	return 9;
}

void print_res(int rank[], int cnt) {
	int p, r, i;

	printf("\n");
	for(i = 0; i < cnt; i++) {
		if (i == 0) p = 0; 
		else if (rank[i] < rank[p]) p = i;

		printf("gamer%d : rank = % s\n", i + 1, rank_str[rank[i]]);
	}
	printf("\n     The winner is gamer%d by rank of %s", p + 1, rank_str[rank[p]]);
}

int main(void) {
	card set[52];
	card user[5][7];
	int cnt = 5, rank[5] = { 0 }, i;

	setlocale(LC_CTYPE, "");

	setcard(set);
	shuffle(set);
	setuser(set, user, cnt);
	printset(user, cnt);

	for(i = 0; i < 5; i++)
		rank[i] = chk_rank(user[i]);

	print_res(rank, cnt);

	return 0;
}