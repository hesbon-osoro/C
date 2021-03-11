#include<stdio.h>
void display()
{
extern int x;
printf("x =%d\n",x);
}
int main()
{
extern int x;
printf("x :%d\n",x);
display();
getch();
return 0;
}
int x=20;
