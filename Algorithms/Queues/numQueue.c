#include<stdio.h>

#define MAX 5
//const int MAX =5;
int numQueue[MAX];
int front=0;
int rear=NULL;
int num;
int qCount=0;

int isEmpty()
{
    if(rear==NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isFull()
{
    if(rear==MAX)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int peek()
{
  if(!isEmpty())
    {
        num=numQueue[front+1];
        printf("Element %d on the front\n",num);
    }
    else
    {
        printf("Empty Queue, No element\n");
    }
}

int enQueue(int num)
{
    if(!isFull())
    {
        rear=rear+1;
        numQueue[rear]=num;
        qCount=qCount+1;
        return numQueue[rear];
    }
    else
    {
        printf("Couldn't add element %d since numQueue is Full\n",num);
    }
}

int deQueue(){
    if(!isEmpty())
      {
        int num;
        num=numQueue[front];
        front=front+1;
        rear=qCount;
        return numQueue[front];
        }else{
        printf("Couldn't retrieve the Queue since it is empty\n");
        }
}

int main()
{
  peek();
    enQueue(12);
    enQueue(20);
    enQueue(30);
    enQueue(40);
    enQueue(50);
    enQueue(60);
    enQueue(70);
    system("color a0");
    printf("NumQueue Full?: %s\n",isFull()?"YES":"NO");
    printf("NumQueue Empty?: %s\n",isEmpty()?"YES":"NO");
    printf("NumQueue Peek Status: ");
    peek();

printf("Queues employ FIFO method\n");
printf("Compiler Output of the Queue\n");

//print the numQueue elements
printf("\n--------------------------------------------\n");
int i;
printf("Index: \t  ");
for(i=0;i<MAX;i++){
printf("%d\t",i);
}
printf("\nNumQueue: ");
while(front!=qCount){
  printf("%d\t",deQueue());
}
printf("\n");

/*int n;
    while(!isEmpty())
{
 n=deQueue();
   printf("%d\t",n);
    }*/
printf("\n--------------------------------------------\n");

   getch();
    return 0;
}
