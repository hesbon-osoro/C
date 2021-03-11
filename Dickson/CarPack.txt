#include<iostream>
using namespace std;

void Input();
void Car_Charges(float hours[]);

  float minPay=200,maxPay=1000,addition=50;
  int i,carCount=4;
  float hours[4],charges[4];
int main()
{
  Input();
  Car_Charges(hours);
  return 0;
}
void Input()
{
  for(i=0;i<carCount;i++){
    cout<<"Enter hours for car #"<<(i+1)<<": ";
    cin>>hours[i];
    if(hours[i]>24){
      cout<<"No car park for more than 24hours!!\n";
      cout<<"Enter hours for car #"<<(i+1)<<": ";
      cin>>hours[i];
    }
    }
}
bool getHours()
{
  if (hours[i]<=24){
    return true;
  }
}
void Car_Charges(float hours[])
{

  cout<<"\nCar\tHours\tCharges\n";
  for(i=0;i<carCount;i++){
      if(hours[i]<=2){
        charges[i] = minPay;
        }else{
        charges[i]=minPay+(addition*(hours[i]-2));
        if(charges[i]>1000){
          charges[i]=maxPay;
        }
        }
    cout<<(i+1)<<"\t"<<hours[i]<<"\t"<<charges[i]<<endl;
  }
}

