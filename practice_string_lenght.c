#include<stdio.h>
#include<string.h>
main()
{
	char s1[20],s2[20];
	int len;
	printf("enter any string = ");
	gets(s1);
	printf("enter 2nd string = ");
	gets(s2);
	len=strlen(s1);
	printf("\nstring lenght = %d",len);
/*	strrev(s1);
	printf("\nstring reverse = %s",s1);
*/	strupr(s1);
	printf("\nuppercase = %s",s1);
	strlwr(s1);
	printf("\nlowercase = %s",s1);
/*	strcat(s1,s2);
	printf("\n concatenation = %s",s1);
*/	strcpy(s2,s1);
	printf("\n copy = %s",s2);
}
