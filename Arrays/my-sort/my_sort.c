#include <stdio.h>
//ascending function declaration
void asc_sort(int arr[], int N);
//descending function declaration
void desc_sort(int arr[],int N);
int c[10];
void main()
{
int n,i;
printf("Enter the size of the array:\n");
scanf("%d",&n);
printf("Enter the Array Elements\n");
for(i=0;i<n;i++)
{
    printf("Element [%d]: ",i+1);
    scanf("%d",&c[i]);
}
//printing array elements
printf("***Array elements***\n");
for(i=0;i<n;i++)
{
    printf("%d ",c[i]);
}
//ascending function calling
asc_sort(c,n);
//printing ascending sort
printf("\n***Ascending sort***\n");
for(i=0;i<n;i++)
{
    printf("%d ",c[i]);
}
printf("\n");
//descending function calling
desc_sort(c,n);
//printing descending sort
printf("\n***Descending sort***\n");
for(i=0;i<n;i++)
{
    printf("%d ",c[i]);
}
printf("\n");
}
//ascending function definition
void asc_sort(int arr[], int N)
{
    int i,j,k;
 for(i=N-1;i>=0;i--)//last element
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
//descending function definition
void desc_sort(int arr[], int N)//last element
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
