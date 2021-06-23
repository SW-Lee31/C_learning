#include <stdio.h>

typedef enum RELATION {FATHER, MOTHER, BROTHER, SISTER}R_t;

typedef struct FAMILY
{
	R_t relationship;
	char name[20];
	int age;
	char phone_num[20];
}FM_t;

typedef struct FAM_NAME
{
	char f_name[20];
	char m_name[20];
	FM_t f_member[4];
}FN_t;

FN_t value;

void print_family();

char* trans(int relation);

int main()
{
	printf("가족(아버지)의 성을 입력하세요 = ");
	scanf_s("%s", value.f_name, sizeof(value.f_name));
	printf("가족(어머니)의 성을 입력하세요 = ");
	scanf_s("%s", value.m_name, sizeof(value.m_name));

	for (int i = 0;i < 4; i++)
	{
		printf("%d번째 가족 신상을 입력합니다.\n", i + 1);
		printf("가족관계를 선택하세요. 부:(0), 모:(1), 형제:(2), 자매:(3) = ");
		scanf_s("%d", &value.f_member[i].relationship);
		getchar();
		printf("이름을 입력하세요 = ");
		scanf_s("%s", value.f_member[i].name, sizeof(value.f_member[i].name));
		getchar();
		printf("나이를 입력하세요 = ");
		scanf_s("%d", &value.f_member[i].age);
		getchar();
		printf("전화번호를 입력하세요 = ");
		scanf_s("%s", value.f_member[i].phone_num, sizeof(value.f_member[i].phone_num));
		getchar();

		print_family();
	}

	void print_family()
	{
		printf("##############################\n");
		printf("관계\t성명\t나이\t전화번호\n");
		for (int i = 0; i < 4;i++)
		{
			char* a = trans(value.f_member[i].relationship);
			char* b = value.f_name;;
			if (value.f_member[i].relationship == MOTHER)
			{
				b = value.m_name;
			}
			char* c = value.f_member[i].name;
			int d = value.f_member[i].age;
			char* e = value.f_member[i].phone_num;
			printf("%s\t%s\t%d\t%s\n", a, b, c, d, e);
		}
	}
		char* trans(int relation)
		{
			char* result = NULL;

			switch (relationship)
			{
			case FATHER:
				result = "Father";
				break;
			case MOTHER:
				result = "Mother";
				break;
			case BROTHER:
				result = "Brother";
				break;
			default:
				result = "??";
				break;
			}
			return result;
		}
}