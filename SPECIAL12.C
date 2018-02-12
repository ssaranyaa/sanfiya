#include<stdio.h>
#include<conio.h>
void main()
{
int i,count=0;
char s[100];
printf("\n enter the string:");
scanf("%",&s);
while(s[i]!=\0)
{
if(s[i]>=0 && s[i]<=9)
count++;
i++;
}
printf("\n special character %d",count);
getch();
}
