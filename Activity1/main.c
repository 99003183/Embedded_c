#include<stdio.h>
int main()
{
	int a,b,c,n,i;
	a=0;b=1;
	n=15;
//	printf("Enter the number of Fibonacci Numbers to be generated : ");
//	scanf("%d",&n);
	printf("%d\n%d",a,b);
	for(i=0;i<n-2;i++)
	{
		c=a+b;
		printf("\n%d",c);
		a=b;b=c;
	}
	return 0;
}
