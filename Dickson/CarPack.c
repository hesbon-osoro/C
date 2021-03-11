#include<stdio.h>
int main()
{
  int custArray[4]={1,2,3,4};
  float hours[4]={2.4,4,5,1,2};
  float price[4]={250,500,600,254.5};
  Car_Charges(custArray,hours,price);
  return 0;
}
void Car_Charges(int array[],float hours[],float price[])
{
  float minPay=200;
  int addition=50;
  float maxPay=1000,custPay;
  int i,custCount=4;
  printf("Car\tHours\tCharges\n");
  for(i=0;i<custCount;i++){
    printf("%d\t%.2f\t%.2f\n",array[i],hours[i],price[i]);
  }
}
