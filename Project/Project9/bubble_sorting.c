#include <stdio.h>

#define SIZE 5

extern int data[SIZE];

void swap();
void sorting();

void swap(int *first, int *second)
{
	int temp = *first;
	*first = *second;
	*second = temp;
}

void sorting()
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = i + 1; j < SIZE; j++)
		{
			if (data[i] > data[j])
			{
				swap(&data[i], &data[j]);
			}
		}
	}
}