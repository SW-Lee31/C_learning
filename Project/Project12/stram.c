#include <stdio.h>
#define MAX 3

FILE* ip;
FILE* op;

struct MEMBER {
	char name[10];
	int age;
	double score;
}data[MAX];

int main()
{
	//data.txt ����
	printf("data.txt�� �����մϴ�.\n");
	if (fopen_s(&op, "data.txt", "wt") != NULL)
	{
		fprintf(op, "%s %d %lf\n", "���屺", 45, 3.2);
		fprintf(op, "%s %d %lf\n", "�ֿ���", 32, 4.1);
		fprintf(op, "%s %d %lf\n", "�����", 21, 3.5);
		fclose(op);
	}

	else {
		printf("error\n");
	}

	//�о ����ü�� ����
	printf("data.txt ������ ����ü�� �о�ɴϴ�.\n");
	if (fopen_s(&ip, "data.txt", "rt") != NULL)
	{
		for (int i = 0; i < MAX; I++)
		{
			if (fscanf_s(ip, "%s %d %lf", data[i].name, sizeof(data[i].name), &data[i].age, &data[i].score))
		}
	}
}