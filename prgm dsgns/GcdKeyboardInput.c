#include<stdio.h>
int gcd(int n, int m);
int main()
{
int i,j,n,m;
n=14,m=14;
//prime nos start from 2
printf("GCD of %d & %d:\n",n,m);
gcd(n,m);

printf("\n***Success***\n");
getch();
return 0;
}
int gcd(int n, int m)
{
int j=2,i=1;
while((n!=1)&&(m!=1)){
if((n%j==0)&&(m%j==0)){
n=n/j;m=m/j;i=i*j;j=2;//you may /may not reinitialize j
}else {
  j++;
}
}
printf("%d\n",i);
}
