#include<stdio.h>
main()
{
int LA[]={1,3,5,7,8};
int *ptr=&LA[0];
int i,item,n=5;
item=8;
/*
printf("Enter the element for search: \n");
scanf("%d",&item);*/
printf("The original array elements are:\n");
for(i=0;i<n;i++)
{
printf("LA[%d]: %d\n",i,LA[i]);
}
for(i=0;i<n;i++)
{
    switch(item)
       {
       case LA[i]:   printf("Found element %d at position %d\n",item,i+1);
                break;
        default:  printf("The element %d is not found in your array\n",item);
                break;

        }
}
return 0;
}
