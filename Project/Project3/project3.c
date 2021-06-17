#include <stdio.h>

int main()
{
	/*int int_1, int_2;
	
	printf("첫번째 정수값은 > ");
	scanf_s("%d", &int_1);
	printf("두번째 정수값은 > ");
	scanf_s("%d", &int_2);
	
	float result = int_1 / int_2;
	int least = int_1 % int_2;

	//정수나누기
	printf("둘을 나눈 값은 > %f", result);
	printf("둘을 나눈 나머지는 > %f", least);


	//증감연산
	int count = 10;

	count++;
	printf("단독 사용(후위) > %d\n", count);
	++count;
	printf("단독 사용(후위) > %d\n", count);
	count--;
	printf("단독 사용(후위) > %d\n", count);
	--count;
	printf("단독 사용(후위) > %d\n", count);

	int result;
	result = count++;
	printf("대입연산자와 같이 사용(후위++) count > %d\n, result > %d\n", count, result);
	result = count--;
	printf("대입연산자와 같이 사용(후위--) count > %d\n, result > %d\n", count, result);
	result = ++count;
	printf("대입연산자와 같이 사용(전위++) count > %d\n, result > %d\n", count, result);
	result = --count;
	printf("대입연산자와 같이 사용(전위--) count > %d\n, result > %d\n", count, result);
	/*후위는 먼저 = 시행 뒤 연산, 전위는 연산 후 = 대입*/

	/*int total = 30;
	count = 10;
	printf("total = %d, count =%d\n", total, count);
	result = count++ + --total;
	printf("result = %d, total = %d, count = %d\n", result, total, count);

	result = count-- + ++total;
	printf("result = %d, total = %d, count = %d\n", result, total, count);

	//불린
	int op_1, op_2;

	printf("첫번째 값");
	scan_s("%d", &op_1);
	printf("두번째 값");
	scan_s("%d", &op_2);

	int result;
	result = op_1 != op_2;
	printf("%d != %d = %d\n", op_1, op_2, result);
	//참일 경우 1, 거짓일 경우 0을 반환

	//변수 할당 X
	printf("%d == %d = %d\n", op_1, op_2, op_1 == op_2);
	*/

	char ch_1, ch_2;
	printf("첫번째 문자를 입력해 주세요 \n");
	scanf_s("%c", &ch_1, sizeof(ch_1));
	getchar();

	printf("두번째 문자를 입력해 주세요\n");
	scanf_s("%c", &ch_2, sizeof(ch_2));

	
	printf("첫번째 문자 = %c(%d), 두번째 문자 = %c(%d)\n", ch_1, ch_1, ch_2, ch_2);

	printf("%c == %c = %d\n", ch_1, ch_2, ch_1 == ch_2);
	printf("%c < %c = %d\n", ch_1, ch_2, ch_1 >= ch_2);
	printf("%c > %c = %d\n", ch_1, ch_2, ch_1 <= ch_2);
	printf("%c != %c = %d\n", ch_1, ch_2, ch_1 != ch_2);

	ch_1++;
	printf("첫번째 문자에 1을 더한 문자는 %c(%d)\n", ch_1, ch_1);

	ch_2 += 2;
	printf("두번째 문자에 2를 더한 문자는 %c(%d)\n", ch_2, ch_2);

}
