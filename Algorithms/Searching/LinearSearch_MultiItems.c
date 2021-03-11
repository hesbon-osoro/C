#include<stdio.h>
#include<stdbool.h>
#define MAX 10

int myArray[MAX]={1,2,2,3,2,4,7,8,4,10};
int findArray[MAX],locn[MAX];
int k=0,i=0,count=0;
int item,find=0;
bool found=false;

void printline(){
for(i=0;i<MAX;i++){
  if(i<MAX-1){
    printf("- ");
  }else{
  printf("-\n");
  }
}
}
void LinearSearch(int item){
for(i=0;i<MAX;i++){
  if(item==myArray[i]){
    found=true;
    count++;
    findArray[k]=myArray[i];
    for(k=i+1;k!=MAX;k++){
    if(item==findArray[k]){
    found=true;
    count++;
    }
  }locn[i]=i+1;
 }
}
find=(found==true)?1:0;
if(find==1){
    printf("%d Element(s) found.\nLocation(s): ",count);
  for(i=0;i<MAX;i++){
    if(locn[i]!=0){
    printf("%d, ",locn[i]);
    }
  }printf(".\n");
}
else{
printf("Element not found\n");
}
}
int main()
{
  printf("Original Array\n");
  for(i=0;i<MAX;i++){
    printf("%d ",myArray[i]);
  }
  printf("\n");
  printline();
  printf("Enter element to search: ");
  scanf("%d",&item);
  LinearSearch(item);

  return 0;
}
