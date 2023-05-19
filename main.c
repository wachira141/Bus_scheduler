#include "header.h"

/*
 * main - main function 
 *
 *
 */



int main()
{
int option;
char name[20];
char route[20];
int pass;
int reg;



struct bus busses[10];

int bus_num;

while(option != 2 && option != 1) {

    printf("Please choose an operation\n");
    printf("1: create a new bus\n");
    printf("2: board a bus\n");
    printf("3: exit\n");
    
    scanf("%d", &option);
    if(option == 3)
        exit(1);
}


if(option == 1)
{
	printf("enter the name of the bus: ");
	scanf("%s", &name);

	printf("enter reg number: ");
	scanf("%d", &reg);
	printf("enter num of passengers: ");
	scanf("%d", &pass);

	printf("enter a new route: ");
	scanf("%s", &route);

	//create a bus
	bus_num = create_bus(name, reg, pass, route);
}
}
