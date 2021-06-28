# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include "DLL.h"

enum MENU {END, APPEND, INSERT, DELETE, SEARCH};
enum MENU select;

int main()
{
	NODE_t* data = NULL;

	initalize_DLL(); //연결리스트 head생성

	while (head != NULL)
	{
		system("cls"); //화면지우기
		print_node();
		printf("\n1 : 회원등록\n");
		printf("2 : 회원삽입\n");
		printf("3 : 회원삭제\n");
		printf("4 : 회원검색\n");
		printf("0 : 종료\n");
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
				printf("몇번째에 삽입할까요? : ");
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
			printf("0~4까지의 숫자를 입력해주세요\n");
			break;
		}
	}
}