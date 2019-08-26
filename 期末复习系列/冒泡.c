#include"stdio.h"
#include"stdlib.h"
int main()
{
	int num[10], t;
	for (int i = 0; i < 10; i++)
		scanf_s("%d", &num[i]);
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9 - i; j++) {
			if (num[j] > num[j + 1]) {
				t = num[j];
				num[j] = num[j + 1];
				num[j + 1] = t;
			}
		}
	}
	for (int i = 0; i < 10; i++)
		printf("%d  ", num[i]);
	system("pause");
}