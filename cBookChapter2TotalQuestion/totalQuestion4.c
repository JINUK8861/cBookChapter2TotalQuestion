#include <stdio.h>

int main(void) {
		//144p ���չ��� 4
	/*
		����ڷκ��� �ǿ����ڿ� �����ڸ� �Է¹޾� ���� ����� ����ϴ� ���α׷� �ۼ�
	*/
	int num1, num2;
	char cal;

	printf("�ǿ����� 1 : ");
	scanf_s("%d", &num1);
	printf("������ : ");
	scanf_s(" %c", &cal);
	printf("�ǿ����� 2 : ");
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
		printf("�߸��� ������ �Է�");
	}

	return 0;
}