#include<stdio.h>
int main(){
char str[20],c=' ';
int i=0;
char response;
printf("\n Enter the password [max length 10] : ");
while (i<=9){
    str[i]=getch();
    c=str[i];
    if(c==10) break;
    else printf("*");
    i++;
}
str[i]='\0';
i=0;
printf("\n");
printf(" Show password(y/n): ");
scanf("%c",&response);
re:
while(1){
if(response=='y'){
printf("\n Your password is : %s",str);
break;
}else if(response=='n'){

return 0;break;
}else if(response!='y'||response!='n'){
printf("Use y/n characters!\n");
goto re;
break;
}
}
return 0;

}
