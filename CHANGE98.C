#include<stdio.h>
int main()
{
int n,num,i;
printf("\n enter the num:");
scanf("%d",&n);
printf("\n enter the numbers with one changed number:");
for(i=0;i=n;i++)
{
scanf("%d",&num[i]);
}
for(i=0;i<=n;i++)
{
if(i!=num[i])
{
printf("%d",i);
}
else
{
break;
}
}
return 0;
}
