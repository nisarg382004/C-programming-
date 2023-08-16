#include<stdio.h>
void main()
{
	int num;
	printf("\nEnter any number :");
	scanf("%d",&num);
	if(num %2 == 0)
	{
		printf("\nYou entered the number %d",num);
		printf("\nThe number is even");
	}
	printf("\nEnd of example");
}
