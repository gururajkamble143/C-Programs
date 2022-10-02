#include<stdio.h>
main()
/*
{
	char s1[20];
	int i,len=0;
	printf("\nenter any string = ");
	gets(s1);
	for(i=0;s1[i]!='\0';i++)
	{
		len++;
	}
	printf("string lenght = %d",len);
}

{
	char s1[20],s2[20];
	int i,j,len=0;
	printf("enter any string = ");
	gets(s1);
	for(i=0;s1[i]!='\0';i++)
	{
		len++;
	}
	for(i=len-1,j=0;i>=0;i--,j++)
	{
		s2[j]=s1[i];
	}
	s2[j]='\0';
	printf("reverse string = %s",s2);
}
*/
{
	char s1[20],s2[20];
	int i;
	printf("enter 1st string = ");
	gets(s1);
	printf("enter 2nd string = ");
	gets(s2);
	for(i=0;s1[i]!='\0';i++)
	{
		s2[i]=s1[i];
	}
	s2[i]='\0';
	printf("copy string 1 in 2 = %s",s2);
}
