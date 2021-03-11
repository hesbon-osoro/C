#include<stdio.h>
#define MAX 10

int marks[10]={80,90,92,10,68,92,10,75,80,85};
int i,j,k,n;

int main()
{
system("color 3");
system("mode 100");
system("title Array Ranking");
printf("Unsorted Marks\n");
Display();

//random_rank(marks,MAX);

asc_sort(marks,MAX);
Display();
asc_rank(marks,MAX);

desc_sort(marks,MAX);
Display();
desc_rank(marks,MAX);

return 0;
}

void Display()
{
for(i=0;i<MAX;i++)
{
printf("%d  ",marks[i]);
}
printf("\n\n");
}

void asc_sort(int marks[], int n)
{
printf("\nMarks: Ascend Sort\n");
int i,var,j;
for(j=MAX-1;j>=0;j--)
{
  for(i=0;i<j;i++)
  {
    if(marks[i]>marks[i+1])
    {
    var=marks[i];
    marks[i]=marks[i+1];
    marks[i+1]=var;
    }
  }
  }
}

void asc_rank(int marks[], int n)
{
int count=0,sum=0,rank=0;
int rankArray[MAX];
printf("\n\nAscend Ranking\n");
printf("Marks\tRank\n");
for(i=0;i<MAX;i++)
{
  rank=1;sum=1;count=1;
   for(j=0;j<i;j++)
    {
        if(j<=i&&marks[j]<marks[i])
        {
            rank++;
            count++;
        }
        if(j<=i&&marks[j]==marks[i])
        {
          sum++;
          count++;
        }
    }
    rankArray[i]=rank+(sum-1)/count;
}
for(i=0;i<MAX;i++)
{
  printf("%d\t%d\n",marks[i],rankArray[i]);
}
}

void desc_sort(int marks[], int n)
{
printf("\nMarks: Descend Sort\n");
int i,var,j;
for(j=MAX-1;j>=0;j--)
{
  for(i=0;i<j;i++)
  {
    if(marks[i]<marks[i+1])
    {
    var=marks[i];
    marks[i]=marks[i+1];
    marks[i+1]=var;
    }
  }
  }
}

void desc_rank(int marks[], int n)
{
int count=0,sum=0,rank=0;
int rankArray[MAX];
printf("\n\nDescend Ranking\n");
printf("Marks\tRank\n\n");
for(i=0;i<MAX;i++)
{
  rank=1;sum=1;count=1;
   for(j=0;j<i;j++)
    {
        if(j!=i&&marks[j]>marks[i])
        {
            rank++;
            count++;
        }
        if(j!=i&&marks[j]==marks[i])
        {
          sum++;
          count++;
        }
    }
    rankArray[i]=rank+(sum-1)/count;
}
for(i=0;i<MAX;i++)
{
  printf("%d\t%d\n",marks[i],rankArray[i]);
}
}
/*
void random_rank(int marks[],int n)
{
  int findArray[MAX];
 printf("Rank without predefined order\n");
 printf("Use of Linear Search \n");
 //linear search algorithm
 for(i=0;i<MAX;i++){
    for(j=0;j<i;j++)
      if(marks[i]==marks[j]){
      count++;
      findArray[k]=marks[i];
        for(k=i+1;k!=MAX;k++){
          if(marks[i]==findArray[k]){
            count++;
            }
          }
        }
  }return count;

}*/
