#include<stdio.h>
#include<string.h>
int main()
{
char x[20],y[30]
int z;
printf("\n enter the string:");
scanf("%d",&x);
strcpy(y,x);
strrev(y);
z=strcmp(x,y);
if(z==0)
{
printf("\n is a palindrome");
}
else
{
printf("\n is a not palindrome");
}
return 0;
}
