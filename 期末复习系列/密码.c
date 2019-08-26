#include"stdio.h"
#include"stdlib.h"
#include"string.h"
int main()
{
	int len;
	char ch[20];
	printf("please input a word: ");
	gets(ch);
	len = strlen(ch);
	for (int i = 0; i < len; i++) {
		if ((ch[i] <= 'z'&&ch[i] >= 'a') || (ch[i] <= 'Z'&&ch[i] >= 'A')) {
			if ((ch[i] <= 'z'&&ch[i] >= 'w') || (ch[i] <= 'Z'&&ch[i] >= 'W')) ch[i] -=22;
			else ch[i] += 4;
		}
	}
	puts(ch);
	system("pause");
}