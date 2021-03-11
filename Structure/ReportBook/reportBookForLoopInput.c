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
int i,n;
struct report rp[10];
printf("How many Student details would you like to input\n");
scanf("%d",&n);
printf("Enter the following details:\n");
//for loop for student details input

for(i=0;i<n;i++)
{
printf("Student[%d]:\n",i+1);
printf("Students Regno:\n");
scanf("%d",&rp[i].regno);
printf("Students Marks:\n");
scanf("%d",&rp[i].marks);
printf("Students Name:\n");
scanf("%s",&rp[i].name);

}
printf("\n    ************\n");
printf("Regno\tMarks\tName\n");

for(i=0;i<n;i++)
{
printf("%d\t%d\t%s\n",rp[i].regno,rp[i].marks,rp[i].name);

}
return 0;
}
