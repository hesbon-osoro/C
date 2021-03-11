#include<stdio.h>
int c[10]={10,20,30,40,50,60,70,80,90,100,110};
void asc(int arr[], int N);
void desc(int arr[], int N);
int main()
{
int n;
int i;
printf("Enter the size of array you want to sort:\n");
scanf("%d",&n);
printf("Displaying the array elements:\n\n");
for(i=0;i<n;i++)
{
printf("%d ",c[i]);
}
printf("\n\n");
printf("***Ascending Order***\n");
asc(c,n);
for(i=0;i<n;i++)
{
printf("%d ",c[i]);
}
printf("\n\n");
printf("***Descending Order***\n");
desc(c,n);
for(i=0;i<n;i++)
{
printf("%d ",c[i]);
}
getch();
return 0;
}
//ascending function
void asc(int arr[], int N)
{
int i,j,k;
for(i=N-1;i>=0;i--)
{
    for(j=1;j<=i;j++)
    {
        if(arr[j-1]>arr[j])
        {
            k=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=k;
        }
    }
}
}
//descending function
void desc(int arr[], int N)
{
int i,j,k;
for(i=N-1;i>=0;i--)
{
    for(j=1;j<=i;j++)
    {
        if(arr[j]>arr[j-1])
        {
         k=arr[j];
         arr[j]=arr[j-1];
         arr[j-1]=k;
        }
    }
}
}
