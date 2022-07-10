#include <stdio.h>

int main(void) {
	//144p 종합문제 3
/*
	10개의 소수를 출력하는 프로그램 작성
	※ 소수 = 1과 자기 자신으로만 나누어지는 숫자
*/
	int count = 0;
	int num = 2;

	while (count < 10) {
		for (int i = 2; i <= num; i++) {
			if (num == 2) {
				printf("%d ", num);
				count++;
			}
			else if (num % i == 0) {
				break;
			}
		}
		num++;
	}
	return 0;
}