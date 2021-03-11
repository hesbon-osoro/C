#include<stdio.h>
#include<stdbool.h>
typedef struct EmployeeDetails{
  int idno;
  char name;
  int salary;
  float hours;
  struct EmployeeDetails *prev;
  struct EmployeeDetails *next;
}payslip;
  payslip* head=NULL;
  payslip* tail=NULL;
bool isEmpty(){
if(head==NULL){
  return true;
}else{
return false;
}
}
void push(int idno,char name[100],int salary,float hours)
{
  payslip* pay=malloc(sizeof(payslip));
  pay->idno=idno;
  pay->name=name[100];
  pay->salary=salary;
  pay->hours=hours;
  pay->prev=NULL;

  if(isEmpty()){
   pay->next=NULL;
   head=tail=pay;
  }else{
  pay->next=head;
  head->prev=pay;
  head=pay;
  }
}
void append(int idno,char name[100],int salary,float hours)
{
  payslip* add=malloc(sizeof(payslip));
  payslip* ptr;
  add->idno=idno;
  add->name=name[100];
  add->salary=salary;
  add->hours=hours;
  add->next=NULL;
  if(isEmpty()){
    add->prev=NULL;
    tail=head=add;
  }else{
  ptr=head;
  while(ptr->next!=NULL){
    ptr=ptr->next;
  }
  add->prev=ptr;
  ptr->next=add;
  tail=add;
  }
}
void DisplayForward()
{
  payslip* ptr=head;
  printf("[");
 if(isEmpty()){
    printf("(List is Empty!)");
  }else{
  while(ptr!=NULL){
    printf(" (%d %d %.2f) ",ptr->idno,ptr->salary,ptr->hours);
    ptr=ptr->next;
    }
 }
  printf("]\n");
  putchar('\n');
}
void DisplayBackward()
{
  payslip* ptr=tail;
  printf("[");
 if(isEmpty()){
    printf("(List is Empty!)");
  }else{
  while(ptr!=NULL){
    printf(" (%d %d %.2f) ",ptr->idno,ptr->salary,ptr->hours);
    ptr=ptr->prev;
    }
 }
  printf("]\n");
  putchar('\n');
}
int main()
{
  system("color b");
  printf("Display after pushing\n");
  push(12,"Wamakazi",5000,2.5);
  push(11,"Japakazi",500,4.5);
  push(13,"Mmunye",5000,2.5);
  push(18,"Majisifu",8500,5.5);
  push(19,"Majimarefu",5600,1.4);
  push(10,"Babayao",7250,10);
  DisplayForward();
  DisplayBackward();
printf("\nDisplay after appending\n");
  append(20,"Abdi",10000,5);
  append(30,"Babra",12000,4.5);
  append(40,"Clare",15400,7.2);
  append(50,"Grace",16400,8.1);
  append(60,"Zedekiah",18200,2.8);
  DisplayForward();
  DisplayBackward();

return 0;
}
