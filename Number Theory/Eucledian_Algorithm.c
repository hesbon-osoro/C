#include<stdio.h>
int m,n;
void EucledianAlgorithm_gcd(int m, int n)
{
  int a,b,q,r;
  int i,x,y,gcd;
  x=(m>n)?m:n;
  y=(m<n)?m:n;
  a=x;
  q=y;
  r=a%q;
  for(i=0;r!=0;i++){
    //a=r;
   r=a%q;
   a=q;
   q=r;
   b=a/q;
   gcd=r;
   }
   printf("GCD: %d\n",gcd);
}
int main()
{
  printf("Enter to numbers: \n");
  printf("M: ");
  scanf("%d",&m);
  printf("N: ");
  scanf("%d",&n);
  printf("Eucledian Algorithm for GCD\n");
  EucledianAlgorithm_gcd(m,n);
  return 0;
}
