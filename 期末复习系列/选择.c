#include"stdio.h"
#include"stdlib.h"
int main()
{
	int num[10], flag, temp;
	printf("请输入十个数字\n");
	for (int i = 0; i < 10; i++)
		scanf_s("%d", &num[i]);
	for (int i = 0; i < 10; i++) {
		flag = i;
		for (int j = i + 1; j < 10; j++) {
			if (num[flag] > num[j]) flag = j;
		}
		temp = num[i];
		num[i] = num[flag];
		num[flag] = temp;
	}
	for (int i = 0; i < 10; i++)
		printf("%d ", num[i]);
	system("pause");
}