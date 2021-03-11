#include<stdio.h>
int main()
{
int i,k,j,n;
int var;
n=15;
printf("Factors of: %d\n",n);
for(i=n;i<=n;i++)
{
var=n;
for(k=2;k<=var;k++){
for(j=2;j<=var;j++){
if(n%j==0){
printf("%d ",j);
var=var/j;
}
}
}
}
return 0;
}
