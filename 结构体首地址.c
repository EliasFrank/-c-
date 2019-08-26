#include <stdio.h>
#include<stdlib.h>
int main()
{
	struct student
	{
		int num;
		char  * name;
		char sex;
		float score;
	}boy1;
	boy1.num = 007;
	boy1.name = "elias";
	printf("the adress of struct is %o: \n",&boy1);
	printf("the adress of struct is %o: \n",&boy1.num);
	system("pause");
}