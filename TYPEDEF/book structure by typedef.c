#include<stdio.h>
#include<string.h>
typedef struct Books
{
char title[50];
char author[50];
char subject[100];
int book_id;
}Book;//optional: one or more structure variables
int main()
{
Book book;//Declare Book1 of type Book
Book Book2;//Declare Book2 of type Book
//book1 specification
strcpy(book.title,"C Programming");
strcpy(book.author,"Nuha Ali");
strcpy(book.subject,"C Programming Tutorial");
book.book_id=123456;
//book2 specification
strcpy(Book2.title,"Telecom Billing");
strcpy(Book2.author,"Zara Ali");
strcpy(Book2.subject,"Telecom Billing Tutorial");
Book2.book_id=987654;
//print Book1 info
printf("Book 1 info\n**********\n");
printf("Book 1 title: %s\n",book.title);
printf("Book 1 author: %s\n",book.author);
printf("Book 1 subject: %s\n",book.subject);
printf("Book 1 book_id: %d\n",book.book_id);

//print book2 info
printf("\nBook 2 info\n***********\n");
printf("Book 2 title: %s\n",Book2.title);
printf("Book 2 author: %s\n",Book2.author);
printf("Book 2 subject: %s\n",Book2.subject);
printf("Book 2 book_id: %d\n",Book2.book_id);
return 0;
}
