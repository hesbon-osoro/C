#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
void greater(int v[]);
int i,c,pos;
int cont=0;
int main()
{
int mat[SIZE]={};
int rank[SIZE]={80,82,83,82,78};
/*for(c=0;c<SIZE;c++)
{
printf("Number[%d]:\n",c+1);
scanf("%d",&mat[c]);
}*/
for(c=0;c<SIZE;c++)
{
printf("%d\t",mat[c]);
}
int matCopy[SIZE];
for(i=0;i<SIZE;i++)
matCopy[i]=mat[i];
for(c=0;c<SIZE;c++)
{
greater(matCopy);
rank[pos]=c+1;
}
printf("\n");
for(c=0;c<SIZE;c++)
{
printf("%d\t",rank[c]);
}
return 0;
}
void greater(int v[])
{
int greater=-9999;
for(c=0;c<SIZE;c++)
{
if(v[c]>greater)
{
greater=v[c];
pos=c;
}
v[pos]=0;
}
}
