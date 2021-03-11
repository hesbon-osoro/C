#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
  int i,j,k,m,n=100;
  int oddArr[n];
  printf("This is Eratosten's Sieve method for Prime Numbers.\n");
  m=sqrt(n);
  printf("\nSqrt: %d\nPrimes: ",m);
  printf("2\t");
  for(i=3,j=0;i<=n,j<n;i++,j++){
    if(i%2){
      oddArr[j]=i;
    }
  }
  for(j=0;j<n;j++){
    printf("%d\t",oddArr[j]);   }
  return 0;
}
