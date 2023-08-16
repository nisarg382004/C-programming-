#include<iostream>
using namespace std;
main()
{
	int a,b;
	printf("Enter First Number : ");
	scanf("%d",&a);
	
	printf("Enter Second Number : ");
	scanf("%d",&b);
	b=b-a;
	a=b+a;
	b=a-b;
	
	printf("\nNew Value of First Number : %d",a);
	
	printf("\nNew value of Second Number : %d",b); 
}
