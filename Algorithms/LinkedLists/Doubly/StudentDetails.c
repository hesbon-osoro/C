#include<stdio.h>
#include<stdbool.h>
typedef struct StudentDetails{
int index;
char name;
int marks;
struct StudentDetails* prev;
struct StudentDetails* next;
}details;
details* head=NULL;
details* tail=NULL;
bool isEmpty(){
  if(head==NULL){
    return true;
  }else{
  return false;
  }
}
void push(int index,char name[100],int marks)
{
  details* input=malloc(sizeof(details));
    input->index=index;
    input->name=name[100];
    input->marks=marks;
  if(isEmpty()){
    input->next=NULL;
    input->prev=NULL;
    head=tail=input;
  }else{
  input->prev=NULL;
  input->next=head;
  head->prev=input;
  head=input;
  }
}
void append(int index,char name[100],int marks)
{
details* insert=malloc(sizeof(details));
details* ptr;
insert->index=index;
insert->name=name[100];
insert->marks=marks;
insert->next=NULL;
if(isEmpty()){
  insert->prev=NULL;
  tail=head=insert;
}else{
  ptr=head;
  //navigate the head to the last data to make it the tail
  while(ptr->next!=NULL){
    ptr=ptr->next;
  }
 ptr->next=insert;
 insert->prev=ptr;
 tail=insert;
}
}
void printForward()
{
  details* ptr=head;
  printf("[");
  while(ptr!=NULL){
    //printf("(%d %s %d) ",ptr->index,ptr->name,ptr->marks);
    printf(" (%d %d) ",ptr->index,ptr->marks);
    ptr=ptr->next;
  }
  printf("]");
  putchar('\n');
}
void printBackward()
{
  details* ptr=tail;
  printf("[");
  while(ptr!=NULL){
    //printf("(%d %s %d) ",ptr->index,ptr->name,ptr->marks);
    printf(" (%d %d) ",ptr->index,ptr->marks);
    ptr=ptr->prev;
  }
  printf("]");
  putchar('\n');
}
int main()
{
system("color a");
printf("Display after pushing\n");
 push(8228,"Wazimu",78);
 push(8390,"Mshamba",92);
 push(2540,"Prince",79);
 push(4857,"Pinky",75);
 push(8286,"Framonya",81);
 push(5689,"Ali",26);

 printForward();
 printBackward();
printf("\nDisplay after appending\n");
 append(8274,"Lee vis",68);
 append(8202,"Kepha",81);
 append(8275,"Aryta",56);
 append(8204,"Kerus",54);
 append(5006,"Matara",55);
 append(8172,"Juma",74);

printForward();
printBackward();

return 0;
}
