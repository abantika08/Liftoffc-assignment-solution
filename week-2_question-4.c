#include<stdio.h>
int main()
{
  int array[20],a,b,max=0,min=0;
printf("number of elements: ");
scanf("%d",&b);
printf("ENTER THE ELEMENTS OF ARRAY: ");
for(a=0;a<b;a++)
scanf("%d",&array[a]);
for(a=0;a<b;a++)
min=max=array[0];
for(a=0;a<b;a++)
{
    if(array[a]>max)
    max=array[a];
    if(array[a]<min)
    min=array[a];
}
printf("SMALLEST ELEMENT : %d",min);
printf("LARGEST ELEMENT : %d",max);
return 0;
}