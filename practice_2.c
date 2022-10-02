#include<stdio.h>
#include<math.h>
main()
{
	int p,i,n,rem,len=0,temp;
	printf("enter any number = ");
	scanf("%d",&n);
	
	temp=n;
	while(n!=0)
	{
		n=n/10;
		len++;
	}
	n=temp;
	for(i=len-1;i>=0;i--)
	{
		p=pow(10,i);
		rem=n/p;
		n=n%p;
		
	switch(rem)
	{
		case 0:
			printf(" zero");
			break;
		case 1:
			printf(" one");
			break;
		case 2:
			printf(" two");
			break;
		case 3:
			printf(" three");
			break;
		case 4:
			printf(" four");
			break;
		case 5:
			printf(" five");
			break;
		case 6:
			printf(" six");
			break;
		case 7:
			printf(" seven");
			break;
		case 8:
			printf(" eight");
			break;
		case 9:
			printf(" nine");
	}
	}
}
