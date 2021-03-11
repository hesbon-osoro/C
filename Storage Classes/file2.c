#include<stdio.h>
#include<conio.h>
#include"file1.c"
int x;
void print();
int main()
{
x=10;
//printf("file2 includes 'file1.c' to be called\n");
print();
printf("x in file 2: %d\n",x);
getch();
return 0;
}
