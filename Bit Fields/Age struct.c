#include<stdio.h>
#include<string.h>
struct
{
unsigned int age:3;/*3 bits means 3 binary digits
 for decimal i.e 000[0]-111[7]*/
}Age;
void main()
{
Age.age=4;
printf("Sizeof(Age): %d\n",sizeof(Age));
printf("Age.age: %d\n",Age.age);

Age.age=7;
printf("Age.age: %d\n",Age.age);

Age.age=8;//8 is a 4 bit ie 1000(in binary form)
printf("Age.age: %d\n",Age.age);//truncates [1]000 in that case and prints 0 only


/*When the above code is compiled,
it will compile with a warning and when executed*/

//below is that error as by the compiler...

/*H:\Hesbon\C dsgns\Bit Fields\Age struct.c|16|warning:
 large integer implicitly truncated to unsigned type
 [-Woverflow]|*/
}
