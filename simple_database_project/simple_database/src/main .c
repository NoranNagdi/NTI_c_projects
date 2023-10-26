/*
 ============================================================================
 Name        : hamada2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct employee{
	char name[20];
	char address[20];
	int id;
	float salary;
};

extern struct employee emp[5];


int main(void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	while(1)
	{
		menu();
		int option;
		scanf("%d",&option);
		if(option == 1)
		{
			scaninfo(emp);
		}
		else if(option == 2)
		{
			printinfo(emp);
		}
		else if(option == 3)
		{
			laregest_salary(emp);
		}

		else if(option == 4)
		{
			search_by_ID(emp);
		}

		else if(option == 5)
		{
			puts("Terminating Program !!!");
			break;
		}
		else
		{
			puts("Invalid Option");
		}

	}
}
