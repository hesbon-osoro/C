#include <stdio.h>
typedef struct Linah
{
  int marks;
  int index;
  struct Linah *next;
}data;
data *head=NULL;
data *ptr=head;
data *current;
void insert(int index, int marks)
{
 data *link;
 link=(malloc(sizeof(data))) ;

 link->index=index;
 link->marks=marks;
 link->next=head;
 head=link;
}
int isEmpty(){
  if(head==NULL){
  return 1;
  }else{
  return 0;
  }
}
void Delete()
{
 while(ptr!=NULL){

 }
}
int main()
{
  insert(1,98);
  insert(2,90);
  insert(3,76);

  printf("%d\t%d\n",head->index,head->marks);
}
