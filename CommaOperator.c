#include<stdio.h>
int main()
{
int a,b;
a=(b=4,b+5);
printf("a=(b=4,b+5) : ",a);
printf("\nC ain't recognizing this comma operator introduced in C++\n");
return 0;
}
