#include<stdio.h>
int main()
{
int a,i,count=0;
printf("\n enter the number:");
scanf("%d",&a);
for(i=2;i<=a;i++)
{
if(a%i==0)
count++;
}
if(count==1)
{
printf("prime");
}
else
{
printf("not prime");
}
retun 0;
}
