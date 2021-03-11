#include<stdio.h>
#include<math.h>
int main()
{
int x,angle,ll,ul;
float i,h;
double pie=3.141592654;
printf("Enter an angle\n");
scanf("%d",&angle);
printf("Enter the Range e.g : 0<x<360\n");
printf("Enter the Lower Limit\n");
scanf("%d",&ll);
printf("Enter the Upper Limit\n");
scanf("%d",&ul);
printf("Angles in the range %d<=x<=%d (degrees)\n",ll,ul);
for(x=ll;x<=ul;x++)
{
i=sin(pie*angle/180);
h=sin(x*pie/180);
if(h==i)
{
printf("%d\t",x);
}
}
getch();
return 0;
}
