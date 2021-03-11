#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
int x,y;
double dec;
int nr,dr,m,n;
double logx,logy,ans;
float a,b,c;
nr=10,dr=16;
dec=nr/dr;
a=(log(y)*log(dec)-log(x));
b=log(10)-log(y);
c=a/b;
ans=antlog(c);
printf("n=%f",ans);



return 0;
}
