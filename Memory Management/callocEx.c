#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
char name[100];
char *description;
strcpy(name,"Wazimu hb");
/*allocate memory dynamically*/
description=calloc(100,sizeof(char));
if(description==NULL)
{
fprintf(stderr,"Error - unable to allocate required memory\n");
}
else
{
strcpy(description,"Wazimu, a Computer maddened guy....\n");
printf("Name : %s\n",name);
printf("Description: %s\n",description);
}
return 0;
}
