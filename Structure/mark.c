#include<stdio.h>
#include <string.h>
struct marks
{
  int index;
  char name[50];
  int mark;
}mk;
int main()
{
system("color bc");
system("title Marks Structure");
system("pause");
mk.index= 1234;
strcpy(mk.name,"Linah Muhonja Imbari");
mk.mark=90;
printf("%d\t%s\t%d\n",mk.index,mk.name,mk.mark);
return 0;
}

