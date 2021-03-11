#include<stdio.h>
int main()
{
int gcd;
int i,quo,rem;
int num1,num2,numResult;
int den1,den2,denResult;
printf("Code for Sum of two fractions:\n");
printf("Enter numerator 1: ");
scanf("%d",&num1);
printf("Enter denominator 1: ");
scanf("%d",&den1);
printf("Enter numerator 2: ");
scanf("%d",&num2);
printf("Enter denominator 2: ");
scanf("%d",&den2);
if(den1==0||den2==0){
printf("Math Error!\n");
return 0;
}
printf("*_Problem_*\n");
printf("%d / %d +%d / %d\n",num1,den1,num2,den2);
numResult=num1*den2+num2*den1;
denResult=den1*den2;
quo=numResult/denResult;
rem=numResult%denResult;
printf("\n");
printf("*_Solution_*\n");
printf("Ans : ");
//finding gcd
for(i=2;i<=numResult&& i<=denResult;i++){
if((numResult%i==0)&&(denResult%i==0))
 gcd=i;
}
if(rem==0){
    printf("%d\n",quo);
    return 0;
}
if(numResult==denResult){
    printf(" 1\n");
    return 0;
    }
else{
quo=numResult/denResult;
rem=numResult%denResult;
if(quo!=0)
printf("%d ",quo);else
if(rem%gcd!=0)
    rem=rem;else
rem=rem/gcd;
if(denResult%gcd!=0)
denResult=denResult;else
denResult=denResult/gcd;
printf("%d/%d",rem,denResult);
}
getch();
return 0;
}
