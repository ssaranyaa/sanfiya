#include<stdio.h>
int main()
ini a,b,s;
printf("\n enter the two numbers:");
scanf("%d %d",&a,&b);
s=a-b;
if(s%2==0)
{
printf("%d",the difference is even);
}
else
{
printf("%d",the difference is odd);
}
return 0;
}
