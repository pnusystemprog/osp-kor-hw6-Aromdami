#include "phone.h"
#include "search.h"
extern int size;
extern struct contact book[];

void searchByName()
{
	char search[255];
	int count = 0;
	printf("Enter a name to search : "); scanf("%s", search);

	for (int i = 0 ; i < size; i ++)
	{
		if (!strcmp(search, book[i].name))
			printf("%s\t%s\n", book[i].name, book[i].pNumber);
		else
			count ++;
	}
	if (count == size) printf("Oops! %s is not in the PhoneBook.\n", search);
}
