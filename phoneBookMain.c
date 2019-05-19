#include "phone.h"
#include "register.h"
#include "print.h"
#include "search.h"
#include "delete.h"
#include <stdio.h>

#ifdef DEBUG
	struct contact book[MAX] = {
		{"Test1", "010-1234-5678"},
		{"Test2", "010-2345-6789"},
		{"Test3", "010-2425-6343"}};
    char password[255] = {"qwer1234"};
	extern	int size = 3;
#endif


static int input = 0;

int main()
{
	while(input != 5)
	{
		puts("====================Telephone Book Management====================");
		puts("<<<1.Register\t2.Print All\t3.Search\t4.Delete\t5.Exit>>>");
		printf("Please Enter your Service Number <1-5> : "); scanf("%d", &input);
		switch (input)
		{
		case 1 : registerPhoneData(); break;
		case 2 : printAll(); break;
		case 3 : searchByName(); break;
		case 4 : deleteByName(); break;
		case 5 : return 0;
		}
		printf("\n\n");
	}
	return 0;
}
