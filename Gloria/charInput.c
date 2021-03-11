#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
char fname[20],gender[1];
int marks;
printf("Please Enter Your details.\n");
printf("Your Name: ");
scanf("%s",&fname);
printf("Your Gender: ");
scanf("%s",&gender);
printf("Your Marks: ");
scanf("%d",&marks);
printf("Name\tGender\tMarks\n");
printf("%s\t %s\t %d \n",fname,gender,marks);
return 0;
}
