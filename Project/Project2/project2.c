#include <stdio.h>
#define MAX 100  // 1��

int main()
{
	const int MIN = 50; // 2��
	printf("MAX= %d, MIN=%d\n", MAX, MIN);  // 3��

	// 4��
	float get_value;
	printf("Input Float Value = ");
	scanf_s("%f", &get_value);
	getchar();
	printf("get_value = %E\n", get_value);  // 5��

	short short_case = (short)get_value;  // 6��
	printf("short_case = %d\n", short_case);  // 7��

	// 8��
	char ch_1, ch_2, string_1[10];
	printf("ch_1 = ");
	scanf_s("%c", &ch_1, sizeof(char));
	getchar();
	printf("ch_2 = ");
	scanf_s("%c", &ch_2, sizeof(char));
	getchar();
	printf("string_1 = ");
	scanf_s("%s", string_1, sizeof(string_1));

	printf("ch_1 = %c, ch_2 = %c, string_1 = %s\n", ch_1, ch_2, string_1);
}