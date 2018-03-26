#include<stdio.h>
int main()
{
int l,b,h,vol,t;
printf("\n enter the length breadth and height:");
scanf("%d%d%d",&l,&b,&h);
vol=l*b*h;
t=2(l*b)+2(l*h)+2(h*b);
printf("\n volume:%f",vol);
printf("\n total surface area:%f",t);
return 0;
}
