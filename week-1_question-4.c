#include<stdio.h>
int main()
{
    float phy,chem,bio,comp,maths;
    float percentage;
    scanf("%f %f %f %f %f",&phy,&chem,&bio,&comp,&maths);
    percentage= ((phy+chem+bio+comp+maths)/500*100);
    if(percentage>=90)
    printf("grade A");
    else if(percentage>=80)
    printf("grade B");
    else if(percentage>=70)
    printf("grade C");
    else if(percentage>=60)
    printf("grade D");
    else if(percentage>=40)
    printf("grade E");  
    else
    printf("grade F");
}