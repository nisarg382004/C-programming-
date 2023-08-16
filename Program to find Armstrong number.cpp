#include<stdio.h>
int main()
{
	int a,tot,b,n;
	printf("Enter the number : ");
	scanf("%d",&n);
	a=n;
	tot=0;
	while( a>0 )
	{
		b=(a%10);
		tot=tot+(b*b*b);
		a=a/10;
	}
	if ( n== tot)
	printf("%d is an Armstrong Number\n",n);
	else
	printf("%d is not an Armstrong Number\n",n);
}


