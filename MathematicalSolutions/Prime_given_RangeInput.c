#include<stdio.h>
int main()
{
int i,n;
int start,end;
scanf("%d",&start);
printf("Enter upper limit: ");
scanf("%d",&end);
printf("2\t");
for(n=3;n<100;n++)
{
for(i=2;i<n;i++)
{
if(!(n%i))//if it has a factor
{
 break;
}
if((n/i==1))
{
if(n>=start&&n<=end){
printf("%d\t",n);
}
}
}
}
return 0;
}
