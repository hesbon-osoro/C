#include<stdio.h>
int main()
{
char c, msg[] = "this is a secret message";
int i = 0;
char code[26] =  /* Initialize our encryption code */
{'t','f','h','x','q','j','e','m','u','p','i','d','c', 'k','v','b','a','o','l','r','z','w','g','n','s','y'} ;
 /* Print the original phrase */
printf ("Original phrase: %s\n", msg);
/* Encrypt */
while( msg[i] != '\0' )
{
     if( isalpha( msg[ i ] ) )
{
c = tolower( msg[ i ] ) ;
msg[ i ] = code[ c - 'a' ] ;
}
++i;
}
 printf("Encrypted: %s\n", msg ) ;
 return 0;
}
