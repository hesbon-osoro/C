#include<stdio.h>
int pinAttempt=3,savedPin=2040,pin,count;
int callQuit(int r){
printf("THANK YOU FOR USING ATM SERVICES\n");
system("cls");
system("exit");
return 0;
}
int Login(){


}
int main(){
Login();
printf("Successful, lets now get in the system....\n");

return 0;
}/*void Login(){
/*printf("Enter Pin: ");
scanf("%d",&pin);
/
for(count=1;count<=pinAttempt;count++){
if(pin==savedPin){
printf("***SUCCESS***\n");
 menu();
 break;
}
 if(pin!=savedPin){
printf("Wrong Pin\nTry Again: ");
scanf("%d",&pin);
}
//count++;
else if(count==pinAttempt){
printf("Too many Attempts\ncontact the Administrator for further assistance\n");
printf("\n\nTHE SYSTEM WILL NOW QUIT\n\n\n");
system("pause");
callQuit();
}
}
}*/
