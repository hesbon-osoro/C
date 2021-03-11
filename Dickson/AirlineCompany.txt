#include<iostream>
using namespace std;

int i;
char choice;
int firstClass[5],econClass[3];
void businessClass();
void economySection();
bool book=false;
void menu()
{
  cout<<"\'Input 1 for \"Business Class\" and"<<endl;
  cout<<"\'Input 2 for \"Economy\"."<<endl;
  cout<<"# ";
  cin>>choice;
  if(choice=='1'){
  businessClass();
  }else if(choice=='2'){
economySection();
  }else{
   "Input 1 or 2!\n";
  }
}
void economyFull(){
  cout<<"This section is full, will you be placed in first class?\n(y/n): "<<endl;

  switch(choice){
  case 'y':
  case 'Y':businessClass();
  case 'n':
  case 'N': cout<<"Sorry.\nYou can book our next flight that leaves in 5 hours.\n";
  default: cout<<"Use y or n\n";
  }
}
void businessFull()
{
    cout<<"This section is full, will you be placed in first class?\n(y/n): "<<endl;

  switch(choice){
  case 'y':
  case 'Y':economySection();
  case 'n':
  case 'N': cout<<"Sorry.\nYou can book our next flight that leaves in 5 hours.\n";
  default: cout<<"Use y or n\n";
  }
}
void businessClass()
{
  int bcount=3,bseat=6;
  cout<<"\tFirst Class seats\n";
  for(i=0;i<bcount;i++){
      firstClass[i]=bseat;book=true;
    cout<<"Seat number : "<<firstClass[i]<<endl;
    if(bcount>3){
      businessFull();
    }
    bseat++;
  }
}
void economySection()
{
  int ecount=5,eseat=1;
  cout<<"Economy Seats\n";
  for(i=0;i<ecount;i++){
      econClass[i]=eseat;book=true;
    cout<<"Seat number : "<<econClass[i]<<endl;
    if(ecount>5){
      economyFull();
    }
  eseat++;
  }
}
int main()
{
  menu();
  return 0;
}
