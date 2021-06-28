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
		printf("���� ���� ����Ʈ ���� ����\n");
		getchar();
	}
}

void print_node()
{
	NODE_t* p = head;
	printf("====================================\n");
	printf("\t\t ȸ������ ���α׷�\n");
	printf("====================================\n");
	if (p->next != NULL)
	{
		printf("====================================\n");
		printf("����\t�̸�\t����\t��ȭ��ȣ\n");
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
		printf("�̸��� �Է��ϼ���\n");
		scanf_s("%s", data->name, sizeof(data->name));
		printf("���̸� �Է��ϼ���\n");
		scanf_s("%d", &data->age);
		printf("��ȭ��ȣ�� �Է��ϼ���\n");
		scanf_s("%s", data->phone, sizeof(data->phone));
	}
	else
	{
		printf("�޸� �Ҵ� ����\n");
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
	if (p != head) //��尡 �ϳ��� ���� ���
	{
		data->prev = p;
	}
}

void insert_node(int position, NODE_t* data)
{
	NODE_t* p = head;
	for (int i = 0; i < position - 1; i++)
	{
		if (p->next != NULL) //��ġã��
		{
			p = p->next;
		}
		else //������ ����� ��� ����
		{
			break;
		}
	}
	if (p == head) //ù���� ���ԵǴ� ���
	{
		data->next = p->next;
		data->next->prev = data;
		p->next = data;
	}
	else if (p->next == NULL) //���������� ����
	{
		data->prev = p;
		p->next = data;
	}
	else //�߰����� ����
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
	printf("�����Ϸ��� �̸��� �Է��ϼ���\n");
	scanf_s("%s", name, sizeof(name));
	getchar();

	NODE_t* p = head;
	while (p->next != NULL)
	{
		p = p->next;
		if (!strcmp(p->name, name)) //�̸����� �ش� ��� �˻�
		{
			if (p->next == NULL && p->prev == NULL) //��尡 �Ѱ��� ��
			{
				head->next = NULL;
			}
			else if (p->next == NULL && p->prev != NULL) //������ ����� ��
			{
				p->prev->next = NULL;
			}
			else if (p->prev == NULL && p->next != NULL) //ó�� ����� ��
			{
				p->next->prev = NULL;
				head->next = p->next;
			}
			else //�߰������ ��
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
	printf("�˻��Ϸ��� �̸��� �Է��ϼ���\n");
	scanf_s("%s", name, sizeof(name));
	getchar();

	NODE_t* p = head;
	while (p->next != NULL)
	{
		p = p->next;
		if (!strcmp(p->name, name))
		{
			printf("�̸�[%s], ����[%d], ��ȭ��ȣ[%s]\n", p->name, p->age, p->phone);
			getchar();
			break;
		}
	}
}