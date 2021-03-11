#include<stdio.h>
int main()
{
int i,j;
int start,end;
printf("Enter Lower Limit: ");
scanf("%d",&start);
printf("Enter upper limit: ");
scanf("%d",&end);
for(i=2;i<=end;i++){
for(j=2;j<=(i/j);j++)
if(!(i%j!=0))
break;
if(j>(i/j)){
  if(i>=start&&i<=end){
printf("%d\t",i);
}
}
}
return 0;
}
