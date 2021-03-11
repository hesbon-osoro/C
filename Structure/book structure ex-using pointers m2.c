#include<stdio.h>
#include<string.h>
typedef struct Books
{
char title[50];
char author[50];
char subject[50];
int book_id;
}bk;
//function declaration
void printBook(bk *book);
int main()
{
bk Book1;//Declare Book1 of type Book
bk Book2;//Declare Book2 of type Book

//book1 specification
strcpy(Book1.title,"C Programming");
strcpy(Book1.author,"Nuha Ali");
strcpy(Book1.subject,"C Programming Tutorial");
Book1.book_id=123456;

//book2 specification
strcpy(Book2.title,"Telecom Billing");
strcpy(Book2.author,"Zara Ali");
strcpy(Book2.subject,"Telecom Billing Tutorial");
Book2.book_id=987654;

//print Book1 info by passing address of Book1
printf("Book 1 info\n**********\n");
printBook(&Book1);

//print book2 info by passing address of Book2
printf("\nBook 2 info\n***********\n");
printBook(&Book2);

return 0;
}
void printBook(bk *book)
{
printf("Book title: %s\n",book->title);
printf("Book author: %s\n",book->author);
printf("Book subject: %s\n",book->subject);
printf("Book book_id: %d\n",book->book_id);
}
