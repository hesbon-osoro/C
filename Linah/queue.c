#include<stdio.h>
#define MAX 5
int LinahQueue[MAX];
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
void enqueue(int data){
if(!isFull()){
  rear=rear+1;
  LinahQueue[rear]=data;
  }else{
  printf("the queue is full, couldn't add %d\n",data);
  }
}
void dequeue()
{
  int data;
  if(!isEmpty()){
    data=LinahQueue[front];
        printf("%d\t",data);
    front=front+1;
  }else{
  printf("the queue is empty couldn't dequeue");
  }
}
int main()
{
enqueue(10);
enqueue(20);
enqueue(30);
enqueue(60);
enqueue(56);
enqueue(10);
enqueue(80);
enqueue(90);

while(front<=rear){
  dequeue();
}
return 0;
}
