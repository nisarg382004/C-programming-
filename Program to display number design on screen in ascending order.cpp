#include<stdio.h>
int main()
{
	int i,a;
	for ( i=0 ; i<=5 ; i++)
	{
		for ( a=1 ; a<=i ; a++ )
		printf("%d",a);
		printf("\n");
	}
}
