#include <stdio.h>

#define ROW 3

#define COL 3

int main()
{
	int arr_1[ROW][COL] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
	int arr_2[ROW][COL] = { {3, 4, 5}, {6, 7, 8}, {9, 1, 2} };
	int sum_arr[ROW][COL] = { {0, 0, 0}, {0, 0, 0}, {0, 0, 0} };

	int* p1 = arr_1;
	int* p2 = arr_2;
	int* p_sum = sum_arr;

	for (int i = 0; i < ROW * COL; i++)
	{
		*(p_sum + i) = *(p1 + i) + *(p2 + i);
	}


	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			printf("%d", arr_1[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			printf("%d", arr_2[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			printf("%d", sum_arr[i][j]);
		}
		printf("\n");
	}





}