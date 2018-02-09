#include<stdio.h>
int main()
{
int a,b,c;
printf("\n enter the two number:");
sacnf("%d %d",&a,&b);
c=a-b;
if(c%2==0)
{
printf("\n the difference is even:");
}
else
{
printf("\n the difference is odd:");
}
return 0;
}
