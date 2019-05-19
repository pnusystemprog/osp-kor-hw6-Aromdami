#ifndef PHONE_H
#define PHONE_H

#include <stdio.h>
#include <string.h>

#define MAX 50
#define DEBUG

extern char password[255];
int size;

struct contact {
	char name[10];
	char pNumber[13];
};
#endif
