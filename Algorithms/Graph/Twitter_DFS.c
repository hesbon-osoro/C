#include<stdio.h>
#include<stdbool.h>
#define MAX 30
typedef struct Twitter{
char follower;
bool tweet;
}twt;
twt* Tstack[MAX];
int Tcount=0;
int adjacentMatrix[MAX][MAX];
int stack[MAX];
int top=-1,i,j,unvisited;

void addFollower(char follower)
{
  twt* twitt=malloc(sizeof(twt));

  twitt->follower=follower;
  twitt->tweet=false;
  Tstack[Tcount++]=twitt;
}
void addRelation(int start,int stop)
{
 adjacentMatrix[start][stop]=1;
 adjacentMatrix[stop][start]=1;
}
int getAdjUnvFollower(int index)
{
  for(i=0;i<Tcount;i++){
    if(adjacentMatrix[index][i]==1&&Tstack[i]->tweet==false){
      return i;
    }
  }
  return -1;
}
int peek(){
return stack[top];
}
int push(int data){
return stack[++top]=data;
}
int pop(){
return stack[top--];
}
bool isEmpty(){
if(top==-1){
  return true;
}else{
return false;
}
}
void display(int index)
{
    printf("%c ",Tstack[index]->follower);
}
void T_DFS()
{
 Tstack[0]->tweet=true;
 display(0);
 push(0);
 while(!isEmpty()){
  unvisited=getAdjUnvFollower(peek());
  if(unvisited==-1){
    pop();
  }else{
    Tstack[unvisited]->tweet=true;
    display(unvisited);
    push(unvisited);
  }
 }
 for(i=0;i<Tcount;i++){
  Tstack[i]->tweet=false;
 }
}
main()
{
  system("color 3");
  for(i=0;i<MAX;i++){
    for(j=0;j<MAX;j++){
      adjacentMatrix[i][j]=0;
    }
  }
  addFollower('T');
  addFollower('W');
  addFollower('I');
  addFollower('T');
  addFollower('T');
  addFollower('E');
  addFollower('R');
  addFollower(' ');
  addFollower('B');
  addFollower('Y');
  addFollower(' ');
  addFollower('D');
  addFollower('F');
  addFollower('S');
  for(i=0;i<MAX;i++){
    for(j=0;j<MAX;j++){
      addRelation(i,j);
    }
  }

    T_DFS();
    putchar('\n');
}
