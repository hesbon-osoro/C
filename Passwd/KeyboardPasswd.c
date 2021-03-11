#include<stdio.h>
#include<string.h>
int main()
{
int savedPin[4]={2,0,4,0};
int pinHide=' ';
int inputPin[4];
/*int savedPin[20]={'2','0','4','0'};
int pinHide=' '
int inputPin;*/
int i=0;
printf("Pin: ");
unsigned char pin[4];//,i;
for(i=0;i<=3;i++){
    inputPin[i]=getch();
    printf("%c",inputPin[i]);
}
/*while(i<=4){
inputPin[i]=getch();
pinHide=savedPin[i];
inputPin='*';
if(pinHide==9)break;
else printf("*");
i++;
}i=0;*/
//scanf("%d",&inputPin);
savedPin[i]='0';
//i=0;
printf("\n");
if(inputPin==savedPin[4]){printf("Success");}
else{printf("Terrible");}
printf("Password: %d",inputPin);
}
