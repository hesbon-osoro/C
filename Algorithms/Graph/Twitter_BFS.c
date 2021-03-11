#include<stdio.h>
#include<stdbool.h>
#define MAX 20
typedef struct Twitter{
char follower;
bool tweet;
}twt;
twt* Tqueue[MAX];
int Tcount=0;

int Queue[MAX];
int qCount=0,head=0,rear=-1;

int enQueue(int data){
  qCount++;
return Queue[++rear]=data;
}
int deQueue(){
  qCount--;
return Queue[front++];
}
