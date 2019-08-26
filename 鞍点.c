#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, j, max ,max_,flag=1;
	int num[3][4];
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++)
			scanf_s("%d", &num[i][j]);
	}
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			max = num[0][0];
			if (max < num[i][j]) {
				max = num[i][j];
				max_ = j;
			}
		}
		flag = 1;
		for (int k = 0; k < 3; k++) {
			if (max < num[k][j])
				flag = 0;
			continue;
		}
		if (flag) {
			printf("a[%d][%d]=%d\n", i, max_, max);
			break;
		}
	}
	if (!flag)
		printf("tan90\n");
	system("pause");
}
