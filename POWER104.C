#include<stdio.h>
#include<conio.h>
void main()
{
int n,k,p=1,i;
printf("\n enter the value of base:");
scanf("%d",&n);
printf("\n enter the value of power:");
scanf("%d",&k);
for(i=0;i<k;i++)
{
p=p*k;
}
printf(" the output is\n");
getch();
}
