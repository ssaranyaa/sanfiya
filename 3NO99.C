#include<stdio.h>
int main()
{
int a,b,c,s;
printf("\n enter the number a,b,c:");
scanf("%d%d%d",&a,&b,&c);
s=(a*b)%c;
printf("\n %d",s);
return 0;
}
