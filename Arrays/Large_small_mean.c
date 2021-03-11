#include<stdio.h>
void sortIndex(int index[10], int marks[10]);
void sortMarks(int index[10], int marks[10]);
//int index[10], marks[10];
int main()
{
int i,j,n;
int index[10], marks[10];
printf("Enter the No. of students: \n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("student[%d]: \n",i+1);
printf("Index: ");
scanf("%d",&index[i]);
printf("Marks: ");
scanf("%d",&marks[i]);
}
printf("\n**************\n");
printf("Index\tMarks\n");
printf("**************\n");
for(i=0;i<n;i++)
{
printf("%d\t%d\n",index[i],marks[i]);
}
printf("\n**************\n");
printf("Index Sort\n");
printf("**************\n");
sortIndex(index, marks);
for(i=0;i<n;i++)
{
printf("%d\t%d\n",index[i],marks[i]);
}
/*
printf("\n**************\n");
printf("Marks Sort\n");
printf("**************\n");
sortMarks(index, marks);
for(i=0;i<n;i++)
{
printf("%d\t%d\n",index[i],marks[i]);
}*/
getch();
return 0;
}
void sortIndex(int index[10], int marks[10])
{
    int i;
    int j,n,var;
for(j=n-1;j>=1;j--)
{
 for(i=0;i<n;i++)
    {
    if(index[i]>index[i+1])
    {
      int var=index[i];
      index[i]=index[i+1];
      index[i+1]=var;
    }
    }
}
}
/*void sortMarks(int index[10], int marks[10])
{
    int i;
    int j,n,var;
    for(i=0;i<n;i++)
    {
    if(marks[i]>marks[i+1])
    {
      var=marks[i];
      marks[i]=marks[i+1];
      marks[i+1]=var;
    }
    }
}
*/
