#include<stdio.h>
int main()
{
int i,sum=0,n,a[i];
printf("\n enter the number:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
printf("\n sum is %d",sum);
return 0;
}
