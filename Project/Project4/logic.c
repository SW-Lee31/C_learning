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
	printf("ù��° �ǿ����� = ");
	scanf_s("%d", &a);
	printf("�ι�° �ǿ����� = ");
	scanf_s("%d", &b);
	printf("!(a < b) = %d\n", !(a < b));
	printf("(a > 10) && (b < 20) %d\n", (a > 10) && (b < 20));
	//�켱���� () -> ()���� -> ! -> && -> ||


	//���ǿ�����
	result = (a < b) ? b : a;
	printf("�� �� ū ���� %d �Դϴ�\n", result);

	result = (a < b) ? a : b;
	printf("�� �� ���� ���� %d �Դϴ�\n", result);

	result = (a < b) ? b - a : a - b;
	printf("ū ������ ���� ���� �� ���� %d �Դϴ�\n", result);

	//��Ʈ������
	unsigned char value_1 = 1;
	unsigned char result_1 = ~value_1;
	printf("NOT unsigned : value = %d, result = %d\n", value_1, result_1);

	char value_2 = 1;
	char result_2 = ~value_2;
	printf("NOT signed : value = %d, result =&d\n", value_2, result_2);


	int num_1, num_2;
	int tell;

	printf("ù��° �� = ");
	scanf_s("%d", &num_1);
	printf("�ι�° �� - ");
	scanf_s("%d", &num_2);

	tell = num_1 % 2;
	char* msg = (tell == 0) ? "¦��" : "Ȧ��";
	printf("ù��° �� %d �� %s �Դϴ�.\n", num_1, msg);

	tell = num_2 % 2;
	char* msg = (tell == 0) ? "¦��" : "Ȧ��";
	printf("�ι�° �� %d �� %s �Դϴ�.\n", num_2, msg);

	printf("ù��° �� %d�� 10���� 20������ ���� ", num_1);
	int yes_or_no = (num_1 >= 10 && num_1 <= 20) ? printf("�½��ϴ�\n") : printf("�ƴմϴ�\n");
	
}