#include<stdio.h>
#include<string.h>
int main()
{
int i,cmp;
char ch[10];
char *arrNames[]=
{
    "Agnes",
    "Zacharia",
    "Mark",
    "Hezekiah",
    "Boyle",
    "Caren",
    "Douglas",
    "Framonya",
    "Mshamba",
    "Kepha"
    };
printf("The Names before sort\n");
printf("--- ----- ------ ----\n");
for(i=0;i<10;i++)
 {
 printf("%s\n",arrNames[i]);
 }
/*printf("\nThe Names after sort\n");
printf("--- ----- ------ ----\n");
 for(i=0;i<10;i++)
 {
 //cmp=strcmp(arrNames[i+1],arrNames[i]);
 if (arrNames[i+1]>arrNames[i])
 {
 ch[i]=arrNames[i];
 arrNames[i]=arrNames[i+1];
 arrNames[i+1]=ch[i];
 }
 printf("%s\n",arrNames[i]);
 }*/
return 0;
}
