#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);
	if( n<0 )
	printf("Number entered is Negative");
	else if ( n>0 )
	printf("Number entered is Positive");
	else 
	printf("Number entered is Zero");
}
