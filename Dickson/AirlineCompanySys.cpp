#include<iostream>
using namespace std;
#define B_MAX 5
#define E_MAX 3
int i,seat=0,option,eseat=1,bseat=6;
char choice;
int firstClass[B_MAX],econClass[E_MAX];
void businessClass();
void economySection();
void economyView();
void economyFull();
void view();
bool book=false;

void menu()
{
  cout<<"\'Input 1 for \"Business Class\" and"<<endl;
  cout<<"\'Input 2 for \"Economy\"."<<endl;
  cout<<"# ";
  cin>>option;
   if(option==1){
  businessClass();menu();
  }else if(option==2){
  economySection();
  menu();
  }else{
    cout<<"Input 1 or 2!\n";
   menu();
  }
}
void businessFull()
{
  cout<<"This section is full, will you be placed in first class?\n(y/n): "<<endl;
  cin>>choice;
  if(choice=='y'||choice=='Y'){
  economySection();eseat++;
  }else if(choice=='n'||choice=='N'){
  cout<<"Sorry.\nYou can book our next flight that leaves in 5 hours.\n";
  }else{
     cout<<"Use y or n\n";
  }
}
void businessClass()
{
  int seat=1,bcount=5;
  for(i=0;i<B_MAX&&book==false;i++){
    if(seat>bcount){
      businessFull();
      break;
    }else if(seat<=3){
      firstClass[i]=bseat++;
      book=true;
  cout<<"First class Seat booked\n";
    seat++;
    }
  }
  book=false;
}
void businessView()
{
  businessClass();
   cout<<"\nFirst Class seats\n";
  for(i=0;i<B_MAX;i++)
  if(book==true&&firstClass[i]!=0){
    cout<<"Seat number : "<<firstClass[i]<<endl;
  }
}
void economySection()
{
  int ecount=3,seat=1;
  for(i=0;i<E_MAX&&book==false;i++,seat++){
      if(seat>3){
      economyFull();
    }else{
      econClass[i]=eseat++;
      book=true;
     cout<<"Economy Seat booked\n";
    }
  }
  book=false;
}
void economyFull(){
  cout<<"This section is full, will you be placed in first class?\n(y/n): "<<endl;
  cin>>choice;
  if(choice=='y'||choice=='Y'){
  businessClass();
  bseat++;
  }else if(choice=='n'||choice=='N'){
    cout<<"Sorry.\nYou can book our next flight that leaves in 5 hours.\n";
  }else{
    cout<<"Use y or n\n";
  }
}
void economyView()
{
  economySection();
  cout<<"\nNonsmoking Class seats\n";
  for(i=0;i<E_MAX;i++)
  if(book==true && econClass[i]!=0){
    cout<<"Seat number : "<<econClass[i]<<endl;
  }
}
void view()
{
  economyView();
  businessView();
}
int main()
{
  menu();
  view();
  return 0;
}
