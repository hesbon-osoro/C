#include<stdio.h>
#include<stdbool.h>
#define SIZE 10
typedef struct MathsTest{
  int index;
  int marks;
}maths;
int i,j,temp,max,sum=0,aver=0,count=0,rank=0;
int randRank=0,locn[SIZE],rankArray[SIZE];
int k,tempIndex,findArray[SIZE];
bool found=false;

maths test1[SIZE]={
8228,10,
8226,20,
8274,30,
8286,20,
8390,50,
8271,40,
8275,60,
8202,80,
8400,98,
8402,98
};

void Display()
{
  printf("Index\tMarks\n");
  for(i=0;i<SIZE;i++){
    printf("%d\t%d\n",test1[i].index,test1[i].marks);
  }
  printf("\n");
}
void BubbleDescendSort()
{
  for(i=SIZE-1;i>=0;i--){
    for(j=0;j<i;j++){
      if(test1[j].marks<test1[j+1].marks){
      temp=test1[j].marks;
      test1[j].marks=test1[j+1].marks;
      test1[j+1].marks=temp;

      tempIndex=test1[j].index;
      test1[j].index=test1[j+1].index;
      test1[j+1].index=tempIndex;
      }
    }
  }
}
int MaxMark()
{
  max=test1[0].marks;
  for(i=0;i<SIZE;i++){
    if(test1[i].marks>max){
    max=test1[i].marks;
    }
  }
  return max;
}

void Rank_Cont()
{
  printf("This is a continuous rank\n");
  for(i=SIZE-1;i>=0;i--){
      rank=1;sum=1;count=1;
    for(j=0;j<i;j++){
      if(j<=i&&test1[j].marks>test1[j+1].marks){
        count++;
        rank++;
      }
      if(j<=i&&test1[j].marks==test1[j+1].marks){
        sum++;
        count++;
      }
  }
  rankArray[i]=rank+(sum-1)/count;
 }
  printf("Index\tMarks\tRank\n\n");
  for(i=0;i<SIZE;i++){
    printf("%d\t%d\t%d\n",test1[i].index,test1[i].marks,rankArray[i]);
  }

printf("\n");
}

void main()
{
  system("color 3");
  system("mode 100");
  system("title StudentAnalysis");
  printf("Original Student Details\n");
  Display();
  printf("Sorted Student Details: Descend\n");
  BubbleDescendSort();
  Display();
  printf("Ranked Student Records\n");
  Rank_Cont();
  Rank_Discont();

  printf("Note the difference for the 2 ranks\n\n");
  printf("Highest Marks: %d\n",MaxMark());
}

void Rank_Discont()
{
  printf("This is a Discontinuous rank\n");
  for(i=SIZE-1;i>=0;i--){
      rank=1;sum=1;count=1;
    for(j=0;j<i;j++){
      if(j!=i&&test1[j].marks>test1[i].marks){
        count++;
        rank++;
      }
      if(j!=i&&test1[j].marks==test1[i].marks){
        sum++;
        count++;
      }
  }
  rankArray[i]=rank+(sum-1)/count;
 }
  printf("Index\tMarks\tRank\n\n");
  for(i=0;i<SIZE;i++){
    printf("%d\t%d\t%d\n",test1[i].index,test1[i].marks,rankArray[i]);
  }

printf("\n");
}
