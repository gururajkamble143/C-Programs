#include<stdio.h>
main()
{
	char s1[20],s2[20];
	int i,j;
	printf("enter the 1st string = ");
	gets(s1);
	printf("enter the 2nd string = ");
	gets(s2);
	while(s1[i]!='\0')
	{
		s1[i]=s2[j];
		i++;
	}
	printf("copy = %s",s1);
}
