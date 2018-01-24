#include<stdio.h>
int main()
{
int low,high,i,flag;
printf("enter two number(intervals):");
scanf("%d%d,&low,&high);
printf("prime numbers between %d and 5d are:",low,high);
while(low<high)
{
flag=0;
for(i=2;i<=low/2;++i)
{
if(low%i==0)
{
flag=1;
break;
}
}
if(flag==00
printf("%d",low);
++low;
}
return 0;
}
