#include<stdio.h>
int main(){
char str[20],c=' ';
int i=0;
printf("\n Enter the password [max length 10] : ");
while (i<=9){
    str[i]=getch();
    c=str[i];
    if(c==13) break;
    else printf("*");
    i++;
}
str[i]='\0';
i=0;
printf("\n");
printf("\n Your password is : %s",str);
return 0;
}
