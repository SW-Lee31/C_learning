#include <stdio.h>

int main()
{
	int choice;
	int num;
	char go_stop;

	do
	{
		printf("작업을 선택해주세요. (1: 구구단, 2: 누적합계, 3: 종료)  = \n");
		scanf_s("%d", &choice);
		getchar();

		if (choice < 1 || choice > 3)
		{
			printf("작업은 1~3 까지입니다\n");
			continue;
		}

		if (choice == 1)
		{
			do
			{
				int dan = 0;
				printf("단(2~9)를 입력하세요.\n");
				scanf_s("%d", &dan);
				getchar();
				if (dan < 2 || dan > 9) {
					printf("2~9사이를 입력하세요\n");
					continue;
				}
				for (int i = 0; i <= 9; i++)
				{
					printf("%d * %d = %d\n", dan, i, dan * i);
				}
				printf("계속 하시겠습니까?");
				scanf_s("%c", &go_stop, sizeof(go_stop));
				getchar();
			} while (go_stop == 'Y' || go_stop == 'y');
		}

		else if (choice == 2)
		{
			do
			{
				printf("누적합계를 원하는 숫자를 입력하세요\n");
				scanf_s("%d", &num);
				getchar();

				int sum = 0;
				int count = 1;
				while (count <= num)
				{
					sum += count;
					count++;
				}
				printf("%d까지의 누적값은 %d입니다\n", num, sum);
				printf("다시하시겠습니까?");
				scanf_s("%c", &go_stop, sizeof(go_stop));
				getchar();
			}while (go_stop == 'Y' || go_stop == 'y');
		}
		else if (choice == 3) {
			break;
		}
	}while (1);
	
}