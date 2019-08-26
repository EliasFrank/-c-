#include<stdio.h>
FILE *fp;
int main()
{
	char ch;
	fp = fopen("no", "w");
	ch = getchar();
	for (int i = 0; i < 100; i++) {
		if ((ch=getchar())!= '#') {
			fputc(ch, fp);
			putchar(ch);
			fp++;
			ch = getchar();
		}
		else break;
	}
	fclose(fp);
}
