#include <stdio.h>

#define SIZE 5

void input_data();

void output_data();

extern void sorting();

int data[SIZE];


int main()
{
	input_data();
	output_data();
	sorting();
	output_data();
}

void input_data()
{
	for (int i = 0; i < SIZE; i++)
	{
		printf("input data[%d]: ", i);
		scanf_s("%d", &data[i]);
	}
}

void output_data()
{
	for (int i = 0; i < SIZE; i++)
	{
		printf("%d, ", data[i]);
	}
	printf("\n");
}

