#include<stdio.h>
int main()
{
int i,j,n;
n=100;
j=2;
while(n!=1)
{
if(n%j==0){
printf("%d ",j);
n=n/j;
}else{
   j++;
}
}
return 0;
}
