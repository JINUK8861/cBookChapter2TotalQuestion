#include <stdio.h>

int main(void) {
		//144p ���չ��� 2
	/*
		����ڷκ��� 2���� 9������ ���� �� ���� �Է¹޾� �������� ���
		��) ����ڰ� 4�� 8�� �Է��ϸ� 4�ܺ��� 8�ܱ��� ���
		��, ����ڰ� 8�� 4�� ������ �Է��ص� �������� ��µǾ�� ��
	*/

	int num1, num2;
	printf("���� 1 : ");
	scanf_s("%d", &num1);
	printf("���� 2 : ");
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
		printf("===%d��===\n", front);
		for (int back = 1; back <= 9; back++) {
			printf("%d X %d = %d\n", front, back, front * back);
		}
	}

	return 0;
}