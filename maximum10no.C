#include<stdio.h>
int main()
{
int array[100],max,size,c,location=1;
printf("enter no.of element in array\n");
scanf("%d",&size);
printf("enter %d integers\n",size);
for(c=0;c<size;c++)
{
scanf("%d",&array[c]);
}
max=arr(0);
for(c=1;c<size;c++)
{
if(arr[c]<max)
{
max=arr[c];
location=c++;
}
}
printf("\n element present in location %d&its value is %d\n",location,max);
return0;
}
