#include <stdio.h>

void print()
{
	printf("자료형과 변수를 이용한 printf() 함수 연습 프로그램\n");

	short short_value = 100;
	int int_value = 1234;
	long long_value = 300L;
	unsigned int uint_value = 400u;

	printf("short = %d, int = %d, long = %ld, unsigned int = %u\n", short_value, int_value, long_value, uint_value);
	printf("8진수 = %o, 16진수 = %x\n", short_value, short_value);

	printf("%d\n", int_value);
	printf("%6d\n", int_value);
	printf("%+d\n", int_value);
	printf("%+6d\n", int_value);
	printf("%06\n", int_value);

	//실수형
	float float_value = 12.34f;
	double double_value = 123.456;

	printf("float = %f, double = %lf\n", float_value, double_value);

	printf("%f\n", float_value);
	printf("%7.1f\n", float_value);
	printf("%+7.2f\n", float_value);
	printf("%7.3f\n", float_value);
	printf("%07.2f\n", float_value);

	//문자형
	char char_value_1 = 65;
	char char_value_2 = 'B';

	printf("char = %c, char = %d\n", char_value_1, char_value_2);

	//문자열
	char* string_value = "C Program";

	printf("%s\n", string_value);
	printf("%10s\n", string_value);
	printf("%-10s\n", string_value);

}

int scan()
{
	int int_input;
	printf("input int > ");
	scanf_s("%d", &int_input);
	printf("int = %d\n", int_input);

	float float_input;
	printf("input float > ");
	scanf_s("%f", &float_input);
	printf("float = %f\n", float_input);

	getchar();
	char char_input;
	printf("input char > ");
	scanf_s("%c", &char_input, sizeof(char_input));
	printf("char = %c\n", char_input);

	char char_string[20];
	printf("input String > ");
	scanf_s("%s", char_string, sizeof(char_string));
	printf("string = %s\n", char_string);
}