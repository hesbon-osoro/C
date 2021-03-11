#include <stdio.h>
#include <float.h>
int main()
{
printf("Storage size for float : %d \n", sizeof(float));
printf("Minimum float positive value: %E \n", FLT_MIN);
printf("Maximum float positive value: %E \n", FLT_MAX);
printf("Precision value %E \n", FLT_DIG);
return 0;
}