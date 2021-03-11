#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
char name[100];
char *description;
strcpy(name,"Wazimu HB");
/*allocate memory dynamically*/
description=malloc(50*sizeof(char));
if(description==NULL)
{
fprintf(stderr,"Error - unable to allocate required memory\n");
}
else
{
strcpy(description,"This is a Computer maddened guy...\n");
}
/*suppose you want to store bigger description*/
description=realloc(description,100*sizeof(char));
if(description==NULL)
{
fprintf(stderr,"Error - unable to allocate required memory\n");
}
else
{
strcat(description,"he a nerd\n");
}
printf("Name: %s\n",name);
printf("Description: %s\n",description);
/*release memory using free() function*/
free(description);
return 0;
}
