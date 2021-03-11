#include<stdio.h>
#include<string.h>
void structSort();
typedef struct Report
{
int regno;
int marks;
char name[50];
}report;
int main()
{
int i;
report rp[]=
{
    {8228,342,"Mauti"},
    {8390,361,"Mshamba"},
    {8226,270,"Mcoast"},
    {8286,361,"Framonya"},
    {8391,360,"Oyaro"},
   /* where does the format below apply??
    {8228,8226,8286,8390,8391},
    {342,270,360,361,360},
    {"Wazimu","Mcoast","Frank","Mshamba","Oyaro"}*/
};

printf("\n    ************\n");
printf("REGNO\tMARKS\tNAME\n");

for(i=0;i<5;i++)
{
printf("%d\t%d\t%s\n",rp[i].regno,rp[i].marks,rp[i].name);
}
return 0;
}
