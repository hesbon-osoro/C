#include<stdio.h>
#include<stdbool.h>
#define MAX 10
int randomArray[MAX]={1,2,3,4,8,5,7,2,1,2};
int i,j,item,temp;
int count=0,locnArray[MAX],find=0;
int newLower=0,newUpper=MAX-1,newMid=-1,findArray[MAX];
int rightLower=0,rightUpper=0,rightMid=-1;
int lower=0,mid=-1,upper=MAX-1;
bool found=false;
void display()
{
  printf("[");
  for(i=0;i<MAX;i++){
    printf("%d ",randomArray[i]);
  }
  printf("]\n");
}
void BubleSort()
{
  for(i=MAX-1;i>=0;i--){
    for(j=0;j<i;j++){
      if(randomArray[j]>randomArray[j+1]){
        temp=randomArray[j];
        randomArray[j]=randomArray[j+1];
        randomArray[j+1]=temp;
      }
    }
  }
}
void BinarySearch(int item)
{
while(lower<=upper){
  mid=lower+(upper-lower)/2;
  if(item==randomArray[mid]){
    found=true;
    count++;
    locnArray[mid]=mid+1;
    newLower=mid;
    newUpper=upper;
    findArray[mid]=randomArray[mid];
   while(newLower<=newUpper)
    {
      newMid=newLower+(newUpper-newLower)/2;
      if(item==findArray[newMid]){
        found=true;
       count++;
        locnArray[newMid]=newMid+1;
        break;
      }else{
      if(findArray[newMid]>item){
        newLower=newMid+1;
      }else{
      newUpper=newMid-1;
      }
      }
    }

   break;
  }else {
    if(randomArray[mid]<item){
    lower=mid+1;
    }else{
    upper=mid-1;
    }
  }
}
find=(found==true)?1:0;
if(find==1){
    printf("%d Element(s) found\nLocation(s): ",count);
    for(i=0;i<MAX;i++){
        if(locnArray[i]!=0){
    printf("%d ",locnArray[i]);
        }
    }
printf(".\n");
}else{
printf("Element not found\n");
}
}

int main()
{
  printf("Random Array Elements:\n");
  display();
  printf("Sorted Array Elements\n");
  BubleSort();
  display();
  printf("Enter an element to search: ");
  scanf("%d",&item);
  BinarySearch(item);
 return 0;
}
