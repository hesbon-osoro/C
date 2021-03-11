#include<stdio.h>

#define SIZE 10
typedef struct Marks{
int index;
int marks;
}data;
data* marksArry[SIZE];
data* dummyItem;
int marksCode(int index)
{
  return index%SIZE;
}
void MarksInput(int index,int marks)
{
  data* input=malloc(sizeof(data));
  input->index=index;
  input->marks=marks;
  int marksIndex;
  marksIndex=marksCode(index);
  while(marksArry[marksIndex]!=NULL&&marksArry[marksIndex]->index!=-1)
  {
    ++marksIndex;
    marksIndex%=SIZE;
  }
  marksArry[marksIndex]=input;
}
void OutputMarks()
{
  int i;
 for(i=0;i<SIZE;i++){
    if(marksArry[i]!=NULL){
  printf("(%d,%d) ",marksArry[i]->index,marksArry[i]->marks);
 }else{
 printf(" ~~ ");
  }
}
}
data* findIndex(int index)
{
  int f=0;
  data *ptr;
  int marksIndex;
  marksIndex=marksCode(index);
  while(marksArry[marksIndex]!=NULL){
    if(marksArry[marksIndex]->index==index){
         f=1;
    ++marksIndex;
    marksIndex%=SIZE;
     return ptr->index,marksArry[marksIndex];
    }
  }
   if(f==1){
    printf("Marks for index %d: %d\n",ptr->index,marksArry[marksIndex]);
  }else{
  printf("Index not found\n");
  }
  return NULL;
}
int main()
{
 MarksInput(1,10);
 MarksInput(2,20);
 MarksInput(3,32);
 MarksInput(2,45);
 MarksInput(5,54);
 MarksInput(6,76);
 MarksInput(7,84);
 MarksInput(8,94);
 MarksInput(9,25);

 OutputMarks();
 printf("\nSearching...\n");
 findIndex(10);

 return 0;
}

