#include<stdio.h>
#include<stdbool.h>
typedef struct alphaSingly
{
int index;
char alpha;
struct alphaSingly *next;
}data;
data *head=NULL;
data *prev=NULL;
data *ptr;

void printAlpha(){
ptr=head;
printf("[ ");
while(ptr!=NULL){
printf("(%d,%c) ",ptr->index,ptr->alpha);
ptr=ptr->next;
}
printf("]\n");
}
void insertAlpha(int index, char alpha)
{
data *link;
link=malloc(sizeof(data));
link->index=index;
link->alpha=alpha;
link->next=head;
head=link;
}
bool isEmpty(){
return head==NULL;
}
data *deleteAlpha()
{
  data *tempLink=head;
  head=head->next;
  return tempLink;
}
int length(){
int len=0;
data *current;
for(current=head;current!=NULL;current=current->next){
  len++;
}
return len;
}
data *findAlphaIndex;
int findAlpha(int index){
data *current=head;
while(current->index!=index){

  if(head==NULL){
    return NULL;
  }
  if(current->next==NULL){
  return NULL;
  }
    current=current->next;
}
return current;
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
  if(head==current){
    head=head->index;
  }else{
  prev->next=current->next;
  }
  return current;
}
void alphaSort()
{
 data *current;
 data *next;
 int i,j,tempIndex,tempAlpha;
 const int len=length();
 for(i=0;i<len;i++){
    current=head;
    next=head->next;
  for(j=len-1;j>=1;j--){
    if(current->alpha>next->alpha){
      tempAlpha=current->alpha;
      current->alpha=next->alpha;
      next->alpha=tempAlpha;

      tempIndex=current->index;
      current->index=next->index;
      next->index=tempIndex;
  }
  current=current->next;
  next=next->next;
  }
 }
 }
int main()
{
system("color 18");
insertAlpha(1,'A');
insertAlpha(2,'B');
insertAlpha(3,'C');
insertAlpha(3,'D');
insertAlpha(5,'I');
insertAlpha(6,'K');
insertAlpha(7,'G');
insertAlpha(8,'H');
printAlpha();
//deleting alphas
while(!isEmpty()){
  data *temp=deleteAlpha();
  printf("Deleted alphas: (%d,%c)\n",temp->index,temp->alpha);
}
printf("Restored Alphas\n");
insertAlpha(1,'A');
insertAlpha(2,'B');
insertAlpha(3,'C');
insertAlpha(3,'D');
insertAlpha(5,'I');
insertAlpha(6,'K');
insertAlpha(7,'G');
insertAlpha(8,'H');
printAlpha();

while(!isEmpty()){
  findAlphaIndex=findAlpha(3);
    if(findAlphaIndex!=NULL){
    printf("Found Item: (%d,%c)\n",findAlphaIndex->index,findAlphaIndex->alpha);
    break;
    }else{
    printf("Item Can't be Found\n");
    break;
    }
}
printf("List after deleting index 3 items\n");
delete(3);
printAlpha();
printf("Sorted Alphas\n");
alphaSort();
printAlpha();
return 0;
}
