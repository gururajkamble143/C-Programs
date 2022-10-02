#include<stdio.h>
main()
{
	char s1[20];
	int i;
	printf("enter any string = ");
	gets(s1);
	printf("\neven character string = ");
	for(i=0;s1[i]!='\0';i++)
	{
		if(i%2==0)
		{
			printf("%c",s1[i]);
		}
	}
	printf("\nodd character string = ");
	for(i=0;s1[i]!='\0';i++)
	{
		if(i%2!=0)
		{
			printf("%c",s1[i]);
		}
	}
}
