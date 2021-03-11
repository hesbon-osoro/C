#include<stdio.h>
int nFact(int n)
{
  int i,fact=1;
  for(i=1;i<=n;i++){
    fact=fact*i;
  }
  return fact;
}
int main()
{
  int n,fact,i,x;
  printf("Consecutive Composites\n");
  printf("if n>=2; then n!+2, n!+3,...n!+n \nconstitute a sequence of n-1.\n");
  printf("Please Enter Number of terms greater than or equal to 2\n");
  scanf("%d",&n);
  while(n<2){
      printf("Enter n: ");
      scanf("%d",&n);
  }
  printf("%d!= %d\n",n,nFact(n));
  x=n+1;
  for(i=2;i<=x;i++){
    fact=nFact(x)+i;
    printf("%d\t",fact);
  }
  printf("\n");
  return 0;
}
