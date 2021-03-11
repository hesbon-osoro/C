#include<stdio.h>
#define N 6
int Mark[10]={20,52,78,96,30,46};
int main()
{
int i,j,temp;
system("color a");
printf("elements before sorting\n");
for(i=0;i<N;i++)
{
printf("Mark[%d]=%d\n",i,Mark[i]);
}
for(i=N-1;i>=0;i--)
{
  for(j=0;j<i;j++)
{
  if(Mark[j]>Mark[j+1])
  {
    temp=Mark[j];
    Mark[j]=Mark[j+1];
    Mark[j+1]=temp;
  }
}

}

printf("elements after ascend sort\n");
for(i=0;i<N;i++)
{
printf("Mark[%d]=%d\n",i,Mark[i]);
}
for(i=N-1;i>=0;i--)
{
  for(j=0;j<i;j++)
{
  if(Mark[j]<Mark[j+1])
  {
    temp=Mark[j];
    Mark[j]=Mark[j+1];
    Mark[j+1]=temp;
  }
}
}
printf("elements after descend sort\n");
for(i=0;i<N;i++)
{
printf("Mark[%d]=%d\n",i,Mark[i]);
}
return 0;
}
