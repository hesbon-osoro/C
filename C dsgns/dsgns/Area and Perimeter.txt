#include<stdio.h>
int main()
{
int l, w, Area, Perimeter;
printf("Enter Length[l] and Width[w]\n");
scanf("%d%d",&l,&w);
Perimeter= 2*(l+w);
Area= l*w;
printf("The Perimeter is:%d\n",Perimeter);
printf("The Area is:%d\n",Area);
return 0;
}
