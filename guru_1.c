#include<stdio.h>
#include<string.h>
main()
{
	char s1[20],s2[20];
	int len=0;
	printf("enter any string = ");
	gets(s1);
	printf("enter 2nd string = ");
	gets(s2);
/*	len=strlen(s1);
	printf("string lenght = %d",len);
	strrev(s1);
	printf("reverse string = %s",s1);
	strupr(s1);
	printf("uppercase = %s",s1);
	strlwr(s1);
	printf("lowercase = %s",s1);
	strcat(s1,s2);
	printf("concatenate = %s",s1);
*/	strcpy(s2,s1);
	printf("copy = %s",s2);
}
