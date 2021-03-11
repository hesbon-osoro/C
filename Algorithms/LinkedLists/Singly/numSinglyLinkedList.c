#include<stdio.h>
#include <stdlib.h>
#include<stdbool.h>
int num;
int index;
typedef struct numSingly{
int index;
int num;
struct numSingly *next;
}data;
data *head=NULL;
data *prev=NULL;
data *link;
//displaying the list
void printNum(){
data *ptr=head;
//starting from the
printf("[");
while(ptr!=NULL){
printf("(%d,%d) ",ptr->index,ptr->num);
ptr=ptr->next;
}
printf("]\n");
}
void numData(int index, int num){
//create a link
link=malloc(sizeof(data));
link->index=index;
link->num=num;
//pointing it to old first node
link->next=head;
//pointing to new first node
head=link;
}
//deletint first item
data* deleteNum()
{
  //save first link
data *tempLink=head;
  //mark next to first link as first
  head=head->next;
  //return the deleted link
  return tempLink;
}
int isEmpty(){
  if(head==NULL){
    return 1;
  }else{
    return 0;
  }
}
int length(){
  int len=0;
data *current;
for(current=head;current!=NULL;current=current->next){
    len++;
  }
  return len;
}
data* find(int index){
data *current;
current=head;
if(head==NULL){
  return NULL;
}for(current=head;current->next!=NULL;current=current->next){
while(current->index!=index)
{
  if(current==NULL){
    return NULL;
  }
   current=current->next;
}

return current;
}
}
data* delete(int index)
{
  data *current=head;
  prev=NULL;
  if(head==NULL){
    return NULL;
  }
  while(current->index!=index)
  {
    if(current->next==NULL){
      return NULL;
    }else{
    prev=current;
    current=current->next;
    }
  }
  if(current==head){
   head=head->next;
  }else{
  prev->next=current->next;
  }
  return current;
}
void ascSort()
{
 int i,j,tempIndex,tempNum;
data* next;
data* tempHead;
const int len=length();
for(i=0;i<len;i++)
{
  tempHead=head;
  next=head->next;
  for(j=len-1;j>=1;j--) {
     if(tempHead->num>next->num){
      tempNum=tempHead->num;
      tempHead->num=next->num;
      next->num=tempNum;

      tempIndex=tempHead->index;
      tempHead->index=next->index;
      next->index=tempIndex;
    }
    tempHead=tempHead->next;
    next=next->next;
  }
}
}
void reverseNum(data** head_ref){
data* prev=NULL;
data* next;
data* current=*head_ref;
while(current!=NULL){
  next=current->next;
  current->next=prev;
  prev=current;
  current=next;
  }
  *head_ref=prev;
}
int main()
{
system("color a5");
numData(1,10);
numData(2,28);
numData(3,30);
numData(10,28);
numData(5,50);
numData(11,35);
numData(3,70);
numData(8,80);
printf("Here goes a numSinglyLinked List\n");
printNum();
//deleting items from the first in linked list
while(! isEmpty()){
 data *temp=deleteNum();
  printf("Deleted Item: (%d,%d)\n",temp->index,temp->num);
}
printf("List after deletion of all nums\n");

printNum();
printf("\n");
//restoring deleted items
numData(1,10);
numData(2,28);
numData(3,30);
numData(10,28);
numData(5,50);
numData(11,35);
numData(3,70);
numData(8,80);
printf("Restored Items\n");
printNum();

while(!isEmpty()){
    data* findLink=find(3);
if(findLink!=NULL){
  printf("Found Item: (%d,%d)\n",findLink->index,findLink->num);
  break;
}else{
printf("Item Can't be Found\n");
break;
}
}
printf("The list after deleting First Item\n");
deleteNum();

printf("\nList after deleting (5,50)\n");
delete(3);
printNum();
printf("Sorted Items\n");
ascSort();
printNum();
printf("Reversed Nums\n");
reverseNum(&head);
printNum();
return 0;
}


