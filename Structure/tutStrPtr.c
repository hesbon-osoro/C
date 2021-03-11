/*------------ program 5.2 ---------------------*/
/* Program 5.2 from PTRTUT10.HTM   6/13/97 */
#include <stdio.h>
#include <string.h>
struct tag{   /* the structure type */
char lname[20]; /* last name */
char fname[20]; /* first name */
int age;        /* age */
float rate;   /* e.g. 12.75 per hour */ };
struct tag my_struct; /* define the structure */
void show_name(struct tag *p); /* function prototype */
int main(void)
{
struct tag *st_ptr;/* a pointer to a structure */
st_ptr = &my_struct;/* point the pointer to my_struct */
strcpy(my_struct.lname,"Jensen");
strcpy(my_struct.fname,"Ted");
printf("This is a struct output\n");
printf("First name: %s \n",my_struct.fname);
printf("Last name: %s\n",my_struct.lname);
my_struct.age = 63;
show_name(st_ptr); /* pass the pointer */
return 0;
}
void show_name(struct tag *p)
{
printf("\nThis is a pointer output\n");
printf("First name: %s \n", p->fname);  /* p points to a structure */
printf("Last name: %s \n", p->lname);
printf("Age: %d\n", p->age);
}
/*-------------------- end of program 5.2 ----------------*/
