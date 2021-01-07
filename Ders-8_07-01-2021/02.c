#include "stdlib.h"
#include "stdio.h"
#define SIZE 5

void spiralPrint(int arr[SIZE][SIZE]);

int main() {

	int mx[SIZE][SIZE], cnt = 0;
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			mx[i][j] = cnt;
			cnt++;
		}
	}

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            printf("%2d ",mx[i][j]);
        }
        printf("\n");
    }
	printf("\n");
	spiralPrint(mx);
	printf("\n");
	system("pause");
}

void spiralPrint(int arr[SIZE][SIZE])
{
	int x, y;
	x = y = SIZE / 2;
	int direction = 0;
	int dirCh = (SIZE / 2) * 4 + 1;
	int jumpnum = 1;
	for (int i = 0; i < dirCh; i++)
	{
		for (int j = 0; j < jumpnum; j++)
		{
			printf("%d ", arr[x][y]);
			if (direction % 4 == 0) { y--; }
			if ((direction-1) % 4 == 0) { x--; }
			if ((direction-2) % 4 == 0) { y++; }
			if ((direction-3) % 4 == 0) { x++; }
		}
		direction++;
		if (i % 2 != 0)
			jumpnum++;
	}
}
