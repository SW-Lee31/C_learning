#include <stdio.h>
#include <stdlib.h>

int main()
{
	int cnt = 0, sum = 0;
	int* p = NULL;
	while (1)
	{
		sum = 0;
		printf("�� ���� ���ڸ� �Է��Ͻðڽ��ϱ�? (0: ����) = ");
		scanf_s("%d", &cnt);
		if (cnt > 0)
		{
			p = (int*)malloc(sizeof(int) * cnt);
			for (int i = 0; i < cnt; i++)
			{
				printf("%d��° ����?", i + 1);
				scanf_s("%d", &p[i]);
			}
		}

	}
	if (p != NULL)free(p);
}