#include<stdio.h>
int main()
{
	int n, i=0;
	printf("\nEnter a number : ");
	scanf("%d",&n);
	while (n>0)
	{
		n=n/10;
		i++;
	}
	printf("\nNumber has %d digits",i);
}
