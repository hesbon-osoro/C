#include<stdio.h>
main()
{
int LA[]={1,3,5,7,8};
int i,j,item,n=5;
item=3;
//int ch;
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
//ch=(item==LA[i])?1:0;

    if(item==LA[i])
    {
       printf("Found element %d at position %d\n",item,i+1);
      // break;
    }
        else
           {
            printf("The element is NOT found in your array\n");
          //  break;
           }
}
return 0;
}
