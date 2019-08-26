#pragma once
int check(int a[10], int key, int max, int min)
{
	int  mid = (max + min) / 2;
	if (a[mid] == key) return mid;
	if (min > max) return 0;
	if (a[mid] > key) {
		max = mid - 1;
		mid = check(a, key, max, min);
	}
	if (a[mid] < key) {
		min = mid + 1;
		mid = check(a, key, max, min);
	}
}