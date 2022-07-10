#include <stdio.h>

int main(void) {
		//144p 종합문제 4
	/*
		사용자로부터 피연산자와 연산자를 입력받아 연산 결과를 출력하는 프로그램 작성
	*/
	int num1, num2;
	char cal;

	printf("피연산자 1 : ");
	scanf_s("%d", &num1);
	printf("연산자 : ");
	scanf_s(" %c", &cal);
	printf("피연산자 2 : ");
	scanf_s("%d", &num2);

	if (cal == '+') {
		printf("%d + %d = %d", num1, num2, num1 + num2);
	}
	else if (cal == '-') {
		printf("%d - %d = %d", num1, num2, num1 - num2);
	}
	else if (cal == '*') {
		printf("%d * %d = %d", num1, num2, num1 * num2);
	}
	else if (cal == '/') {
		printf("%d / %d = %d", num1, num2, num1 / num2);
	}
	else if (cal == '%') {
		printf("%d %% %d = %d", num1, num2, num1 % num2);
	}
	else {
		printf("잘못된 연산자 입력");
	}

	return 0;
}