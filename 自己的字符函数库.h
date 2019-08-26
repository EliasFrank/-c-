int mystrcpy(char *ch3, char *ch4)
{
	for (; *ch4 != '\0'; ch3++, ch4++)
		*ch3 = *ch4;
	*ch3 = '\0';
}
int mystrncpy(char *ch1, char*ch2, int n)
{
	int i;
	for (i = 0; i < n; i++)
		*(ch1 + i) = *(ch2 + i);
}
int mystrcat(char *ch1, char *ch2)
{
	int i, flag;
	for (i = 0; *ch1 != '\0';ch1++, i++); 
	for (; *ch2 != '\0'; ch2++, ch1++)
		*ch1 = *ch2;
	*ch1 = '\0';
}
int mystrlen(char *ch1)
{
	int i;
	for (i = 0; *ch1 != '\0'; ch1++, i++);
	return i;
}