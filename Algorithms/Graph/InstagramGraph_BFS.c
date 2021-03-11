#include<stdio.h>
#include<stdbool.h>
#define SIZE 25
 typedef struct Instagram{
 char chat;
 bool like;
 }insta;
insta* instaArray[SIZE];
int instaCount=0;
int instaQueue[SIZE];
int adjInstaMatrix[SIZE][SIZE];
int i,j,head=0,tail=-1,qCount=0;
int unvisited,tempFollower;

bool instaEmpty(){
if(qCount==0){
  return true;
}else{
return false;
}
}
void enQueue(int instaData){
instaQueue[++tail]=instaData;
qCount++;
}
int deQueue(){
  qCount--;
  return instaQueue[head++];
}
void addFollower(char chat)
{
  insta* follow=malloc(sizeof(insta));
  follow->chat=chat;
  follow->like=false;
  instaArray[instaCount++]=follow;
}
void addRelation(int begin,int end)
{
  adjInstaMatrix[begin][end]=1;
  adjInstaMatrix[end][begin]=1;
}
int getAdjUnvisitedFollower(int instaIndex)
{
 for(i=0;i<instaCount;i++){
  if(adjInstaMatrix[instaIndex][i]==1 && instaArray[i]->like==false)
    return i;
  }
  return -1;
}
void instaDisplay(int instaIndex){
printf("%c ",instaArray[instaIndex]->chat);
}
void insta_BFS()
{
  instaArray[0]->like=true;
  instaDisplay(0);
  enQueue(0);
  while(!instaEmpty()){
      tempFollower=deQueue();
      while((unvisited=getAdjUnvisitedFollower(tempFollower))!=-1 ){
    instaArray[unvisited]->like=true;
    instaDisplay(unvisited);
    enQueue(unvisited);
    }
  }
  for(i=0;i<instaCount;i++){
    instaArray[i]->like=false;
  }
}
main()
{
  system("color d2");
  printf("INSTAGRAM by BFS\n\n");
    for(i=0;i<SIZE;i++){
     for(j=0;j<SIZE;j++)
        adjInstaMatrix[i][j]=0;

    }

  addFollower('I');
  addFollower('N');
  addFollower('S');
  addFollower('T');
  addFollower('A');
  addFollower('G');
  addFollower('R');
  addFollower('A');
  addFollower('M');
  addFollower(' ');
  addFollower('B');
  addFollower('Y');
  addFollower(' ');
  addFollower('B');
  addFollower('_');
  addFollower('F');
  addFollower('_');
  addFollower('S');
  addFollower('.');

  for(i=0;i<SIZE;i++){
    for(j=0;j<SIZE;j++){
  addRelation(i,j);
  }
}
insta_BFS();
printf("\n");
}
