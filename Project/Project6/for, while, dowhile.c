#include <stdio.h>

int main()
{
	int choice;
	int num;
	char go_stop;

	do
	{
		printf("�۾��� �������ּ���. (1: ������, 2: �����հ�, 3: ����)  = \n");
		scanf_s("%d", &choice);
		getchar();

		if (choice < 1 || choice > 3)
		{
			printf("�۾��� 1~3 �����Դϴ�\n");
			continue;
		}

		if (choice == 1)
		{
			do
			{
				int dan = 0;
				printf("��(2~9)�� �Է��ϼ���.\n");
				scanf_s("%d", &dan);
				getchar();
				if (dan < 2 || dan > 9) {
					printf("2~9���̸� �Է��ϼ���\n");
					continue;
				}
				for (int i = 0; i <= 9; i++)
				{
					printf("%d * %d = %d\n", dan, i, dan * i);
				}
				printf("��� �Ͻðڽ��ϱ�?");
				scanf_s("%c", &go_stop, sizeof(go_stop));
				getchar();
			} while (go_stop == 'Y' || go_stop == 'y');
		}

		else if (choice == 2)
		{
			do
			{
				printf("�����հ踦 ���ϴ� ���ڸ� �Է��ϼ���\n");
				scanf_s("%d", &num);
				getchar();

				int sum = 0;
				int count = 1;
				while (count <= num)
				{
					sum += count;
					count++;
				}
				printf("%d������ �������� %d�Դϴ�\n", num, sum);
				printf("�ٽ��Ͻðڽ��ϱ�?");
				scanf_s("%c", &go_stop, sizeof(go_stop));
				getchar();
			}while (go_stop == 'Y' || go_stop == 'y');
		}
		else if (choice == 3) {
			break;
		}
	}while (1);
	
}