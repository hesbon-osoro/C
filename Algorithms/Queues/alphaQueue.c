#include<stdio.h>

#define MAX 5
//const int MAX =5;
char alphaQueue[MAX];
int front=0;
int rear=NULL;
char alpha;
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
       char c;
        c=alphaQueue[front+1];
        printf("Element %c on the front\n",c);
    }
    else
    {
        printf("Empty Queue, No element\n");
    }
}

int enQueue(char alpha)
{
    if(!isFull())
    {
        rear=rear+1;
        alphaQueue[rear]=alpha;
        qCount=qCount+1;
        return alphaQueue[rear];
    }
    else
    {
        printf("Couldn't add element %c since alphaQueue is Full\n",alpha);
    }
}

int deQueue(){
    if(!isEmpty ())
      {
        char alpha;
        alpha=alphaQueue[front];
        front=front+1;
        rear=qCount;
        return alphaQueue[front];
        }else{
        printf("Couldn't retrieve the Queue since it is empty\n");
        }
}

int main()
{
  peek();
    enQueue('A');
    enQueue('B');
    enQueue('C');
    enQueue('D');
    enQueue('E');
    enQueue('F');
    enQueue('G');
    system("color a0");
    printf("AlphaQueue Full?: %s\n",isFull()?"YES":"NO");
    printf("AlphaQueue Empty?: %s\n",isEmpty()?"YES":"NO");
    printf("AlphaQueue Peek Status: ");
    peek();

printf("Queues employ FIFO method\n");
printf("Compiler Output of the Queue\n");

//print the alphaQueue elements
printf("\n--------------------------------------------\n");
int i;
printf("Index: \t   ");
for(i=0;i<MAX;i++){
printf("%d\t",i);
}
printf("\nAlphaQueue:");
while(front<=qCount){
  printf("%c\t",deQueue());
}
printf("\n");
/*
char c;
  while(!isEmpty())
{
   c=deQueue();
   printf("%c\t",c);
    }*/
printf("\n--------------------------------------------\n");

   getch();
    return 0;
}
