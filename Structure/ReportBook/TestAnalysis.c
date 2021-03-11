#include<stdio.h>
#include<string.h>
#define SIZE 10

typedef struct Test
{
int Regno;
char Name[20];
int Mat;
int Eng;
int Kis;
int Sci;
int Sst;
}test;
/*function declarations*/
void totalPerStud(test t1[]);
float meanPerStud(test t1[]);
void gradePerStud(test t1[]);
void studRank(test t1[]);
test t1[]=
{
{8228,"Wazimu",85,56,56,92,45},
{8200,"Prince",20,48,76,45,64},
{8390,"Mshamba",20,26,48,76,94},
{8286,"Frank",59,77,76,62,51},
{8276,"Leevins",56,54,68,32,86},
{7458,"Mbira",74,35,64,52,47},
{8102,"Kepha",88,45,48,97,56},
{8234,"Dickson",88,87,78,48,85},
{8124,"Losh",74,65,77,66,68},
{8234,"Duke",98,78,88,89,75},
};
//main function
int main()
{
system("color a");
int i,total;
float average;

printf("\t***Test 1 Results Term 2 2012***\n");
printf("\t   --- --- --- --- --- --- ---\n");
printf("The Result before sort:\n\n");
printf("RegNo\tName\tMat\tEng\tKis\tSci\tSst\n");

Display();

printf("\nThe Result with Totals:\n\n");
printf("RegNo\tName\tMat\tEng\tKis\tSci\tSst\tTotal\n");
totalPerStud(t1);

printf("\nThe Result with Totals & Average:\n\n");
printf("RegNo\tName\tMat\tEng\tKis\tSci\tSst\tTotal\tAverage\n");
meanPerStud(t1);
/*Grading Section*/
printf("\nThe Result with Totals, Average, Grade & Comment:\n\n");
printf("RegNo\tName\tMarks\tTotal\tAverage\tGrade\tComment\n");
gradePerStud(t1);

/*printf("\nThe Result after sort:\n\n");
printf("RegNo\tName\tMat\tEng\tKis\tSci\tSst\n");
DescSort();
Display();*/

//studRank(t1);

return 0;
}

/*Function definitions*/
void totalPerStud(test t1[])
{

    int i,total;
    for(i=0;i<SIZE;i++)
    {
      total=t1[i].Mat+t1[i].Eng+t1[i].Kis+t1[i].Sci+t1[i].Sst;
      printf("%d\t%s\t%d\t%d\t%d\t%d\t%d\t%d\n",t1[i].Regno,t1[i].Name,t1[i].Mat,t1[i].Eng,t1[i].Kis,t1[i].Sci,t1[i].Sst,total);

    }

}

float meanPerStud(test t1[])
{
    int i,total[SIZE];
    float average;
    for(i=0;i<SIZE;i++)
    {
      total[i]=t1[i].Mat+t1[i].Eng+t1[i].Kis+t1[i].Sci+t1[i].Sst;
      average=(float)total[i]/5;
      printf("%d\t%s\t%d\t%d\t%d\t%d\t%d\t%d\t%.2f\n",t1[i].Regno,t1[i].Name,t1[i].Mat,t1[i].Eng,t1[i].Kis,t1[i].Sci,t1[i].Sst,total[i],average);

    }
    return 0;
}

void gradePerStud(test t1[])
{
    int i,total;
    int average;
    float ave;
    char grade,comment;
    for(i=0;i<SIZE;i++)
    {
      total=t1[i].Mat+t1[i].Eng+t1[i].Kis+t1[i].Sci+t1[i].Sst;
      ave=(float)total/5;
      average=ave;
        printf("%d\t%s\txxxxx\t%d\t%.2f\t",t1[i].Regno,t1[i].Name,total,ave);
      if(average>=90&&average<=100){
          printf("A\tExcellent");
      }else if(average>=80&&average<=89){
          printf("A-\tVery Good");
      }else if(average>=70&&average<=79){
          printf("B+\tGood");
      }else if(average>=60&&average<=69){
          printf("B\tCool");
      }else if(average>=50&&average<=59){
          printf("B-\tWork Smarter");
      }else if(average>=40&&average<=49){
          printf("C\tAverage");
      }else if(average<40){
          printf("Weak");
      }else{
          printf("E\tInvalid Entry!");
        }
        putchar('\n');
    }

}
/*
void studRank(test t1[])
{
printf("\nThe Result with Totals & Rank:\n\n");
printf("RegNo\tName\tMat\tEng\tKis\tSci\tSst\tTotal\tRank\n");

}*/
/*void DescSort()
{
  int i,j,temp;
  test *totalArray[SIZE];
  char tempName[20];
  for(i=0;i<SIZE;i++)
{
  totalArray[i]=t1[i].Eng+t1[i].Kis+t1[i].Mat+t1[i].Sci+t1[i].Sst;
}

for(i=SIZE-1;i>=0;i--){
   for(j=0;j<i;j++){
    if(totalArray[j]<totalArray[j+1]){
     temp=t1[j].Regno;
     t1[j].Regno=t1[j+1].Regno;
     t1[j+1].Regno=temp;

     tempName[20]=t1[j].Name;
     t1[j].Name[20]=t1[j+1].Name[20];
     t1[j+1].Name[20]=tempName[20];

     temp=t1[j].Eng;
     t1[j].Eng=t1[j+1].Eng;
     t1[j+1].Eng=temp;

     temp=t1[j].Kis;
     t1[j].Kis=t1[j+1].Kis;
     t1[j+1].Kis=temp;

     temp=t1[j].Mat;
     t1[j].Mat=t1[j+1].Mat;
     t1[j+1].Mat=temp;

     temp=t1[j].Sci;
     t1[j].Sci=t1[j+1].Sci;
     t1[j+1].Eng=temp;

     temp=t1[j].Sst;
     t1[j].Sst=t1[j+1].Sst;
     t1[j+1].Sst=temp;
    }
  }
}
}*/

void Display()
{
  int i;
  //loop to access the array elements
for(i=0;i<SIZE;i++)
{
printf("%d\t%s\t%d\t%d\t%d\t%d\t%d\t\n",t1[i].Regno,t1[i].Name,t1[i].Mat,t1[i].Eng,t1[i].Kis,t1[i].Sci,t1[i].Sst);
}
}

