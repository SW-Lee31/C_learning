#include <stdio.h>
#include <ctype.h>
#include "lotto.h"
#ifndef MAX
#define MAX 5  // �ִ� ���Ӽ�
#endif
#define game_count(count) count > MAX ? MAX : count   // MAX���� ũ�� MAX���Ӹ� ���� ��ũ�� �Լ�

int main() {

	int count = 0;
	char game[3];
	while (1) {
		printf("���Ӽ��� �Է��ϼ���(0:����, 1~5) : ");
		gets_s(game, sizeof(game));
		if (isdigit(game[0])) {   // �Է¹��� ���� �������� �Ǵ�
			count = atoi(game);       // ���ڸ� ���ڷ� ��ȯ
			if (count == 0) {   // 0�̸� ����
				printf("���α׷��� �����մϴ�.\n");
				break;
			}
			else {   // 0�� �ƴϸ�
				if (count > MAX) {   // �ִ� ���Ӽ� ���� ũ�� �Է��ϸ�
					printf("%d ���Ӹ� �����մϴ�.\n",MAX);  
				}
				count = game_count(count);   // // MAX���� ũ�� MAX���Ӹ� ����, ��ũ�� �Լ� ȣ��
				lotto(count);  // �ζ� ��ȣ �߻�
			}
		}
		else {  // ���ڰ� �ƴϸ� �ٽ� �Է�
			printf("���ڸ� �Է��ϼ���~~\n");
		}
	}
}