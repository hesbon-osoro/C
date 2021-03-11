#include<stdio.h>

const int MAX =5;
char alphaStack[5];
char alpha;
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
char peek(){
if(top!=NULL){
printf("AlphaStack top character: %c\n",alpha);
return alphaStack[top];
}else{
printf("No Character in alphaStack.\n");
}
}
int pop(){
char alpha;
    if(!isEmpty()){
    alpha=alphaStack[top];
    top=top-1;
    return alpha;
    }else{
    printf("Couldn't retrieve Characters,alphaStack is empty.\n");
    }
}
int push(char alpha){
if(!isFull()){
top=top+1;
alphaStack[top]=alpha;
}else{
printf("Could not insert Character %c, alphaStack is full.\n",alpha);
}
}
int alphaLevel(){
if((top!=NULL)&&(top<MAX))
    {
        printf("alphaStack is not filled up\n");
    }
if(top=NULL){
 printf("alphaStack is Empty\n");
}
if(top=MAX){
    printf("alphaStack is Full\n");
}
}
int main(){
push('A');
push('B');
push('C');
push('D');
push('E');
push('F');
push('G');
system("color 0a");
printf("Popping is an action of accessing the top character and \n\
       decreasing the index by one\n\n");
printf("Initially, due to push action in the main function, \n\
       the stack is full.\n\n");
printf("AlphaStack Full?: %s\n",isFull()?"True":"False");
printf("AlphaStack Empty?: %s\n",isEmpty()?"True":"False");

printf("\nPeek Status: ");
peek();
printf("alphaStack Level: ");
alphaLevel();
//printing alphaStack characters
printf("\n\nAlphaStack characters:\n");
while(!isEmpty()){
alpha=pop();
printf("Index[%d] Character[%d]: %c\n",top,top+1,alpha);
}
printf("\n");
printf("AlphaStack Full?: %s\n",isFull()?"True":"False");
printf("AlphaStack Empty?: %s\n",isEmpty()?"True":"False");
printf("\nAfter Pop-up action the index points to null hence \n\
       it is empty\n");
getch();
return 0;
}
