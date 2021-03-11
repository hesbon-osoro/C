#include<stdio.h>
int main()
{
int row,col,c,d,first[10][10],second[10][10],sum[10][10];
printf("Enter the number of rows\n");
scanf("%d",&row);
printf("Enter the number of columns\n");
scanf("%d",&col);
printf("Enter the elements of first matrix\n");
for(c=0;c<row;c++)
for(d=0;d<col;d++)
scanf("%d",first[c][d]);
printf("Enter the elemens of the second matrix\n");
for(c=0;c<row;c++)
for(d=0;d<col;d++)
scanf("%d",&second[c][d]);

for(c=0;c<row;c++)
for(d=0;d<col;d++)
sum[c][d]=first[c][d]+second[c][d];
/*Matrix Addition*/
printf("Sum of entered matrices:-\n");
for(c=0;c<row;c++)
{
for(d=0;d<col;d++)
printf("%d\t",sum[c][d]);
printf("\n");
}
return 0;
}
