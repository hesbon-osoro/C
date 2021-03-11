#include<stdio.h>
int main()
{
char str1[12]="Hello";
char str2[12]="World";
char str3[12];
int len;
int cmp;
char a;
printf("str1: %s\n",str1);
printf("str2: %s\n",str2);
//copy str1 to str3
strcpy(str3,str1);
printf("strcpy(str3,str1): %s\n",str3);
//concatenates str1 and str2
strcat(str1,str2);
printf("strcat(str1,str2): %s\n",str1);
//total length of str1 after concatenation
len=strlen(str1);
printf("strlen(str1): %d\n",len);
//comparing str1 and str2
cmp=strcmp(str1,str2);
printf("strcmp(str1,str2): %d\n",cmp);
//pointer to an occurence of a character
strchr(str1,'e');
printf("strchr(str1,l): %c\n",str1);
return 0;
}
