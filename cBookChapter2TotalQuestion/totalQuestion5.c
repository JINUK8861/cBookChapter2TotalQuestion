#include <stdio.h>

int main(void) {
		//144p 종합문제 5
	/*
		다음과 같은 수열을 피보나치 수열이라고 한다.
		=> 1 1 2 3 5 8 13 21 ...
		피보나치 수열이란 최근 나열된 숫자 두 개의 합을 나열하는 수열이다.
		정수를 입력받은 후 입력받은 정수의 개수만큼 피보나치 수열을 출력하는 프로그램 작성
	*/

	int n1 = 0; // 피보나치 수열의 첫째항
	int n2 = 1; // 피보나치 수열의 둘째항
	int temp1 = 0;

	int count; // 입력할 정수의 개수

	printf("얼마나 출력하시겠습니까? : ");
	scanf_s("%d", &count);

	if (count == 1) {
		printf("%d", n2);
	}
	else {
		printf("%d ", n2);
		for (int i = 0; i <= count - 2; i++) {
			printf("%d ", n1 + n2); // 1 2 3 5 8
			temp1 = n1; // temp1 = 0 1 1 2 3
			n1 = n2; // n1 = 1 1 2 3 5
			n2 = temp1 + n2; // n2 = 0+1 = 1 2 3 5 8
		}
	}

	return 0;
}