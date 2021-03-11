#include<stdio.h>
#define MAX 5
char LinahQueue[MAX];
int front=0;
int rear=-1;
int isEmpty(){
if(rear ==-1){
return 1;
}else{
return 0;
}
}
int isFull(){
if(rear==MAX){
return 1;
}else{
return 0;
}
}
void enqueue(char data){
if(!isFull()){
  rear=rear+1;
  LinahQueue[rear]=data;
  }else{
  printf("the queue is full, couldn't add %c\n",data);
  }
}
void dequeue()
{
  int data;
  if(!isEmpty()){
    data=LinahQueue[front];
        printf("%c\t",data);
    front=front+1;
  }else{
  printf("the queue is empty couldn't dequeue");
  }
}
int main()
{
enqueue('D');
enqueue('I');
enqueue('C');
enqueue('Q');
enqueue('E');
enqueue('A');
enqueue('B');
enqueue('C');

while(front<=rear){
  dequeue();
}
return 0;
}
