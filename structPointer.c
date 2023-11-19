#include <stdio.h>
#include <string.h>

struct farmer
{
    char name[12];
    int kilos;
    char village[10];
};

void updateFarmer( struct farmer *ptr)
{
strcpy(ptr->name, "linu");
ptr->kilos = 34;
strcpy(ptr->village, "kiambui");
};

int main(void)
{
struct farmer tea;
struct farmer *p = &tea; 
updateFarmer(&tea);
printf("%d", p->kilos);
    return(0);
}