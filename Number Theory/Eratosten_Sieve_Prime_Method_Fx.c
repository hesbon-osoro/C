#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int isOdd(){
  int j;
  if(!(j%2)){
    return 1;
  }
}
int isPrime(int n){
int i;
for(i=2;i<=n;i++){
  if(n%i){
    return 1;
  }
}
}
int main()
{
  int i,k,n=100;
  k=sqrt(n);
  for(i=3;i<=n;i++){
    if(i==isOdd()&&i==isPrime(n)){
      printf("%d\t",i);
    }
  }
  return 0;
}
