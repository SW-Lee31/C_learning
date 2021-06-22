#include <stdio.h>

#define ROW 4

#define COL 3


int main()
{
	int arr[ROW][COL];
	int row_temp[ROW] = { 0, 0, 0, 0 };
	int col_temp[COL] = { 0, 0, 0 };

	for (int row_cnt = 0; row_cnt < ROW; row_cnt++)
	{
		for (int col_cnt = 0; col_cnt < COL; col_cnt++)
		{
			printf("[%d][%d] = ", row_cnt, col_cnt);
			scanf_s("%d", &arr[row_cnt][col_cnt]);
		}
	}


	//행, 열 합산
	
	for (int row_cnt = 0; row_cnt < ROW; row_cnt++)
	{
		for (int col_cnt = 0; col_cnt < COL; col_cnt++)
		{
			row_temp[row_cnt] += arr[row_cnt][col_cnt];
			col_temp[col_cnt] += arr[row_cnt][col_cnt];
		}
	}

	for (int row_cnt = 0; row_cnt < ROW; row_cnt++)
	{
		for (int col_cnt = 0; col_cnt < COL; col_cnt++)
		{
			printf("%d", arr[row_cnt][col_cnt]);
		}
	}

	printf("열합계 출력\n");
	for (int col_cnt = 0; col_cnt < COL; col_cnt++)
	{
		printf("%d", col_temp[col_cnt]);
	}

	printf("행합계 출력\n");
	for (int row_cnt = 0; row_cnt < ROW; row_cnt++)
	{
		printf("%d", row_temp[row_cnt]);
	}


}