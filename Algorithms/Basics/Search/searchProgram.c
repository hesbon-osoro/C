#include<stdio.h>
int main()
{
int LA[]={1,3,5,7,8};
int i,item,n=5;
int f,ver,index,locn;
//f=0;
printf("Enter the element for search: \n");
scanf("%d",&item);
printf("The original array elements are:\n");
for(i=0;i<n;i++)
{
printf("LA[%d]: %d\n",i,LA[i]);

}
for(i=0;i<n;i++)
{
if(item==LA[i])
    {
        f=1;
        locn=f+i;
        index=i;
    }
}
ver=(f==1)?1:0;
if(ver==1)
{
    printf("Found element %d at position %d, index %d\n",item,locn,index);

}
else
{
printf("False: The element doesn't exist\n");
}

return 0;
}
