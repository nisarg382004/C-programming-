#include<stdio.h>
using namespace std;
main()
{
	int f,s,add,sub,mul;
	float div;
	printf("Enter two integer:\n");
	scanf("%d",&f,&s);
	add=f+s;
	sub=f-s;
	mul=f*s;
	div=f/s;
	printf("sum=%d\n",add);
	printf("difference=%d\n",sub);
	printf("multiplication=%d\n",mul);
	printf("division=%d\n",div);
}
