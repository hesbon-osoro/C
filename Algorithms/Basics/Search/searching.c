#include<stdio.h>
main()
{
int LA[]={1,3,5,7,8};
int i=0,k,n=5;
printf("Enter the element for search: \n");
scanf("%d",&k);
printf("The original array elements are:\n");
for(i=0;i<n;i++)
{
printf("LA[%d]: %d\n",i,LA[i]);
}
/*while(i<n)
{
if(LA[i]==k)
{
break;
}
i++;
}*/
for(i=0;i<n;i++)
{
    if(LA[i]==k)
       { printf("Found element %d at position %d\n",k,i+1);
           break;
       }

}
for(i=0;i<n;i++)
{
if(LA[i]!=k)
        {
          printf("The element %d is not found in your array\n",k);
          break;
        }
}
return 0;
}
