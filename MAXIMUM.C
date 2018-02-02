#include<stdio.h>
int main()
{
int array[100],maximum,size,location=1;
printf("enter no of element in array\n");
scanf("%d",&size);
printf("enter %d integers\n",size);
for(c=0;c<size;c++)
scanf("%d",&array[c]);
max=arr(0);
for(c=1;c<size;c++)
{
if(arr[c]<min)
{
min=arr[c];
location=c+1;
}
}
printf("\n element pre in location %d &its value is %d\n",location,max);
}
return0;
}
