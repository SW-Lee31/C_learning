#include <stdio.h>

int main()
{
	/*int int_1, int_2;
	
	printf("ù��° �������� > ");
	scanf_s("%d", &int_1);
	printf("�ι�° �������� > ");
	scanf_s("%d", &int_2);
	
	float result = int_1 / int_2;
	int least = int_1 % int_2;

	//����������
	printf("���� ���� ���� > %f", result);
	printf("���� ���� �������� > %f", least);


	//��������
	int count = 10;

	count++;
	printf("�ܵ� ���(����) > %d\n", count);
	++count;
	printf("�ܵ� ���(����) > %d\n", count);
	count--;
	printf("�ܵ� ���(����) > %d\n", count);
	--count;
	printf("�ܵ� ���(����) > %d\n", count);

	int result;
	result = count++;
	printf("���Կ����ڿ� ���� ���(����++) count > %d\n, result > %d\n", count, result);
	result = count--;
	printf("���Կ����ڿ� ���� ���(����--) count > %d\n, result > %d\n", count, result);
	result = ++count;
	printf("���Կ����ڿ� ���� ���(����++) count > %d\n, result > %d\n", count, result);
	result = --count;
	printf("���Կ����ڿ� ���� ���(����--) count > %d\n, result > %d\n", count, result);
	/*������ ���� = ���� �� ����, ������ ���� �� = ����*/

	/*int total = 30;
	count = 10;
	printf("total = %d, count =%d\n", total, count);
	result = count++ + --total;
	printf("result = %d, total = %d, count = %d\n", result, total, count);

	result = count-- + ++total;
	printf("result = %d, total = %d, count = %d\n", result, total, count);

	//�Ҹ�
	int op_1, op_2;

	printf("ù��° ��");
	scan_s("%d", &op_1);
	printf("�ι�° ��");
	scan_s("%d", &op_2);

	int result;
	result = op_1 != op_2;
	printf("%d != %d = %d\n", op_1, op_2, result);
	//���� ��� 1, ������ ��� 0�� ��ȯ

	//���� �Ҵ� X
	printf("%d == %d = %d\n", op_1, op_2, op_1 == op_2);
	*/

	char ch_1, ch_2;
	printf("ù��° ���ڸ� �Է��� �ּ��� \n");
	scanf_s("%c", &ch_1, sizeof(ch_1));
	getchar();

	printf("�ι�° ���ڸ� �Է��� �ּ���\n");
	scanf_s("%c", &ch_2, sizeof(ch_2));

	
	printf("ù��° ���� = %c(%d), �ι�° ���� = %c(%d)\n", ch_1, ch_1, ch_2, ch_2);

	printf("%c == %c = %d\n", ch_1, ch_2, ch_1 == ch_2);
	printf("%c < %c = %d\n", ch_1, ch_2, ch_1 >= ch_2);
	printf("%c > %c = %d\n", ch_1, ch_2, ch_1 <= ch_2);
	printf("%c != %c = %d\n", ch_1, ch_2, ch_1 != ch_2);

	ch_1++;
	printf("ù��° ���ڿ� 1�� ���� ���ڴ� %c(%d)\n", ch_1, ch_1);

	ch_2 += 2;
	printf("�ι�° ���ڿ� 2�� ���� ���ڴ� %c(%d)\n", ch_2, ch_2);

}
