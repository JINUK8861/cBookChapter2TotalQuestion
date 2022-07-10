#include <stdio.h>

int main(void) {
		//144p 종합문제 1
	/*
		100이상 200이하의 숫자 중에서 3과 7의 배수를 출력하는 프로그램 작성
		단, 3의 배수이면서 7의 배수이면 한 번만 출력
	*/

	for (int i = 100; i <= 200; i++) {
		if (i % 3 == 0 || i % 7 == 0) {
			printf("%d ", i);
		}
	}

	return 0;
}