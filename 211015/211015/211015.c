/*
// 01 - 1 ~ n까지의 합 구하는 재귀함수 작성
#include<stdio.h>

static int i = 0;

int add_recursion(int n) {
	i++;
	if (n == 1) return 1;
	return n + add_recursion(n - 1);
}

int main(void) {
	int n;

	printf("정수 n을 입력하세요: ");
	scanf("%d", &n);

	printf("1~n까지의 합 = %d\n", add_recursion(n));
	printf("함수 호출 횟수 = % d", i);
	return 0;
}


// 02 - 레지스터 변수의 기본값 출력
#include<stdio.h>

int main(void) {
	register int a;

	printf("레지스터 변수의 기본값 = %d", a);
	return 0;
}


// 03 - 외부 변수 선언하면서 초기값 지정 가능여부 확인
#include<stdio.h>

extern int x = 10;

int main(void) {

	printf("외부 변수 값 = %d", x);
	return 0;
}


// 04 - 가위바위보 게임
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void) {
	int a, b;

	srand(time(NULL));
	printf("가위(0) 바위(1) 보(2) 중에서 하나 입력 -> ");
	scanf("%d", &a);

	if (a > 2 || a < 0) {
		printf("0 ~ 2 사이의 수를 입력하세요!");
		return 0;
	}

	b = rand() % 3;
	
	printf("당신은 ");
	printf("%s", (a == 0) ? "가위" : ((a == 1) ? "바위" : "보"));
	printf("이고, 시스템은 ");
	printf("%s", (b == 0) ? "가위" : ((b == 1) ? "바위" : "보"));
	printf("입니다.\n");
	
	if (a == b) printf("비겼습니다.");
	else {
		if ((a == 0 && b == 2) ||
			(a == 1 && b == 0) ||
			(a == 2 && b == 1))
			printf("당신의 승리입니다.");
		else printf("당신의 패배입니다.");
	}
	return 0;
}


// 05 - 서로 다른 소스파일에서 동일한 변수 이름으로
//      하나의 파일에선 전역변수, 다른 파일에는 정적 전역변수로 사용가능한지 예제 프로그램 작성
#include<stdio.h>

int a = 5;

int main(void) {
	printf("전역변수 a = %d\n", a);
	print_static();
	return 0;
}


// 06 - 1~100사이의 난수 맞추는 프로그램
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int number = 0;
static int min = 1, max = 100;

int setNumber() {
	return rand() % 100 + 1;
}

int printHead() {
	int user;
	printf("1 에서 100 까지의 하나의 정수가 결정되었습니다.\n");
	printf("이 정수를 맞추어 보세요? > ");
	scanf("%d", &user);

	if (user < 1 || user > 100) {
		printf("1 ~ 100의 정수중 하나 입력!");
		return 0;
	}
	return user;
}

int printHigher(int user) {
	printf("맞추어야 할 정수가 입력한 정수 %d 보다 큽니다.\n", user);
	min = user + 1;
	printf("%d에서 %d사이의 정수를 다시 입력하세요. > ", min, max);
	scanf("%d", &user);
	return user;
}

int printLower(int user) {
	printf("맞추어야 할 정수가 입력한 정수 %d 보다 작습니다.\n", user);
	max = user - 1;
	printf("%d에서 %d사이의 정수를 다시 입력하세요. > ", min, max);
	scanf("%d", &user);
	return user;
}

void printAnswer(int user) {
	printf("축하합니다! 정답은 %d 입니다.", user);
}

int main(void) {
	int user, com;

	srand(time(NULL));
	com = setNumber();
	user = printHead();

	while (user != com) {
		if (user > com)
			user = printLower(user);
		else
			user = printHigher(user);
	}
	printAnswer(user);
	
	return 0;
}


// 07 - 1~100사이의 난수 맞추는 프로그램, trycount 이용하여 횟수 출력
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int number = 0;
static int min = 1, max = 100;

int setNumber() {
	return rand() % 100 + 1;
}

int printHead() {
	int user;
	printf("1 에서 100 까지의 하나의 정수가 결정되었습니다.\n");
	printf("이 정수를 맞추어 보세요? > ");
	scanf("%d", &user);

	if (user < 1 || user > 100) {
		printf("1 ~ 100의 정수중 하나 입력!");
		return 0;
	}
	return user;
}

int printHigher(int user) {
	printf("맞추어야 할 정수가 입력한 정수 %d 보다 큽니다.\n", user);
	min = user + 1;
	printf("%d에서 %d사이의 정수를 다시 입력하세요. > ", min, max);
	scanf("%d", &user);
	return user;
}

int printLower(int user) {
	printf("맞추어야 할 정수가 입력한 정수 %d 보다 작습니다.\n", user);
	max = user - 1;
	printf("%d에서 %d사이의 정수를 다시 입력하세요. > ", min, max);
	scanf("%d", &user);
	return user;
}

void printAnswer(int user) {
	printf("축하합니다! 정답은 %d 입니다.", user);
}

int main(void) {
	int user, com, trycount = 1;

	srand(time(NULL));
	com = setNumber();
	user = printHead();

	if (!user) return 0;

	while (user != com) {
		if (trycount >= 5) {
			printf("5회 시도하셨습니다!.");
			return 0;
		}

		if (user > com)
			user = printLower(user);
		else
			user = printHigher(user);
		trycount++;
	}
	printAnswer(user);

	return 0;
}
*/
