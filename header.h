#ifndef _MAIN_
#define _MAIN_
#include <string.h>
#include <stdlib.h>
#include <stdio.h>



/*struct fro creating a passenger */
struct passenger {
        char *name;
        int contact;
        int id;
        char *destination;
};


/*struct for defining a bus */
struct bus{
        /*initialize a bus object */
        char *name;
        int bus_num;
        struct passenger *passenger;
        int capacity;
        char routes[10][30];
};


int create_bus(char *name, int bus_num, int pass, char *routes);
struct passenger *new_pass(char *name, int id, int contact, char *destination);



#endif
