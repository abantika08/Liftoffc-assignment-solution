#include<stdio.h>
void main()
{
    int i,j,count;
    scanf("%d" ,&count);
    for(i=1;i<=count;i++)
    {
        for(j=1;j<=count;j++)
        {
            if(i==j || i+j==count-1)
        {
            printf("*");
        }
        else
        {
            printf(" ");
         }
    }
        printf("\n");
    }
}