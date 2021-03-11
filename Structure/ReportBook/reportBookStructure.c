#include<stdio.h>
#include<string.h>
struct report
{
int regno;
int marks;
char name[100];
};
int main()
{
int pos;
struct report rp1;//declaring report1 of the student
struct report rp2;
/*report1 specification*/
rp1.regno=8228;
rp1.marks=450;
strcpy(rp1.name,"Wazimu");
/*report2 specification*/
rp2.regno=8390;
rp2.marks=460;
strcpy(rp2.name,"Mshamba");
/*printing report details*/
printf("Regno\tMarks\tName\n");
printf("%d\t%d\t%s\n",rp1.regno,rp1.marks,rp1.name);
printf("%d\t%d\t%s\n",rp2.regno,rp2.marks,rp2.name);
return 0;
}
