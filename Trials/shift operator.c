#include<stdio.h>
int main()
{
int c=200;
c&=2;
printf("value of c %d\n",c);
c=200;
c|=2;
printf("value of c %d\n",c);
c=200;
c^=2;
printf("value of c %d\n",c);
c=200;
c<<=2;
printf("value of c %d\n",c);
c=200;
c>>=2;
printf("shifted c is %d\n",c);
//conditional
int a,b;
a=5;
b=(a>0)?20:10;
printf("Value of b: %d",b);
return 0;
}
