#include<stdio.h>
#include<stdbool.h>

typedef struct MarksDoubly{
int index;
int marks;
struct MarksDoubly *next;
struct MarksDoubly *prev;
}data;
data *head=NULL;
data *current=NULL;
data *last=NULL;
bool isEmpty(){
return head==NULL;
}

void recordFirst(int index, int marks)
{
  //implements data as in a stack
data *link=malloc(sizeof(data));
link->index=index;
link->marks=marks;
link->prev=NULL;
if(isEmpty()){
  last=link;
  }else{
  head->prev=link;
}
link->next=head;
head=link;
}
void RecordLast(int index, int marks)
{
  //implements like in a queue
  data *link=malloc(sizeof(data));
  link->index=index;
  link->marks=marks;
  link->next=NULL;
  if(isEmpty()){
     last=link;
  }else{
  head->next=link;
  }
  link->prev=head;
  head=link;
}
void forwardRecords()
{
data *ptr=head;
printf("\nForward: First to Last or Top Down\n");
printf("[");
while(ptr!=NULL){
printf(" (%d,%d) ",ptr->index,ptr->marks);
ptr=ptr->next;
}
printf("]");
}

void backwardRecords()
{
data *ptr=last;
printf("\nForward: Last to First or Down Top\n");
printf("[");
while(ptr!=NULL){
printf(" (%d,%d) ",ptr->index,ptr->marks);
ptr=ptr->prev;
}
printf("]");
}

int main()
{
recordFirst(1,98);
recordFirst(2,95);
recordFirst(3,25);
recordFirst(4,78);
recordFirst(5,75);
recordFirst(6,65);
printf("\nFunctions called after forward insertion(push)\n");
forwardRecords();
backwardRecords();
RecordLast(1,98);
RecordLast(2,95);
RecordLast(3,25);
RecordLast(4,78);
RecordLast(5,75);
RecordLast(6,65);
printf("\nFunctions called after backward insertion(append)\n");
forwardRecords();
backwardRecords();
return 0;
}

