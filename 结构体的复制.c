#include<stdio.h>
#include<stdlib.h>
int main()
{
	struct
	{
		int num;
		char *name;
		char sex;
		float score;
	}boy1,boy2;
	boy1.num = 007;
	boy1.name = "elias";

	printf("please input the sex and score\n");
	scanf("%c %f", &boy1.sex,&boy1.score);
	boy2 = boy1;
	printf("number=%d\nname=%s\n",boy1.num,boy2.name);
	printf("sex=%c\nscaore=%f\n", boy2.sex, boy2.score);
	system("pause");
}
