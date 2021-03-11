#include<stdio.h>
int main()
{
int n,x,y,mult;
for(n=1;n<10;n++)
printf("\t%d",n);
printf("\n");
for(x=1;x<10;x++)
{
  printf("%d\t",x);
  for(y=1;y<10;y++){
  mult=y*x;
  printf("%d\t",mult);
  }
  printf("\n");
}

return 0;
}
