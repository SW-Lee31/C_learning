#pragma once
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct MEMBER
{
	char name[20];
	int age;
	char phone[20];
	struct MEMBER* prev;
	struct MEMBER* next;
}NODE_t;

NODE_t* head;

void initalize_DLL()
{
	head = (NODE_t*)calloc(1, sizeof(NODE_t));
	if (head == NULL)
	{
		printf("이중 연결 리스트 생성 실패\n");
		getchar();
	}
}

void print_node()
{
	NODE_t* p = head;
	printf("====================================\n");
	printf("\t\t 회원관리 프로그램\n");
	printf("====================================\n");
	if (p->next != NULL)
	{
		printf("====================================\n");
		printf("순번\t이름\t나이\t전화번호\n");
		printf("====================================\n");
		int count = 1;
		do
		{
			p = p->next;
			printf("[%d]\t%s\t%d\t\t%s\n", count++, p->name, p->age, p->phone);
		} while (p->next != NULL);
		printf("=====================================");
	}
}

NODE_t* new_node()
{
	NODE_t* data = (NODE_t*)calloc(1, sizeof(NODE_t));
	if (data != NULL)
	{
		printf("이름을 입력하세요\n");
		scanf_s("%s", data->name, sizeof(data->name));
		printf("나이를 입력하세요\n");
		scanf_s("%d", &data->age);
		printf("전화번호를 입력하세요\n");
		scanf_s("%s", data->phone, sizeof(data->phone));
	}
	else
	{
		printf("메모리 할당 실패\n");
		getchar();
	}
	return data;
}

void append_node(NODE_t* data)
{
	NODE_t* p = head;
	while (p->next != NULL)
	{
		p = p->next;
	}
	p->next = data;
	if (p != head) //노드가 하나도 없을 경우
	{
		data->prev = p;
	}
}

void insert_node(int position, NODE_t* data)
{
	NODE_t* p = head;
	for (int i = 0; i < position - 1; i++)
	{
		if (p->next != NULL) //위치찾기
		{
			p = p->next;
		}
		else //마지막 노드일 경우 종료
		{
			break;
		}
	}
	if (p == head) //첫노드로 삽입되는 경우
	{
		data->next = p->next;
		data->next->prev = data;
		p->next = data;
	}
	else if (p->next == NULL) //마지막노드로 삽입
	{
		data->prev = p;
		p->next = data;
	}
	else //중간노드로 삽입
	{
		data->next = p->next;
		data->next->prev = data;
		p->next = data;
		data->prev = p;
	}
}

void delete_node()
{
	char name[20];
	printf("삭제하려는 이름을 입력하세요\n");
	scanf_s("%s", name, sizeof(name));
	getchar();

	NODE_t* p = head;
	while (p->next != NULL)
	{
		p = p->next;
		if (!strcmp(p->name, name)) //이름으로 해당 노드 검색
		{
			if (p->next == NULL && p->prev == NULL) //노드가 한개일 때
			{
				head->next = NULL;
			}
			else if (p->next == NULL && p->prev != NULL) //마지막 노드일 때
			{
				p->prev->next = NULL;
			}
			else if (p->prev == NULL && p->next != NULL) //처음 노드일 때
			{
				p->next->prev = NULL;
				head->next = p->next;
			}
			else //중간노드일 때
			{
				p->next->prev = p->prev;
				p->prev->next = p->next;
			}
			free(p);
			break;
		}
	}
}

void search_node()
{
	char name[20];
	printf("검색하려는 이름을 입력하세요\n");
	scanf_s("%s", name, sizeof(name));
	getchar();

	NODE_t* p = head;
	while (p->next != NULL)
	{
		p = p->next;
		if (!strcmp(p->name, name))
		{
			printf("이름[%s], 나이[%d], 전화번호[%s]\n", p->name, p->age, p->phone);
			getchar();
			break;
		}
	}
}