#include <stdio.h>

int main(void) {
		//144p 종합문제 2
	/*
		사용자로부터 2부터 9까지의 정수 두 개를 입력받아 구구단을 출력
		예) 사용자가 4와 8을 입력하면 4단부터 8단까지 출력
		단, 사용자가 8과 4의 순서로 입력해도 문제없이 출력되어야 함
	*/

	int num1, num2;
	printf("정수 1 : ");
	scanf_s("%d", &num1);
	printf("정수 2 : ");
	scanf_s("%d", &num2);

	int start, end;
	if (num1 > num2) {
		start = num2;
		end = num1;
	}
	else { // num1 <= num2
		start = num1;
		end = num2;
	}

	for (int front = start; front <= end; front++) {
		printf("===%d단===\n", front);
		for (int back = 1; back <= 9; back++) {
			printf("%d X %d = %d\n", front, back, front * back);
		}
	}

	return 0;
}