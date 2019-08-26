#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int swap(char *p1,char *p2, char *p3);
	char ch1[100],ch2[100],ch3[100];
	char *p1,*p2,*p3;
	gets(ch1);
	gets(ch2);
	gets(ch3);
	p1=ch1;
	p2=ch2;
	p3=ch3;
	
	swap(p1,p2,p3);
	puts(p1);
	puts(p2);
	puts(p3);
}
int swap(char *p1,char *p2, char *p3)
{
	char temp[100];
	if(strcmp(p1,p2)){
		strcpy(temp,p2);
		strcpy(p2,p1);
		strcpy(p1,temp);
	}
	if(strcmp(p1,p3)){
		strcpy(temp,p3);
		strcpy(p3,p1);
		strcpy(p1,temp);
	}
	if(strcmp(p2,p3)){
		strcpy(temp,p3);
		strcpy(p3,p2);
		strcpy(p2,temp);
	}
}