#include<stdio.h>
void main()
{
int height, base;
float ans;/*ans may come in fractions*/
printf("Enter height and base\n");
scanf("%d%d",&height,&base);
ans=0.5*height*base;
/*mathematical formula*/
printf("Area if triangle is %f",ans);
}