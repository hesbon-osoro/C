#include<stdio.h>

const int MAX =5;
int numStack[5];
int num;
int top=NULL;/*initializing when the
container is empty, top point to null*/
int isEmpty()
{
if(top==NULL){
    return 1;
}
else
    return 0;
}
int isFull(){
if(top==MAX)
    return 1;
else
    return 0;
}
int peek(){
if(top!=NULL){
printf("NumStack top Element: %d\n",num);
return numStack[top];
}else{
printf("No Element in numStack.\n");
}
}
int pop(){
int num;
    if(!isEmpty()){
    num=numStack[top];
    printf("Popped: %d\n",num);
    top=top-1;
    return num;
    }else{
    printf("Couldn't retrieve elements,numStack is empty.\n");
    }
}
int push(int num){
if(!isFull()){
top=top+1;
numStack[top]=num;
}else{
printf("Could not insert element %d, numStack is full.\n",num);
}
}
int numLevel(){
if((top!=NULL)&&(top<MAX))
    {
        printf("numStack is not filled up\n");
    }
if(top=NULL){
 printf("numStack is Empty\n");
}
if(top=MAX){
    printf("numStack is Full\n");
}
}
int main(){
push(10);
push(20);
push(30);
push(40);
push(50);
push(60);
push(70);
printf("Stacks employ LIFO method\n");
system("color 0a");
printf("Popping is an action of accessing the top element and \n\
       decreasing the index by one\n\n");
printf("Initially, due to push action in the main function, \n\
       the stack is full.\n\n");
printf("NumStack Full?: %s\n",isFull()?"True":"False");
printf("NumStack Empty?: %s\n",isEmpty()?"True":"False");

printf("\nPeek Status: ");
peek();
printf("NumStack Level: ");
numLevel();
//printing numStack elements
printf("\n\nNumStack elements:\n");
while(!isEmpty()){
pop();
}

while(!isEmpty()){
num=pop();
printf("Index[%d] Element[%d]: %d\n",top,top+1,num);
}
printf("\n");
//representing in a form of a Queue
printf("Stack in form of Queue Output\n");
while(!isEmpty()){
pop();
}
printf("\n");
printf("NumStack Full?: %s\n",isFull()?"True":"False");
printf("NumStack Empty?: %s\n",isEmpty()?"True":"False");
printf("\nAfter Pop-up action the index points to null hence \n\
       it is empty\n");
getch();
return 0;
}
