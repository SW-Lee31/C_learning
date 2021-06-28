# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include "DLL.h"

enum MENU {END, APPEND, INSERT, DELETE, SEARCH};
enum MENU select;

int main()
{
	NODE_t* data = NULL;

	initalize_DLL(); //���Ḯ��Ʈ head����

	while (head != NULL)
	{
		system("cls"); //ȭ�������
		print_node();
		printf("\n1 : ȸ�����\n");
		printf("2 : ȸ������\n");
		printf("3 : ȸ������\n");
		printf("4 : ȸ���˻�\n");
		printf("0 : ����\n");
		printf(">>>>>");
		scanf_s("%d", &select);
		if (select == END) {
			break;
		}
		switch (select)
		{
		case APPEND:
			data = new_node();
			if (data != NULL)
			{
				append_node(data);
				break;
			}
		case INSERT:
			data = new_node();
			if (data != NULL)
			{
				int position = 0;
				printf("���°�� �����ұ��? : ");
				scanf_s("%d", &position);
				insert_node(position, data);
			}
			break;
		case DELETE:
			delete_node();
			break;
		case SEARCH:
			search_node();
			break;
		default:
			printf("0~4������ ���ڸ� �Է����ּ���\n");
			break;
		}
	}
}