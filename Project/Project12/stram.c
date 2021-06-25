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
	//data.txt 생성
	printf("data.txt를 생성합니다.\n");
	if (fopen_s(&op, "data.txt", "wt") != NULL)
	{
		fprintf(op, "%s %d %lf\n", "박장군", 45, 3.2);
		fprintf(op, "%s %d %lf\n", "최왕자", 32, 4.1);
		fprintf(op, "%s %d %lf\n", "김공주", 21, 3.5);
		fclose(op);
	}

	else {
		printf("error\n");
	}

	//읽어서 구조체에 저장
	printf("data.txt 파일을 구조체에 읽어옵니다.\n");
	if (fopen_s(&ip, "data.txt", "rt") != NULL)
	{
		for (int i = 0; i < MAX; I++)
		{
			if (fscanf_s(ip, "%s %d %lf", data[i].name, sizeof(data[i].name), &data[i].age, &data[i].score))
		}
	}
}