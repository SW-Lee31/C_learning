#include <stdio.h>

int main()
{
	int score;
	printf("������ �Է��ϼ��� > ");
	scanf_s("%d", &score);
	char call;

	if (score >= 90)
	{
		call = 'A';
	}
	else if (score >= 80)
	{
		call = 'B';
	}
	else if (score >= 70)
	{
		call = 'C';
	}
	else if (score >= 60)
	{
		call = 'D';
	}
	else
	{
		call = 'F';
	}

	printf("������ %c �Դϴ�.\n", call);

	getchar();
	int score_2;
	printf("������ �Է��Ͻÿ� > ");
	scanf_s("%d", &score_2);
	int point = score_2 / 10;
	char alarm;

	switch (point)
	{
	case 10:
	case 9:
		alarm = 'A';
		break;
	case 8:
		alarm = 'B';
		break;
	case 7:
		alarm = 'C';
		break;
	case 6:
		alarm = 'D';
		break;
	default:
		alarm = 'F';
		break;
	}

	printf("������ %c �Դϴ�.", alarm);
}