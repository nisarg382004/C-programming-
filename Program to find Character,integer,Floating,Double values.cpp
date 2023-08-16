#include<iostream>
using namespace std;
main()
{
	int a,b,c=11;
	char d,e,f='m';
	float g,h,i=2.0;
	double j,k,l=3.0;
	a=12;
	d='a';
	g=4.0;
	j=5.0;
	printf("Enter character value : ");
	scanf("%c",&e);
	
	printf("Enter integer value : ");
	scanf("%d",&b);
	
	printf("Enter Floating value : ");
	scanf("%f",&h);
	
	printf("Enter double value : ");
	scanf("%If",&k);
	
	printf("Integers values are %d %d %d\n",a,b,c);
	
	printf("Character values are %c %c %d\n",d,e,f);
	
	printf("Floating point values are %f %f %f\n",g,h,i);
	
	printf("Double values are %If %If &If",j,k,l);
}
