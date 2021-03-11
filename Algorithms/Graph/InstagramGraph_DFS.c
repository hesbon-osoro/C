#include<stdio.h>
#include<stdbool.h>
#define MAX 20
typedef struct Instagram{
char label;
bool like;
}insta;
insta* instaArray[MAX];
int instaStack[MAX];
int instaCount=0;
int adjMatrix[MAX][MAX];
int top=-1;
int i,j;
int unFollowedFriend;

bool instaEmpty(){
if(top==-1){
  return true;
}else{
return false;
}
}
int peek(){
if(!instaEmpty()){
   return instaStack[top];
   }
}
int push(int instaData)
{
  return instaStack[++top]=instaData;
}
int pop()
{
 return instaStack[top--];
}

void addFollower(char label)
{
  insta* join=malloc(sizeof(insta));
  join->label=label;
  join->like=false;
  instaArray[instaCount++]=join;
}
void addRelation(int begin,int end)
{
 adjMatrix[begin][end]=1;
 adjMatrix[end][begin]=1;
}
int getAdjUnvisitedFollower(int instaIndex)
{
  for(i=0;i<instaCount;i++){
    if(adjMatrix[instaIndex][i]=1&&instaArray[i]->like==false){
      return i;
    }
  }
  return -1;
}
void instaDisplay(int instaIndex)
{
  printf("%c ",instaArray[instaIndex]->label);
}

void insta_DFS()
{
instaArray[0]->like=true;
instaDisplay(0);
push(0);
while(!instaEmpty()){
    unFollowedFriend=getAdjUnvisitedFollower(peek());
  if(unFollowedFriend==-1){
    pop();
  }else{
  instaArray[unFollowedFriend]->like=true;
  instaDisplay(unFollowedFriend);
  push(unFollowedFriend);
  }
}
for(i=0;i<instaCount;i++){
  instaArray[i]->like=false;
}
}
main()
{
    for(i = 0; i<MAX; i++) // set adjacency
      {
      for(j = 0; j<MAX; j++) // matrix to 0
         adjMatrix[i][j] = 0;
      }
  system("color 3a");
  printf("Instagram Graph by DFS\n\n");
  addFollower('I');addFollower('N');addFollower('S');addFollower('T');
  addFollower('A');addFollower('G');addFollower('R');addFollower('A');
  addFollower('M');addFollower(' ');addFollower('G');addFollower('R');
  addFollower('A');addFollower('P');addFollower('H');addFollower(':');
  addFollower('D');addFollower('F');addFollower('S');

  for(i=0;i<MAX;i++){
    for(j=0;j<MAX;j++){
      addRelation(i,j);
    }
  }

  insta_DFS();
putchar('\n');
}
