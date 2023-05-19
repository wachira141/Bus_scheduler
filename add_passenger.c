#include "header.h"



struct passenger *new_pass(char name[20], int id, int contact, char dest[20])
{
struct passenger *new;

new = malloc(sizeof(struct passenger));
if(new == NULL)
{
printf("cannot assign memory to the passenger");
return;
}

new-> name = name;
new->id = id;
new->contact = contact;
new->destination = dest;

return new;
}

