#include<stdio.h>
#include<stdlib.h>
int main()
{
	int tiankong(int num[], int n);
	int i, n, j;
	i = j = 0;
	int mfz[15][15];
	while (1)
	{
		printf("请输入你想要的几阶魔法阵：");
		scanf_s("%d", &n);
		if (n % 2 != 0 && 0 < n&&n <= 15) break;
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) mfz[i][j] = 0;
	}
	tiankong(mfz,n);
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++)
			printf("%3d", mfz[i][j]);
		putchar('\n');
	}
	system("pause");
}
int tiankong(int  mfz[15][15],int n)
{
	int row, col,i;
	row = 0; col = n / 2;
	mfz[0][n / 2] = 1;
	for (i = 2; i <= n*n; i++) {
		if ((row == 0 && col == n - 1) )
			row = row + 1;
		else if (row == 0) { row = n - 1; col = col + 1; }
		else if (col == n - 1) { col = 0; row = row - 1; }
		else if( mfz[row - 1][col + 1] != 0)
			row = row + 1;
		else { row = row - 1; col = col + 1; }
		mfz[row][col] = i;
	}
}