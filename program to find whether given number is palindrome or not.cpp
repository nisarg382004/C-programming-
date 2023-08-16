#include<stdio.h>
int main()
{
	int n, revnum=0,rem,orignum;
	printf("Enter the number : ");
	scanf("%d",&n);
	orignum = n;
	while(n!=0)
	{
		rem = n%10;
		revnum*10+rem;
		n/=10;
	}
	if( orignum == revnum )
	printf("%d is palindrome.",orignum);
	else
	printf("%d is not a palindrome.",orignum);
}
