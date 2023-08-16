#include<stdio.h>
int main()
{
	int a, tot=0 , b;
	printf("\nEnter the number : ");
	scanf("%d",&a);
	while(a>0)
	{
		b=(a%10);
		tot= tot+(b*b);
		a=a/10;
	}
	printf("\nSum of squares of digits is %d\n",tot);
	return 0;
}
