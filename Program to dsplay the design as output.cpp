#include<stdio.h>
int main()
{
	int i,a;
	for ( i=0 ; i<=3 ; i++ )
	{
		for (a=1 ; a<=i ; a++ )
		printf(" * ");
		printf("\n");
	}
}
