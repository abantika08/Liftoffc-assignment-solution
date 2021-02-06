#include<stdio.h>
int main()
{
    int x,y,z1,z2,z3,z4;
    printf("enter any two numbers");
    scanf("%d %d",&x,&y);
    z1=x+y;
    z2=x-y;
    z3=x*y;
    z4=x/y;
    printf("%d %d %d %d",z1,z2,z3,z4);
    return 0;
}