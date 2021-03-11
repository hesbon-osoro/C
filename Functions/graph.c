#include<stdio.h>
// A couple of external definitions to make the example clearer
extern unsigned int screenWidth;
extern void plotXY(double x, double y);
// The graph() function
// Pass in the bounds: the minimum and maximum X and Y that should be plotted
// Also pass in the actual function to plot.
void main()
{
  double x=2;
  double y=4;
  plotXY(x,y);
}
void graph(double minX, double minY, double maxX, double maxY,double *fn)
//fn=plotXY(x,y);
{       // See below for syntax
    double y = fn(x);         // Get y for this x by calling passed-in fn()

     if (minY<=y && y<maxY) {
         plotXY(x, y);         // Plot calculated point
       } // if
        } for
  } // graph(minX, minY, maxX, maxY, fn)
