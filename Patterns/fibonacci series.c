#include<stdio.h>
int main()
{
int i,ft,nt,pt;
ft=0;
pt=1;
for(i=1;i<=10;i++)
{
printf("%d\t",ft);
nt=pt+ft;
pt=ft;
ft=nt;

}

return 0;
}
