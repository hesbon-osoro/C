#include<stdio.h>
int main()
{
int i,j,n;
j=2;//prime nos start from 2
printf("Enter the number to get the factors\n");
scanf("%d",&n);
printf("Factors of %d :\n",n);
while(n!=1)
{
if(n%j==0){
printf("%d ",j);
n=n/j;j=2;//you may /may not reinitialize j
}else{
   j++;
}
}
printf("\n***Success***\n");
getch();
return 0;
}
