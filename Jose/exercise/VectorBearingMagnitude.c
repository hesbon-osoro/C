#include<stdio.h>
#include<math.h>
# define PI 3.141592654
int main()
{
float x,y;
float r;
double angl;
x=3;y=4;
/*printf("Enter coordinates in the form(x,y): ");
scanf("%f %f",&x,&y);*/
r=sqrt(pow(x,2)+pow(y,2));
angl=atan(y/x);//radiens
angl=(angl*180)/PI;//degrees
printf("Vector(%.2f,%.2f)\nMagnitude: %.2f\nBearing %.1f degrees\n",x,y,r,angl);
return 0;
}
