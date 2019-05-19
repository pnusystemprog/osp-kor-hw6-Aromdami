#include "phone.h"
#include "print.h"
extern int size;
extern struct contact book[];

void printAll()
{
	printf("<< Display all contacts in the PhoneBook >>\n");
	for (int i = 0; i < size; i ++)
		printf("%s\t%s\n", book[i].name, book[i].pNumber);
}

