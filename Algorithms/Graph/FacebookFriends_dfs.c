#include<stdio.h>
#include<stdbool.h>
#define MAX 12

//vertex
typedef struct Friends{
char label;
bool followed;
}f;
f* arrayFriend[MAX];

int top=-1;
int friendStack[MAX];
int adjMatrix[MAX][MAX];
int friendsCount=0;

bool isEmpty(){
if(top==-1){
  return true;
}else{
return false;
}
}
int peek(){
  if(!isEmpty()){
  return friendStack[top];
  }
}
int push(int data){
  return friendStack[++top]=data;
}
int pop(){
  return friendStack[top--];
}
//add vertex
void addFriend(char label)
{
f*add=malloc(sizeof(f));
add->label=label;
add->followed=false;
arrayFriend[friendsCount++]=add;
}
///add edge
void addRelation(int start,int end)
{
  adjMatrix[start][end]=1;
  adjMatrix[end][start]=1;
}
void displayFriends(int friendIndex)
{
  printf("%c ",arrayFriend[friendIndex]->label);
}
//getting adjacent unvisited friends
int getAdjUnvisitedFriend(int friendIndex){
int i;
for(i=0;i<friendsCount;i++){
  if(adjMatrix[friendIndex][i]==1 &&arrayFriend[i]->followed==false){
    return i;
  }
}
return -1;
}
void dfs()
{
  int i,unvisitedFriend;
  //mark first node as visited
  arrayFriend[0]->followed=true;
  displayFriends(0);
  push(0);
  while(!isEmpty()){
    //get the unvisited friend for friend in the top of stack
    unvisitedFriend=getAdjUnvisitedFriend(peek());
    //if no adjacent friend found
    if(unvisitedFriend==-1){
      pop();
    }else{
    arrayFriend[unvisitedFriend]->followed=true;
    displayFriends(unvisitedFriend);
    push(unvisitedFriend);
    }
  }
  //stack i empty,search is complete, reset the visited flag
  for(i=0;i<friendsCount;i++){
    arrayFriend[i]->followed=false;
  }
}
int main()
{
  system("color a");
  int i,j;
    for(i = 0; i<MAX; i++) // set adjacency
      {
      for(j = 0; j<MAX; j++) // matrix to 0
         adjMatrix[i][j] = 0;
      }
  printf("This is a a graph structure by DFS algorithm\n\n");
  addFriend('F');//0
  addFriend('R');//1
  addFriend('I');//2
  addFriend('E');//3
  addFriend('N');//4
  addFriend('D');//5
  addFriend(' ');//6
  addFriend('G');//7
  addFriend('R');//8
  addFriend('A');
  addFriend('P');
  addFriend('H');
  addFriend(' ');
  addFriend('F');
  addFriend('O');
  addFriend('R');
  addFriend(' ');
  addFriend('F');
  addFriend('A');
  addFriend('C');
  addFriend('E');
  addFriend('B');
  addFriend('O');
  addFriend('O');
  addFriend('K');
for(i=0;i<MAX;i++){
    for(j=0;j<MAX;j++){
     addRelation(i,j);
       }
  }
  dfs();
putchar('\n');
  return 0;
}
