#include <stdio.h>

int main(void) {
	//144p ���չ��� 3
/*
	10���� �Ҽ��� ����ϴ� ���α׷� �ۼ�
	�� �Ҽ� = 1�� �ڱ� �ڽ����θ� ���������� ����
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