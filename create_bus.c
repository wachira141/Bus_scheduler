#include "header.h"
#define vstr(s)

int create_bus(char *name, int bus_num, int pass, char *routes)
{

	FILE *fp,*op, *fopen();
	char *str, data, *token, *substr, *check, *bus_number;
	char bus[100];
        char bus_num_str[50];

	if(((fp = fopen("busses_lis", "a")) == NULL) || ((op = fopen("busses_lis", "r")) == NULL)) {
	    printf("couldn't open the specified file");
	    return 1;	
	} else {
	    /*read the file to check if the bus is registered using reg_num
	     *read file line by line
	     * tokenize the line
	     * check if the reg_num exists in the token
	     * if yes, exit
	     * register for a new bus
	     */

	    while(fgets(bus, sizeof(bus), op)){
		token = strtok(bus, ",");
		while( token != NULL) {
		   if((substr = strstr(token, "reg_num")) != NULL){
		       //stringify the bus_num provided
		       sprintf(bus_num_str, "%d", bus_num);
		       bus_number = strstr(token,bus_num_str);
			
			if(bus_number != NULL){
			    if(atoi(bus_number) == bus_num){
	 	                printf("Bus with registration number: %s is already registered\n", bus_number);
				exit(EXIT_FAILURE);
			    }
		      }
		    }

		    token = strtok(NULL, ",");
		}
	        
	    }
	    //check if the reg bus exists using reg num and bus name
	    //if exists notify user and prompt for new reg number
	    fprintf(fp,"{name:%s, reg_num: %d, pass: %d, routes: %s },\n", name, bus_num, pass, routes);
	}
    fclose(fp);
    fclose(op);

    printf("bus created --> name:%s, reg_num: %d, pass: %d, routes: %s\n", name, bus_num, pass, routes);
    return 0;
}

