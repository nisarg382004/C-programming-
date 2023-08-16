#include<stdio.h>
using namespace std;
int main()
{
int first,second,temp;
printf("Enter the first number : ");
scanf("%d",&first);

printf("Enter the second number : ");
scanf("%d",&second);

//value of first is assingned to temp
temp=first;

//value of second is assigned to first
first=second;

//value of temp (initial value of first ) is assigned to second
second=temp;

//%2 It displays number up to 2 decimal points.
printf("After swapping first number = %d\n",first);
printf("After swapping second number = %d\n",second);

return 0;
}
