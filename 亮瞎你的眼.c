#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
enum Color
{
	black, blue, green, lake_blue, red, purple, yellow,
	white, gray, light_yellow
};
void set_color(unsigned short text_color, unsigned short back_color)
{
	char command[9] = "color 07";
	command[6] = '0' + back_color;
	command[7] = '0' + text_color;
	system(command);
}
int main()
{
	int i, j;
	printf("0�����ɫ��1������ɫ��2������ɫ\n");
	printf("3������ɫ��4�����ɫ��5������ɫ\n");
	printf("6�����ɫ��7�����ɫ��8�����ɫ��9������ɫ\n");
aa: printf("��������Ҫ�ı�����ɫ�����������֣���");
	scanf ("%d", &i);
	if (i < 0 || i>9) {
		printf("��������\n");
		goto aa;
	}
bb: printf("��������Ҫ��������ɫ�����������֣���");
	scanf ("%d", &j);
	if (j < 0 || j>9) {
		printf("��������\n");
		goto bb;
	}
	set_color(j, i);
	printf("1653563103\n");
	for (i = 1; ; i++) {
		set_color(i-1, i);
		if (i == 9) i = 0;
		Sleep(100);
	}
	system("pause");
}
