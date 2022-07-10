#include <stdio.h>

int main(void) {
		//144p 종합문제 3
	/*
		10개의 소수를 출력하는 프로그램 작성
		※ 소수 = 1과 자기 자신으로만 나누어지는 숫자
	*/
	int count = 0;
	int num = 2;
	int incount = 0;

	while (count < 10) {
		for (int i = 1; i <= num; i++) {
			if (num % i == 0) {
				incount++;
			}
		}
		if (incount == 2) {
			printf("%d ", num);
			count++;
		}
		num++;
		incount = 0;
	}

	return 0;
}