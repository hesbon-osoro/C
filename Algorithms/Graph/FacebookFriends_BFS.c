#include<stdio.h>
#include<stdbool.h>
#define MAX 10
typedef struct Facebook{
char label;
bool followed;
}fb;
fb* fbArray[MAX];
int fbQueue[MAX];
int head=0;
int tail=-1;
int fbCount=0,qCount=0;
int adjFriendMatrix[MAX][MAX];
int i,j,unvisitedFriend;
int tempFriend;

bool fbEmpty(){
if(qCount==0){
  return true;
}else{
return false;
}
}
bool fbFull(){
if(tail==MAX){
  return true;
}else{
return false;
}
}
int front(){
  return fbQueue[head];
}

void enQueue(int fbData){
    fbQueue[++tail]=fbData;
    qCount++;
}
int deQueue(){
    qCount--;
    return fbQueue[head++];
}
void fbDisplay(int fbIndex)
{
  printf("%c ",fbArray[fbIndex]->label);
}
void addFriend(char label)
{
  fb* follow=malloc(sizeof(fb));
  follow->label=label;
  follow->followed=false;
  fbArray[fbCount++]=follow;
}
void addRelation(int begin,int end)
{
 adjFriendMatrix[begin][end]=1;
 adjFriendMatrix[end][begin]=1;
}
int getAdjUnvisitedFriend(int fbIndex)
{
  for(i=0;i<fbCount;i++){
    if(adjFriendMatrix[fbIndex][i]==1 && fbArray[i]->followed==false)
      return i;
    }
  return -1;
}
void fb_BFS()
{
  fbArray[0]->followed=true;
  fbDisplay(0);
  enQueue(0);
  while(!fbEmpty()){
  tempFriend=deQueue();
  while((unvisitedFriend=getAdjUnvisitedFriend(tempFriend))!=-1){
    fbArray[unvisitedFriend]->followed=true;
    fbDisplay(unvisitedFriend);
    enQueue(unvisitedFriend);
    }
  }
  for(i=0;i<fbCount;i++){
    fbArray[i]->followed=false;
  }
}
main()
{
   for(i = 0; i<MAX; i++) // set adjacency
      {
      for(j = 0; j<MAX; j++) // matrix to 0
         adjFriendMatrix[i][j] = 0;
      }
  system("color 2f");
  printf("Facebook by BFS\n\n");
  addFriend('F');
  addFriend('A');
  addFriend('C');
  addFriend('E');
  addFriend('B');
  addFriend('O');
  addFriend('O');
  addFriend('K');
  addFriend(':');
  addFriend(' ');
  addFriend('B');
  addFriend('F');
  addFriend('S');

  for(i=0;i<MAX;i++){
    for(j=0;j<MAX;j++){
      addRelation(i,j);
    }
  }
  fb_BFS();
  putchar('\n');
}
