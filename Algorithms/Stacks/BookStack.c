#include<stdio.h>
const int MAX=5;
int bkStack[5];
int top=NULL;//points null
int isEmpty(){
if(top==NULL){
return 1;
}else{
return 0;
}
}
int isFull(){
if(top==MAX){
    return 1;
}else{
return 0;
}
}
int accessTop(){//peek operation
return bkStack[top];
}

int main(){
printf("****Initial BookStack status***\n");
printf("BookStack Full status: %s\n",isFull()?"True":"False");
printf("BookStack Empty status: %s\n",isEmpty()?"True":"False");

printf("Top Book no: %d\n",accessTop());
return 0;
}
