#include <stdio.h>

int main(void) {
		//144p ���չ��� 3
	/*
		10���� �Ҽ��� ����ϴ� ���α׷� �ۼ�
		�� �Ҽ� = 1�� �ڱ� �ڽ����θ� ���������� ����
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