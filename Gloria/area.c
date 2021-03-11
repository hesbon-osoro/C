#include<stdio.h>
int main()
{
  int height;
  int base,perimeter;
  float area;
  printf("Please Enter Base and Height.\n");
  printf("Height: ");
  scanf("%d",&height);
  printf("Base: ");
  scanf("%d",&base);
  perimeter=height+base;
  area=0.5*base*height;
  printf("Perimeter: %d\n",perimeter);
  printf("Area: %f\n",area);
  return 0;
}
