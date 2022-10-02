#include<stdio.h>
#include<string.h>
main()
{
	char s1[20],s2[20];
	int len;
	printf("\nenter the string = ");
	gets(s1);
	printf("enter the 2nd string = ");
	gets(s2);
/*	len=strlen(s1);
	printf("\nstring lenght = %d",len);
	strrev(s1);
	printf("\nstring reverse = %s",s1);
	strupr(s1);
	printf("\nstring in uppercase = %s",s1);
	strlwr(s1);
	printf("\nstring in lowercase = %s",s1);
	strcat(s1,s2);
	printf("\nconcatenation = %s",s1);
*/	strcpy(s2,s1);
	printf("\n copy string = %s",s2);
}
