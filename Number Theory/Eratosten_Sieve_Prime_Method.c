#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
  int i,k,m,n=100;
  printf("This is Eratosten's Sieve method for Prime Numbers.\n");
  m=sqrt(n);
  printf("\nSqrt: %d\nPrimes: ",m);
  printf("2\t3\t");
  for(i=3;i<=n;i++){
      if(i%2){
          for(k=5;k<=m;k+=2){
              if(k%2){break;}
            if(!(i%k)){break;
            }
              printf("%d\t",i);

        }
      }
  }
   printf("\n");
  return 0;
}
