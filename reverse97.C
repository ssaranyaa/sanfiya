#include<stdio.h>
int main()
{
int rev=0,rem,num;
printf("\n enter the number:");
scanf("%d",&num);
while(num!=0)
{
rem=num%10;
rev=rev*10+rem;
num=num%10;
printf("%d\n the rev of given num is:",rev);
}
return 0;
}
