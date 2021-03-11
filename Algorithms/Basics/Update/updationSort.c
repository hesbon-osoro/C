#include <stdio.h>
int main() {
   int LA[] = {1,3,5,7,8};
   int k = 3, n = 5, item = 10;
   int i, j;

   printf("The original array elements are :\n");

   for(i = 0; i<n; i++)
 {
      printf("LA[%d] = %d \n", i, LA[i]);
 }

   LA[k-1] = item;
   printf("The location k: %d\n",k);
   printf("The index  k-1: %d\n",k-1);
   printf("To update is like to change the value at the location\n");
   printf("The array elements after updation :\n");

   for(i = 0; i<n; i++)
    {
       printf("LA[%d]: %d\tLocation :%d\n",i,LA[i],i+1);
    }
return 0;
}
