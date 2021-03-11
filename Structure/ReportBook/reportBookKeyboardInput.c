#include<stdio.h>
#include<string.h>
struct report
{
int regno;
int marks;
char name[100];
};
int main()
{
int pos;
struct report rp1;
struct report rp2;
printf("Enter the following details:\n");
//input for student 1
printf("Students Regno:\n");
scanf("%d",&rp1.regno);
printf("Students Marks:\n");
scanf("%d",&rp1.marks);
printf("Students Name:\n");
scanf("%s",&rp1.name);
//input for student 2
printf("Students Regno:\n");
scanf("%d",&rp2.regno);
printf("Students Marks:\n");
scanf("%d",&rp2.marks);
printf("Students Name:\n");
scanf("%s",&rp2.name);

printf("\n    ************\n");
printf("Regno\tMarks\tName\n");
printf("%d\t%d\t%s\n",rp1.regno,rp1.marks,rp1.name);
printf("%d\t%d\t%s\n",rp2.regno,rp2.marks,rp2.name);
return 0;
}
