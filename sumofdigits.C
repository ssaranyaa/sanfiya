#include<stdio.h>
int main()
{
int a,sum=0,d;
printf("\n enter the value of a:");
scanf("%d",&a);
while(a!=0)
{
d=a%10;
sum=sum+d;
a=a/10;
}
printf("\n sum:");
return 0;
}
