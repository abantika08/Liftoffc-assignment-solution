#include<stdio.h>
int main()
{
    float r,d,c,a;
    printf("enter the radius");
    scanf("%f",&r);
    d=2*r;
    printf("diameter:%f",d);
    c=2*3.14*r;
    printf("circumference:%f",c);
    a=3.14*r*r;
    printf("area:%f",a);
}