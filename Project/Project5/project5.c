#include <stdio.h>

int main()
{
	int score;
	printf("점수를 입력하세요 > ");
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

	printf("점수는 %c 입니다.\n", call);

	getchar();
	int score_2;
	printf("점수를 입력하시오 > ");
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

	printf("점수는 %c 입니다.", alarm);
}