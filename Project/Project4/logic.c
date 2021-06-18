#include <stdio.h>

int main()
{
	int result;
	
	result = !0;
	printf("%d : result = !0\n", result);
	result = !1;
	printf("%d : result = !1\n", result);
	result = !2;
	printf("%d : rsult = !2\n", result);

	printf("\n");
	int low = 0, high = 1;
	printf("!low = %d, !high = %d\n", !low, !high);
	printf("low || high = %d\n", low || high);
	printf("low && high = %d\n", low && high);

	printf("\n");
	int a, b;
	printf("첫번째 피연산자 = ");
	scanf_s("%d", &a);
	printf("두번째 피연산자 = ");
	scanf_s("%d", &b);
	printf("!(a < b) = %d\n", !(a < b));
	printf("(a > 10) && (b < 20) %d\n", (a > 10) && (b < 20));
	//우선순위 () -> ()내부 -> ! -> && -> ||


	//조건연산자
	result = (a < b) ? b : a;
	printf("둘 중 큰 값은 %d 입니다\n", result);

	result = (a < b) ? a : b;
	printf("둘 중 작은 값은 %d 입니다\n", result);

	result = (a < b) ? b - a : a - b;
	printf("큰 값에서 작은 값을 뺀 값은 %d 입니다\n", result);

	//비트연산자
	unsigned char value_1 = 1;
	unsigned char result_1 = ~value_1;
	printf("NOT unsigned : value = %d, result = %d\n", value_1, result_1);

	char value_2 = 1;
	char result_2 = ~value_2;
	printf("NOT signed : value = %d, result =&d\n", value_2, result_2);


	int num_1, num_2;
	int tell;

	printf("첫번째 값 = ");
	scanf_s("%d", &num_1);
	printf("두번째 값 - ");
	scanf_s("%d", &num_2);

	tell = num_1 % 2;
	char* msg = (tell == 0) ? "짝수" : "홀수";
	printf("첫번째 값 %d 는 %s 입니다.\n", num_1, msg);

	tell = num_2 % 2;
	char* msg = (tell == 0) ? "짝수" : "홀수";
	printf("두번째 값 %d 는 %s 입니다.\n", num_2, msg);

	printf("첫번째 값 %d는 10에서 20사이의 수가 ", num_1);
	int yes_or_no = (num_1 >= 10 && num_1 <= 20) ? printf("맞습니다\n") : printf("아닙니다\n");
	
}