#include <stdio.h>
#include <string.h>
struct patient
{
int id;
char name[10];
char gender;
};


 void passByValue( struct patient p)
    {
    p.id = 102;
    printf(" The patient's ID is: %d \n", p.id);
    printf(" The patient's name is: %s \n", p.name);
    printf(" The patient's gender is: %c \n", p.gender);
    }

int main(void)
{
struct patient P1;
P1.id = 101;
strcpy(P1.name, "ABC");
P1.gender = 'M';
passByValue(P1); // pass structure variable by value.

printf("\n The original value of ID is: %d\n\n", P1.id);


return (0);
}