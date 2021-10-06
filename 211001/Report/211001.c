/*
// 01 - 문자열 길이 구하는 함수 mystrlen 구현
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

	printf("문자열 입력: ");
	gets(a);

	printf("strlen: %d, mystrlen: %d\n", strlen(a), mystrlen(a));

	return 0;
}


// 02 - 문자열 연결함수 mystrcat 구현
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


// 03 - gets 이용하여 문자열 두개 입력받고 mystrcat 이용하여 연결
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

	printf("첫번째 문자열 입력: ");
	gets(s1);
	printf("두번째 문자열 입력: ");
	gets(s2); 

	res = mystrcat(s1, s2);

	printf("결과: %s\n", res);

	return 0;
}


// 04 - 문자열에서 특정 문자 삭제하는 함수 delchar 구현
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


// 05 - gets와 scanf 이용하여 문자열과 문자 입력받고 delchar 실행
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

	printf("문자열을 입력하세요: ");
	gets(str);

	printf("삭제할 문자를 입력하세요: ");
	scanf("%c", &c);

	delchar(str, c);

	return 0;
}


// 06 - 한 단어 표준입력으로 받아 단어 역순으로 출력하는 프로그램 작성
#include<stdio.h>

int main(void) {
	int cnt = 0, i, j = 0;
	char a[30], res[30];

	printf("한 단어를 입력하세요. -> ");
	gets(a);

	while (a[cnt] != '\0') {
		cnt++;
	}

	for (i = cnt-1; i >= 0; i--) {
		res[j] = a[i];
		j++;
	}
	res[j] = '\0';
	printf("입력한 단어를 반대로 출력합니다. -> %s", res);

	return 0;
}


// 07 - 문자 입력받아 아스키 코드로 출력하는 프로그램
#include<stdio.h>

int main(void) {
	char c;

	printf("문자를 입력하세요: ");
	scanf("%c", &c);

	printf("%c의 아스키 코드: %d\n", c, c);
	return 0;
}


// 08 - 한 줄의 문자열 표준입력으로 입력받아 단어의 문자를 역순으로 출력하는 프로그램
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

	printf("한 줄의 문장을 입력하세요. ->\n");
	gets(str);

	res = strrev(str);
	
	printf("\n입력한 각각의 단어를 반대로 출력합니다. ->\n");
	printf("%s\n", res);

	return 0;
}


// 09 - 여려 줄의 문자열 입력받아 구두점의 수 구하여 출력 (ispunct 사용)
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(void) {
	char str[5][50] = {0};
	int i, j;

	for (i = 0; i < 5; i++) {
		printf("문자열을 입력하세요: ");
		gets(str[i]);
	}

	for (i = 0; i < 5; i++) {
		int cnt = 0;
		for (j = 0; j < strlen(str[i]); j++) {
			if (ispunct(str[i][j]))
				cnt++;
		}
		printf("%d 번 문자열의 구두점 갯수 : %d\n", i, cnt);
	}

	return 0;
}


// 10 - 정수형태 문자열 정수로 반환하는 함수  toint 구현, atoi와 비교
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

	printf("정수를 하나 입력하세요. -> ");
	scanf("%s", a);

	printf("먼저 함수 atoi()를 이용한 정수 -> %d\n", atoi(a));
	printf("직접 구현한 함수를 이용한 정수 -> %d\n", toint(a));

	return 0;
}


// 11 - toint 사용하여 입력된 두 정수를 더한 결과 출력하는 프로그램
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

	printf("두 정수를 공백을 이용해 구분하여 입력: ");
	scanf("%s %s", a, b);

	x = toint(a);
	y = toint(b);

	printf("입력한 두 수의 합 =  %d", x + y);

	return 0;
}


// 12 - 한줄의 문자열 입력받아 대문자는 소문자로, 소문자는 대문자로 변환하여 출력
#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(void) {
	char str[50];
	int i;

	printf("영문 문장을 입력하세요. ->\n");
	gets(str);

	for (i = 0; i < strlen(str); i++) {
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = toupper(str[i]);
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = tolower(str[i]);
	}

	printf("위에서 입력한 문자열에서 대문자와 소문자를 반대로 변환하면 ->\n%s\n", str);
	return 0;
}


// 13 - 여러줄에 원하는 문장 입력받고, 마지막 줄에는 ctrl+Z만 입력하여 입력 종료 (최대 10줄)
//           해당 문장에서 줄마다 모든 단어 추출해 각각 단어의 길이 출력하는 프로그램
//           토큰은 빈칸, 쉼표, 마침표, 느낌표, 탭(\t)로 구분
#include<stdio.h>
#include<string.h>

void printtok(char str[]) {
	char buf[100] = {0};
	int i = 1;

	char* ptr = strtok(str, "\n");
	while (ptr != NULL) {
		strcpy(buf, ptr);
		ptr = strtok(NULL, "\n");

		printf("<< %i줄에 입력한 단어(토큰) 출력 >>\n", i);
	
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

	printf("여러 줄에 원하는 문장을 입력하세요.\n");
	printf("입력이 다 되었으면 새로운 줄 처음에 crtl+Z, 그리고 Enter를 입력하세요.\n");
	
	while (NULL != gets(buf)) {
		strncat(str, buf, strlen(buf));
		str[strlen(str)] = '\n';
	}
	str[strlen(str)] = '\0';
	
	printtok(str);

	return 0;

}
*/

// 14 - 표준입력으로 받은 정수를 그 값을 표현하는 문자열로 출력하는 프로그램(단 정수는 10000 미만)
#include<stdio.h>
#include<locale.h>

int main(void) {
	int a, i, j;

	printf("10000보다 작은 정수 하나를 입력하세요. -> ");
	scanf("%d", &a);

	printf("입력한 정수는 [ ");
	for(i = 10000; i >0; i /= 10) {
		j = (a % i)  / (i / 10);

		if (j == 1) printf("일");
		else if (j == 2)  printf("이");
		else if (j == 3) printf("삼");
		else if (j == 4) printf("사");
		else if (j == 5) printf("오");
		else if (j == 6) printf("육");
		else if (j == 7) printf("칠");
		else if (j == 8) printf("팔");
		else if (j == 9) printf("구");

		if ((i / 10) == 1000) printf("천");
		else if ((i / 10) == 100) printf("백");
		else if ((i / 10) == 10) printf("십");
		else {
			printf(" ]입니다.\n");
			break;
		}
		printf(" ");
	}
	return 0;
}
