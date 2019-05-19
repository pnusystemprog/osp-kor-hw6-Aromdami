#include "phone.h"
#include "delete.h"
extern int size;
extern struct contact book[];

void deleteByName()
{
	char search[255];
	int count = 0;
	printf("Enter a name to search : "); scanf("%s", search);

	for (int i = 0 ; i < size; i ++)
	{
		if (!strcmp(search, book[i].name))
		{
			printf("%s is deleted...\n", book[i].name);
			for(int j = i; j < size; j ++)
				book[j] = book[j + 1];
			size --;
			break;
		}
		else
			count ++;
	}
	if (count == size) printf("Oops! %s is not in the PhoneBook.\n", search);
}
