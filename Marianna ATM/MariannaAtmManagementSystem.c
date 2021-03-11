#include<stdio.h>

int choice,deposit,withdraw,pin;
int count,pinAttempt,savedPin=2040;
float cash=1000;
char ans;

void menu(){
printf("\t\t************************\n");
printf("\t\tWELCOME TO ATM SERVICES\n");
printf("\t\t************************\n");
printf("\t\t\t***MENU***\n");
system("color 0a");
printf("\t\t1. Check Balance\n");
printf("\t\t2. Withdraw\n");
printf("\t\t3. Deposit\n");
printf("\t\t4. Quit\n");
printf("\n\t\tEnter your Choice: ");
scanf("%d",&choice);
switch(choice){
case 1:{
printf("\t\tAccount Balance: Ksh %.2f\n",cash);
}
break;
case 2:printf("\n\t\tENTER AMMOUNT TO WITHDRAW: Ksh ");
scanf("%d",&withdraw);
if(withdraw%100!=0){
    printf("\n\t\tPLEASE, ENTER AMOUNT IN MULTIPLES OF 100\n\t\te.g100,200,500,1000...\n");
  menu();
  }
  /*Withdrawing should not leave the account empty*/
  else if(withdraw>(cash-200)){
    printf("\n\n\t\tINSUFFICIENT BALANCE\n");
    menu();
  }else
  {
      cash=cash-withdraw;
      printf("\n\n\t\tPLEASE COLLECT CASH\n\n");
      printf("\t\tYOUR ACCOUNT BALANCE: Ksh %.2f\n",cash);
  }break;
case 3:{
    printf("\t\tENTER THE AMOUNT TO DEPOSIT\n");
    scanf("%d",&deposit);
    cash=cash+deposit;
    printf("\t\tYOUR NEW BALANCE IS: Ksh. %.2f\n",cash);
}break;
case 4:printf("\t\tTHANK YOU FOR USING ATM SERVICES\n");
break;

default: printf("\t\tINVALID CHOICE\n");
//menu();
break;
}
}
/*Main program*/
int main()
{
system("title=ATM SERVICES");
system("mode 100");
system("color 0c");
/*Login password procedure*/
printf("\nLogin to Continue...\n");
int i;
printf("Enter Pin: ");
scanf("%d",&pin);

pinAttempt=0;
while(pinAttempt<=3){
if(pin!=savedPin){
printf("Wrong Pin\nTry Again: ");
scanf("%d",&pin);
++pinAttempt;
}if((pin!=savedPin)&&(pinAttempt==3)){
printf("\nNO MORE TRIES!!\n\nTHE SYSTEM WILL NOW QUIT\n\n");
system("pause");
system("cls");
printf("\nFOR MORE QUERIES ABOUT YOUR PIN, KINDLY CONTACT THE ADMINSTRATOR\n");
system("pause");
    return 0;
    break;
}else{
if(pin==savedPin){
system("cls");
system("echo NAME: MARIANNA ANYANGO");
system("echo ACCOUNT NO: 0012541857");
printf("\n\n");
menu();
break;
}}
}
//menu();

printf("\n\n\t\tDO YOU WISH TO CONTINUE?(y/n): ");
scanf("%s",&ans);
printf("\n\n");
switch(ans){
case 'y':menu();
break;
case 'Y':menu();
break;
case 'n':printf("\t\tTHANK YOU FOR USING ATM SERVICES\n");
break;
case 'N':printf("\t\tTHANK YOU FOR USING ATM SERVICES\n");
break;
default:printf("\t\tINVALID CHOICE\n");
break;
}
system("\t\tpause");
printf("\n\nTHE SYSTEM NOW WILL QUIT.\n\n");
printf("\n\nmarianna@anyango_softs.com\n");
getch();
return 0;
}
