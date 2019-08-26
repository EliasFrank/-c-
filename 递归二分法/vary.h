#pragma once
void vary(int a[10])
{
	int flag = 0,temp;
	for (int i = 0; i < 10; i++) {
		flag = i;
		for (int j = i+1; j <10 ; j++) {
			if (a[flag] > a[j]) flag = j;
		}
		temp = a[i];
		a[i] = a[flag];
		a[flag] = temp;
	}
	for (int i = 0; i < 10; i++)
		printf("%3d", a[i]);
	putchar('\n');
}