#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
  int i,k,m,n=100,j=0,oddCount=0,rtCount=0;
  int oddArr[n],factArr[n],prime[n],pCount=0;
  m=sqrt(n);
  int rtArr[m],fact=0;
  //listing all odds
  for(i=3;i<=n;i++){
    if(i%2){
      oddArr[j++]=i;
      ++oddCount;
    }
  }
  //listing odds in root range
  for(k=3,j=0;k<=m;k+=2){
    rtArr[j++]=k;
    ++rtCount;
  }
  printf("Odds: \n");
  for(j=0;j<oddCount;j++){
    printf("%d\t",oddArr[j]);
  }
  printf("\nOdds root range: \n");
  for(j=0;j<rtCount;j++){
    printf("%d\t",rtArr[j]);
  }

  for(i=0;i<oddCount;i++){
     for(j=0;j<rtCount;j++){
      if(!(oddArr[i]%rtArr[j])){
      factArr[fact++]=oddArr[i];
      break;
      }
  }
}
 printf("\nFactors: \n");
  for(i=0;i<oddCount;i++){
     for(j=0;j<i;j++){
      if(oddArr[i]==factArr[j]){
      printf("%d\t",oddArr[i]);
    }
  }
  }
  printf("\nPrimes: \n2\t");
  for(i=0;i<oddCount;i++){
     for(j=0;j<i;j++){
      if(!(oddArr[i]==factArr[j])){
          printf("%d\t",oddArr[i]);
      ;break;
  }
  }
  }
  return 0;
}
