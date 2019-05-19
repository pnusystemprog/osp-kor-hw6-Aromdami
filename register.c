#include "phone.h"
#include "register.h"

extern int size;
extern struct contact book[];
extern char password[];

void registerPhoneData()
{
	int error = 0;
	char name[255];
	char phone[255];
	char pass[255];

	while (error !=3)
	{
		printf("Password : "); scanf("%s", pass);
		if (strcmp(pass, password))
		{
			error ++;
			switch(error){
			case 1: printf("Not Matched!!!\n"); break;
			case 2: printf("Not Matched!!!(twice)\n"); break;
			case 3: printf("Not Matched!!!(3 Times)\n");
				printf("You are not allowed to access PhoneBook.\n");
				break;}
		}
		else {
			printf("Password Matched.\n");
			printf("New User NAme : "); scanf("%s", name);
			printf("Phone Number : "); scanf("%s", phone);
			strcpy(book[size].name, name);
			strcpy(book[size].pNumber, phone);
			size ++;
			break;
		}
	}
}
